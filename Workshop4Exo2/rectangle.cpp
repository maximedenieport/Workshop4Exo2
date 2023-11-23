#include <string>
#include "cube.h"
#include "rectangle.h"
#include "objet2d.h"
#include <iostream>
#include "stockage.h"

using namespace std;

rectangle::rectangle()
{
	this->dim1 = 0;
	this->dim2 = 0;
}

rectangle::rectangle(int longueur, int largeur)
{
	this->dim1 = longueur;
	this->dim2 = largeur;
}

int rectangle::getPerimetre()
{
	return (2 * dim1 + 2 * dim2);
}

int rectangle::getAire() {
	return(dim1 * dim2);
}

std::string rectangle::afficheInfo() {
	std::string info = "Rectangle || Longueur = ";
	info += to_string(dim1);
	info += "| Largeur = ";
	info += to_string(dim2);
	info += "| Perimetre = ";
	info += to_string(getPerimetre());
	info += "| Aire = ";
	info += to_string(getAire());

	return info;
}