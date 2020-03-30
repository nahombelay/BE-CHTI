# BE-CHTI
Florian Leon et Nahom Belay

Etape 1: Signal carré de précision

  Tout fonctionne, on observe bien un sugnal carré avec le logic analyser 
  
Etape 2: DFT en virgule fixe

  Partie 1: Préliminaires, tables trigo
      On a bien cos^2(a) + sin^2(a) = 1
      
  Partie 2: Calcul DFT
    On avait codé dans reel.s la fonction qui permettait de calculer la partie réelle. Elle avait l'air de fonctionner mais    elle était un peu compliqué. On a donc repris le code dans dftinit (on a donné un nom "générique" pour eviter toute confusion lorsqu'on appelle cette fonction pour calculer la partie imaginaire (avec TabSin plutôt que TabCos).
    Le code avec dftinit compila mais on ne l'a pas encore "fait tourné" pour voir si tout fonctionnait bien.
    
    
  
