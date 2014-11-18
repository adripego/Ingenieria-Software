#include "stdafx.h"
#include <Windows.h>
#include "Game.h"
#include "Character.h"
#include "World.h"

Entity *peCharacter = NULL;
World *peWorld = NULL;


void Game::initLevel(void)
{
    Entity **m_pEntity = new Entity * [MAX_ENTITIES];
    m_pEntity[0] = new Character (50);
    peWorld = new World(m_pEntity,1);
    Interface input = new Interface;
}

void Game::update(void)
{
    while (true)
    {
        printf("\r");
        peWorld->update();
        peWorld->draw();
        Sleep(50);
    }
}
