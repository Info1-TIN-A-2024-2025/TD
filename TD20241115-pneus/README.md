# Info1 - Labo06 - Roue et pneu

![](../../workflows/labo06/badge.svg)

## Objectifs

Les principaux buts de ce travail de laboratoire sont :

- analyser un cahier des charges de manière autonome et concevoir un algorithme de traitement simple,
- écrire un programme complet qui compile sans erreur ni warning,
- livrer un programme facile à lire et respectant les bonnes pratiques de l'écriture d'un code source C,
- vérifier la validité des données fournies au programme,
- vérifier les résultats.

## Durée

La durée encadrée de ce labo est de 2x45 minutes.

## Cahier des charges

Le but de ce labo est de réaliser un programme permettant de saisir
les caractéristiques des pneus d'une voiture (ex: `225/55R17`) ainsi
qu'un nombre de kilomètres à parcourir et de calculer et afficher :
- le diamètre du pneu en [cm],
- le périmètre du pneu en [m],
- le nombre de tours de roues nécessaires pour parcourir la distance.

## Saisie des données

Les données seront fournies par l'utilisateur lors de l'appel du programme avec le format suivant :

- dimension du pneu au format `x/yRz` (ex: `225/55R17`) avec :
  - `x` : largeur du pneu en [mm] (>0),
  - `/` : séparateur imposé,
  - `y` : rapport en [%] entre la hauteur du flanc et la largeur du pneu (>0),
  - `R` : séparateur imposé,
  - `z` : diamètre de la jante en ["] (>0),
- distance à parcourir (ex: `24.5`) en ligne droite en [km] (>0).

## Calculs

Après validation, les données seront traitées pour calculer en détail les éléments suivants  (les noms de ces 3 variables sont imposés):

| variable | description | unité|
|-----|----|----|
| `diameter` | le diamètre de la roue | [cm]|
| `perimeter`| le périmètre de la roue |  [m] |
| `num_rotation`| le nombre de tours de roue nécessaires pour parcourir la distance  |N/A|

## Affichage des résultats

L'exemple ci-dessous devra être pris comme exemple.

```bash
> ./app 195/55R15 38
+---------------------+-------------+
| Diameter            |    59.55 cm |
| Perimeter           |     1.87 m  |
| Number of rotations | 20312.0     |
+---------------------+-------------+
```

### Adaptation de la largeur de l'affichage

Lors de l'affichage des valeurs dans la deuxième colonne, le format doit être adapté de façon à présenter un alignement correct :
- diamètre : 2 chiffres après la virgule suivi d'un espace, de l'unité `cm`,
- périmètre : 2 chiffres après la virgule suivi d'un espace, de l'unité `m`,
- nombre de rotations : 1 chiffre après la virgule sans unité.

La largeur de la colonne doit être adapté au plus grand nombre à afficher de façon à avoir un espace avant et un espace après et en conservant les points décimaux alignés.

Exemple 1 : largeur de la deuxième colonne = 12
```txt
> ./app 225/55R17 10
+---------------------+------------+
| Diameter            |   67.93 cm |
| Perimeter           |    2.13 m  |
| Number of rotations | 4685.9     |
+---------------------+------------+
``` 

Exemple 2 : largeur de la deuxième colonne = 15
```txt
> ./app 225/55R17 10000
+---------------------+---------------+
| Diameter            |      67.93 cm |
| Perimeter           |       2.13 m  |
| Number of rotations | 4685851.4     |
+---------------------+---------------+
``` 

Exemple 3 : largeur de la deuxième colonne = 10
```txt
> ./app 225/55R17 0.0001
+---------------------+----------+
| Diameter            | 67.93 cm |
| Perimeter           |  2.13 m  |
| Number of rotations |  0.0     |
+---------------------+----------+
``` 



## Code retour

Pour ce programme, une combinaison des valeurs suivantes doit être renvoyée :

| description | code retour |
|---|:---:|
|déroulement correct du programme | 0 |
|pas assez d'argument | 1 |
|trop d'arguments | 2 |
|argument(s) incorrect(s)| 4 |

En cas d'erreur, un message d'erreur contenant le mot `error` doit être affiché dans le terminal.

## Bonus

### option `-h` 

Lors de l'appel du programme avec l'option `-h`, le programme affiche à l'écran des informations sur comment utiliser le programme.

```txt
> ./app -h
usage: ./app -h or ./app tire distance

Computation of wheel diameter, perimeter and number of rotation for a given tire and distance.
    -h          display this message
    tire        specify the tire dimensions in format x/yRz
    distance    specify the distance fo the trip [m]
``` 

Le code retour vaut `0` en cas d'appel du programme avec cette option.



## Test

Le labo est fourni avec le fichier `t.yaml` qui contient les tests validant le comportement du programme lors de l'exécution de la commande `make test` :

1. gestion des paramètres,
2. paramètres erronés,
3. tests nominaux.

## Livraison

Après avoir effectué un `commit` pour le  programme de ce labo, vous devez réaliser un `push` afin de publier votre travail sur `GitHub`.

La date et l'heure de livraison sont indiqués dans l'*assignment* que vous avez accepté pour ce labo.
