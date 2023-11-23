#pragma once
#include <string>
#include "cube.h"
#include "rectangle.h"
#include "objet2d.h"
#include <iostream>
#include "stockage.h"

using namespace std;

class rectangle :
    public objet2d
{
public:
    rectangle();
    rectangle(int longueur, int largeur);
    virtual int getPerimetre();
    virtual int getAire();
    virtual string afficheInfo();
};

