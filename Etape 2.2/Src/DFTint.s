	thumb
	AREA DFTint, code, READONLY
	
	export dftint
		
dftint	proc
;TabSig dans r0 ;valeur de k dans r1 ;adresse de TabCos dans r2 
	push	{lr, r4, r5, r6}	
;initialisation
	mov	r3, #0	;i ; initialisation (c'est le premier tour de la boucle)
	mul	r12, r1, r3	;r12 contient i * k normalement 0 à la premiere itération
	mov	r4, #0	;initialisation resultat 

;debut for
	; on fait le modulo de r12 (i*k)
debfor	and 	r12, r12, #0x3f
	; on met dans r5 la valeur du cos(i*k)
	ldrsh	r5, [r2, r12, lsl #1]
	; on met dans r6 la valeur du signal(k)
	ldrsh	r6, [r0, r3, lsl #1]
	; on ajoute le produit dans r4
	mla	r4, r5, r6, r4
	add 	r3, #1
	cmp	r3, #64
	blt	debfor
;fin for
	mov	r0, r4
	pop	{lr, r4, r5, r6}
	bx	lr	
	endp
	end