#include <string>
#include "cube.h"
#include "rectangle.h"
#include "objet2d.h"
#include <iostream>
#include "stockage.h"

objet2d::objet2d()
{
	this->dim1 = 0;
	this->dim2 = 0;
}

objet2d::objet2d(int tdim1, int tdim2)
{
	this->dim1 = tdim1;
	this->dim2 = tdim2;
}

int objet2d::getPerimetre()
{
	return (2 * dim1 + 2 * dim2);
}

int objet2d::getAire() {
	return(dim1 * dim2);
}

std::string objet2d::afficheInfo() {
	std::string info = "Longueur = ";
	info += to_string(dim1);
	info += "Largeur = ";
	info += to_string(dim2);
	info += "Périmètre = ";
	info += to_string(getPerimetre());
	info += "Aire = ";
	info += to_string(getAire());

	return info;
}