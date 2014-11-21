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
    char keyPressed = NULL;
    if (_kbhit())
        keyPressed = static_cast<char>(_getch());
    switch (keyPressed)
    {
    case 'a':
        //m_pMainChar->moveLeft();
        printf("A pulsada");
    case 'd':
        printf("D pulsada");
        break;
    default:
        break;
    }

    return _getch();

}