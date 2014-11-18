#include "stdafx.h"
#include "Game.h"
#include "World.h"
//#include "Entity.h"
//#include "Bullet.h"
#include "Character.h"


Entity *peBullet = NULL;

Game *peGame = NULL;



int _tmain(int argc, _TCHAR* argv[])
{
    peGame = new Game();
    peGame->initLevel();
    peGame->update();
    printf("Terminando juego.");
    getchar();
	return 0;
}
