	thumb
	AREA Module, code, READONLY
;La valeur de retour est obtenue par sommation des carrés effectuée sur 64 bits signés 
;puis ramenée à 32 bits en ne conservant que les 32 bits de fort poids
	export module
	extern dftint; qui prend tabsig, k et tabcos/tabsin
	extern TabCos
	extern TabSin

module proc
;r0 addresse du signal
;r1 valeur de k
;r2 et r3 pour stocker la multiplication signé sur 64 bits
;











	endp
	end