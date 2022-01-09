//
// Created by lucfo on 24/12/2021.
//
#include <stdio.h>
#include "main.h"


int debut_jeu() {
    char nom[20];
    printf("Saisissez le nom du joueur:\n");
    scanf("%s", nom);
}

int regle_monopoly(){

    printf("Ce jeu consiste a ACHETER, a LOUER ou a VENDRE diverses proprietes de facon si profitable que l on puisse devenir \n --le plus riche des joueurs et eventuellement, le GAGNANT"
           " -GO  est le point de depart, et l on fait avancer les jetons sur le plateau de jeu d apres le chiffre indique en lancant les des.\n"
           "--Si le jeton d un joueur se place sur une case qui n appartient encore a personne, le joueur pourra l acheter de la \n BANQUE, sinon, cette case sera vendue au plus offrant et dernier encherisseur.\n"
           "--Devenir proprietaire a pour OBJECTIF la perception de loyers des adversaires loges sur la case qui represente la \n propriete. Ces loyers sont fortement augmentes par la construction de maisons et d hotels;\n"
           "--il sera donc judicieux d en eriger sur ses terrains.\n"
           "--On pourra pour se procurer des fonds, hypothequer ces terrains en faveur de la banque, les cases  Caisse Commune  et \n Chance  obligent le joueur a tirer une carte, dont les indications devront etre observees.\n"
           "--les joueurs vont quelquefois en prison !\n"
           "--Somme toute, c est un jeu amusant, plein de surprises, et ou l on peut deployer son habilete.\n\n\n\n");

}

int relancement_interface() {

    int choix = 0;
    char nom[20];


    printf("1- JOUER\n");
    printf("2- REGLE\n");
    printf("3- CREDIT\n");
    printf("4- QUITTER\n");

    printf("Saisissez un chiffre :___");
    scanf("%d", &choix);

    (choix == 1) ? printf("Vous avez choisi de commencer une partie !\n\n") : printf("");
    (choix == 2) ? printf("Vous avez choisi de voir les regles !\n\n") : printf("");
    (choix == 3) ? printf("Vous avez choisi de voir les credits !\n\n") : printf("");
    (choix == 4) ? printf("Vous avez choisi de quitter !\n\n") : printf("");

    while (choix != 1 && choix != 2 && choix != 3 && choix != 4) {

        printf("le CARACTERE que vous avez tape n est pas utilise !\n");
        scanf("%s", nom);
        scanf("%d", &choix);

    }

    switch (choix) {


        case 1:
            printf("Bienvenu dans le jeu\n");
            debut_jeu();
            break;

        case 2:
            printf("les regles du monopoly:\n");
            regle_monopoly();
            relancement_interface();
            break;

        case 3:
            printf("par Theo PONS, Quentin AUBERT, Issam DIDI et Luc FORQUIN\n\n");
            relancement_interface();
            break;

        case 4:
            printf("a bientot\n");
            break;

        default:
            printf("");
            return 0;
    }


    return 0;
}