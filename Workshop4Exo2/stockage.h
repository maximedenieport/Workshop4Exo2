#pragma once
#include <string>
#include "cube.h"
#include "rectangle.h"
#include "objet2d.h"
#include <iostream>


using namespace std;

class stockage
{
public:
	stockage(void);
	~stockage(void);

	void AtHead(objet2d* objet);
	void AtTail(objet2d* objet);
	void AtIndex(objet2d* objet, int index);
	void suppr(int index);

	void afficherInfoChaine();


private:
	struct maillon {
		objet2d* objet;
		maillon* next;
	};

	maillon* tail;
	maillon* head;
};

