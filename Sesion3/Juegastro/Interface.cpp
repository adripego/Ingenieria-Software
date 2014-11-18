#include "stdafx.h"
#include "Interface.h"
#include "Entity.h"
#include <conio.h>
//kbhit
//le pasa a pj las ordernes
//PASAR PUNTERO A PROTA AL CREAR EL INPUT EN GAME.cpp

Interface::Interface(Entity *pHero)
{
    m_pMainChar = pHero;
}

int Interface::getInput(void)
{
    if (_kbhit())
        printf("has pulsado la tecla %c", _getch());

    return _getch();

}