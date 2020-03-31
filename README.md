# BE CHTI
---
######  Florian Leon et Nahom Belay

---
## Etape 1 : Signal carré de précision

>Tout fonctionne, on observe bien un signal carré avec le logic analyser.
>**NB :** On n'observe pas le signal avec le *portb.10* mais le *portb.1*
---  
## Etape 2 : DFT en virgule fixe

  ### Partie 1 : Préliminaires, tables trigo
>On vérifie cos^2(a) + sin^2(a) = 1 (code dans **test.s**)
     
  ### Partie 2 : Calcul DFT
    #### Question 1 (étape 2.21)
>On a donc repris le code dans dftinit (on a donné un nom "générique" pour eviter toute confusion lorsqu'on appelle cette fonction pour calculer la partie imaginaire (avec TabSin plutôt que TabCos).
>Le code avec dftinit fonctioonne et renvoie le résultat attendu

    #### Question 2 et 3 (étape 2.22)
>La fonction module fonctionne et renvoie bien le résultat voulu.
>**NB :** Les tests ont effectués pour un signal ayant une fréquence de 1, un phase de 0 et  N = 64 uniquement
---

Ce qui reste à faire: tester avec le jeu de données fourni 
    
    
  
