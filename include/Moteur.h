/**
 * @file Moteur.h
 * Fichier d'en-tête de Moteur.c
 * présentant la définition de
 * ses fonctions et structures,
 * ainsi que leur documentation
 * @author Claire SALLE
 * @author Rayane NASSIB
 * @date 05-04-2023
 */

#ifndef __MOTEUR__
#define __MOTEUR__ 

typedef unsigned long long Position;

enum touche { HAUT, BAS, GAUCHE, DROITE, VALIDER, SUPPRIMER };

typedef enum _case_ {
    A1,
    B1,
    C1,
    D1,
    E1,
    F1,
    G1,
    H1,
    A2,
    B2,
    C2,
    D2,
    E2,
    F2,
    G2,
    H2,
    A3,
    B3,
    C3,
    D3,
    E3,
    F3,
    G3,
    H3,
    A4,
    B4,
    C4,
    D4,
    E4,
    F4,
    G4,
    H4,
    A5,
    B5,
    C5,
    D5,
    E5,
    F5,
    G5,
    H5,
    A6,
    B6,
    C6,
    D6,
    E6,
    F6,
    G6,
    H6,
    A7,
    B7,
    C7,
    D7,
    E7,
    F7,
    G7,
    H7,
    A8,
    B8,
    C8,
    D8,
    E8,
    F8,
    G8,
    H8
} Case;

int est_case_occupee(Position pos, Case c);

int placer_dame_position(Position *pos, Case c);

int nombre_dames(Position pos);

int gerer_controles(int touche, Position pos, Case *actu);

int afficher_position(Position pos);

int calculer_cases_attaquees(Position *pos, Case c);

int remplir_tab_cases_attaquees();

int est_sans_attaque_mutuelle(Position pos);

#endif
