# BE CHTI
---
######  Florian Leon et Nahom Belay
#
#
---
## Etape 1 : Signal carré de précision

>Tout fonctionne, on observe bien un signal carré avec le logic analyser.
>**NB :** On n'observe pas le signal avec le *portb.10* mais le *portb.1*
  
## Etape 2 : DFT en virgule fixe

  ### Partie 1 : Préliminaires, tables trigo
>On vérifie cos^2(a) + sin^2(a) = 1 (code dans **test.s**)
     
  ### Partie 2 : Calcul DFT
>On avait codé dans reel.s la fonction qui permettait de calculer la partie réelle. Elle avait l'air de fonctionner mais elle était un peu compliqué.
>On a donc repris le code dans dftinit (on a donné un nom "générique" pour eviter toute confusion lorsqu'on appelle cette fonction pour calculer la partie imaginaire (avec TabSin plutôt que TabCos).
>Le code avec dftinit compile mais on ne l'a pas encore "fait tourné" pour voir si tout fonctionnait bien.
>De plus, on a un problème non reglé pour le moment la fonction renvoie toujours le même résultat dans TabRes.
    
    
  
