#include "stockage.h"

using namespace std;

stockage::stockage() : head(nullptr), tail(nullptr) {};

stockage::~stockage() {
	maillon* temp = head;
	while (temp != nullptr) {
		head = head->next;
		delete temp;
		temp = head;
	}
}

void stockage::AtTail(objet2d* objet) {
	maillon* nouveau = new maillon;
	nouveau->objet = objet;
	nouveau->next = nullptr;

	if (head == nullptr) {
		head = nouveau;
		tail = nouveau;
	}
	else {
		tail->next = nouveau;
		tail = nouveau;
	}
};

void stockage::AtHead(objet2d* objet) {
	maillon* nouveau = new maillon;
	nouveau->objet = objet;
	nouveau->next = head;
	head = nouveau;
};

void stockage::AtIndex(objet2d* objet, int index) {
	maillon* nouveau = new maillon;
	nouveau->objet = objet;
	nouveau->next = nullptr;
	maillon* temp = head;
	int i = 0;

	while (i < index) {
		temp = temp->next;
		i++;
	}
	nouveau->next = temp->next;
	temp->next = nouveau;
};

void stockage::afficherInfoChaine() {
	maillon* temp = head;
	int index = 0;
	cout << endl << "Liste des maillons de la chaine : " << endl;
	while (temp != nullptr) {
		cout << "- Maillon " << index << " : " << temp->objet->afficheInfo() << endl;
		index++;
		temp = temp->next;
	}
};

void stockage::suppr(int index) {
	maillon* temp = head;
	maillon* temp2 = head;
	int i = 0;

	if (index == 0) {
		head = head->next;
		delete temp;
	}
	else {
		while (i < index) {
			if (temp == nullptr) {
				return;
			}
			temp2 = temp;
			temp = temp->next;
			i++;
		}
		temp2->next = temp->next;
		delete temp;
	}
	return;
}