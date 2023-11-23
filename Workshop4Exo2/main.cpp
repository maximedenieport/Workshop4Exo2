#include <string>
#include "cube.h"
#include "rectangle.h"
#include "objet2d.h"
#include <iostream>
#include "stockage.h"

using namespace std;

void commandes() {
    cout << "Liste des commandes disponibles : " << endl;
    cout << endl;
    cout << "commandes : afficher les commandes" << endl;
    cout << "creerChaine : creer une une chaine d'objets" << endl;
    cout << "inserer : inserer un objet a un endroit precis de la chaine" << endl;
    cout << "ajouter : ajouter un objet a la fin de la chaine" << endl;
    cout << "remplacerTete : remplacer la tete de la chaine" << endl;
    cout << "supprimer : supprimer un maillon de la chaine" << endl;
    cout << "afficher : afficher la chaine" << endl;
    cout << "quitter : quitter le programme" << endl;
    cout << endl;
}



int creerChaine(stockage* listeObjet) {
    int taille;

    cout << "Choississez le nombre d'objet que vous voulez : " << endl;
    cin >> taille;
    cout << endl;

    for (int i = 0; i < taille; i++) {

        objet2d* objet;
        cout << "Quel objet voulez vous ?" << endl;
        char nom; int longueur, largeur;
        cout << " 1 - Rectangle ou 2 - Carre " << endl;
        do {
            cin >> nom;
        } while ((nom != '1') && (nom != '2'));
        if (nom == '1') {
            cout << "Longueur du rectangle " << endl; cin >> longueur;
            cout << "Largeur du rectangle " << endl; cin >> largeur;
            objet = new rectangle(longueur, largeur);
        }
        else {
            cout << "Cote du carre " << endl; cin >> longueur;
            objet = new cube(longueur);
        }
        listeObjet->AtTail(objet);
    }
    cout << "Chaine creee avec succes" << endl;
    cout << endl;
    return 0;
}

int inserer(stockage* listeObjet) {
    int index;
    cout << "Apres quel maillon voulez-vous inserer un objet ?" << endl;
    cin >> index;
    cout << endl;

    objet2d* objet;
    cout << "Quel objet voulez-vous inserer ?" << endl;
    char nom; int longueur, largeur;
    cout << " 1 - Rectangle ou 2 - Carre " << endl;
    do {
        cin >> nom;
    } while ((nom != '1') && (nom != '2'));
    if (nom == '1') {
        cout << "Longueur du rectangle " << endl; cin >> longueur;
        cout << "Largeur du rectangle " << endl; cin >> largeur;
        objet = new rectangle(longueur, largeur);
    }
    else {
        cout << "Cote du carre " << endl; cin >> longueur;
        objet = new cube(longueur);
    }
    listeObjet->AtIndex(objet, index);

    cout << "Objet insere avec succes" << endl;
    cout << endl;

    return 0;
}

int ajouter(stockage* listeObjet) {
    objet2d* objet;
    cout << "Quel objet voulez-vous ajouter a la fin de la liste ?" << endl;
    char nom; int longueur, largeur;
    cout << " 1 - Rectangle ou 2 - Carre " << endl;
    do {
        cin >> nom;
    } while ((nom != '1') && (nom != '2'));
    if (nom == '1') {
        cout << "Longueur du rectangle " << endl; cin >> longueur;
        cout << "Largeur du rectangle " << endl; cin >> largeur;
        objet = new rectangle(longueur, largeur);
    }
    else {
        cout << "Cote du carre " << endl; cin >> longueur;
        objet = new cube(longueur);
    }
    listeObjet->AtTail(objet);
    return 0;
}

int remplacerTete(stockage* listeObjet) {

    return 0;
}

int supprimer(stockage* listeObjet) {

    return 0;
}



int main() {
    stockage listeObjet = stockage();
    commandes();

    string entree = "";
    while (entree != "quitter") {
        cout << "Entrez votre commande : " << endl;
        cin >> entree;
        cout << endl;

        if (entree == "commandes") {
            commandes();
        }
        else if (entree == "creerChaine") {
            creerChaine(&listeObjet);
        }
        else if (entree == "inserer") {
            inserer(&listeObjet);
        }
        else if (entree == "ajouter") {
            ajouter(&listeObjet);
        }
        else if (entree == "remplacerTete") {
            remplacerTete(&listeObjet);
        }
        else if (entree == "supprimer") {
            supprimer(&listeObjet);
        }
        else if (entree == "afficher") {
            listeObjet.afficherInfoChaine();
        }
    }

    return 0;
}