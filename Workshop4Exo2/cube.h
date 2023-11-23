#pragma once
#include <string>
#include "cube.h"
#include "rectangle.h"
#include "objet2d.h"
#include <iostream>
#include "stockage.h"

using namespace std;


class cube :
    public rectangle
{
public:
    cube();
    cube(int tcote);
    int getPerimetre();
    int getAire();
    int getCote();
    string afficheInfo();
private:
    int tcote;
};

