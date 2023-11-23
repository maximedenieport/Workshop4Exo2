#include <string>
#include "cube.h"
#include "rectangle.h"
#include "objet2d.h"
#include <iostream>
#include "stockage.h"

using namespace std;

cube::cube()
{
	this->tcote = 0;
}

cube::cube(int tcote)
{
	this->tcote = tcote;
}

int cube::getCote() {
	return tcote;
}

int cube::getPerimetre()
{
	return (4 * tcote);
}

int cube::getAire() {
	return(tcote * tcote);
}

std::string cube::afficheInfo() {
	std::string info = "Carre || Longueur du cote = ";
	info += to_string(tcote);
	info += "| Perimetre = ";
	info += to_string(getPerimetre());
	info += "| Aire = ";
	info += to_string(getAire());

	return info;
}