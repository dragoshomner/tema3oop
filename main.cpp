#include<iostream>
#include<string.h>
#include<vector>

using namespace std;


#include "Mancare.h"
#include "Mancare/Ciorba.h"
#include "Mancare/FelPrincipal.h"
#include "Mancare/Desert.h"

#include "Bautura.h"
#include "Bauturi/VinVarsat.h"
#include "Bauturi/VinLaSticla.h"
#include "Bauturi/BereLaSticla.h"
#include "Bauturi/Apa.h"

#include "Client.h"
#include "Masa.h"
#include "Restaurant.h"

int main()
{
    Restaurant* restaurant = Restaurant::getInstance();

    (*restaurant).start();

    return 0;
}
