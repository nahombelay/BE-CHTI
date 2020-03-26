	thumb
	AREA Reel, code, READONLY
	
	export reel
	;extern TabSig

reel proc
;&TabSig[i] dans r0 ;valeur de i*k dans r1 ;adresse de TabCos dans r2 ;(mettre dans la pile)
;x(i) donc r0 * tabCos[i*k]
	ldrsh	r3, [r2, r1, lsl #1]
	;push	{r0}
	ldrsh	r0, [r0]
	mul	r0, r0, r3
	;pop	{r0}
	bx	lr
	


	endp
	end