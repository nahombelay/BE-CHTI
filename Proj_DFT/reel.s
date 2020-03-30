	thumb
	AREA Reel, code, READONLY
	
	export reel
	extern res
	;extern TabSig

reel proc
;TabSig dans r0 ;valeur de k dans r1 ;adresse de TabCos dans r2 ;(mettre dans la pile ?)
;on verifie si i * k (dans r3 est inférieur à 64) ; il me faut un registre pour mettre i * k
	mov	r8, lr	;sinon ca bloque à la fin et je ne peux pas retourner au main
	push	{r8}
	push	{lr}
	ldr	r10, =res ; copie l'adresse de res dans r10
	push	{r11}	;pour le resultat
	;b	for
;boucle for
	mov	r3, #0	;i ; initialisation (c'est le premier tour de la boucle)
	push	{r7}
	mul	r7, r1, r3	;r1 contient i * k normalement 0 à la premiere itération
	mov	r11, #0	;res
	bl	ope	
;on incremente i
for	add	r3,#1 
;on verifie si i < 64
	cmp	r3, #63
	bge	fin
	mul	r7, r1, r3	;r1 contient i * k
	cmp	r7, #64
	bge	modulo		;si i * k >= 64
;donc ici normalement i * k < 64
	;push	{lr}
	bl	ope
	;pop	{PC}
	
fin	pop	{r7}
	mov	r0, r11	;on recupere le res final
	str 	r11, [r10] ; stocker la valeur de r4 dans res
	pop	{r11}
	pop	{lr}
	;pop	{r8}
	;mov	r4, r1
	;mov	lr, r8 ;fonctionne sans cette ligne ce qui devrait pas etre le cas...
	bx	lr	;on retourne au main


ope	push	{r5}
	;ldrsh	r5, [r2, r1, lsl #1]	;valeur de cos
	ldrsh	r5, [r2, r7, lsl #1]
	push	{r6}
	ldrsh	r6, [r0, r3, lsl #1]	;valeur du sig
	mul	r6, r0, r5
	add	r11, r6
	pop	{r6}
	pop	{r5}
	bl	for

modulo	sub     r7,#64
        cmp     r7,#64
        bge     modulo	;si supérieur on recommence
	bl	ope	;si inférieur c'est bon on passe à l'operation
	


	endp
	end