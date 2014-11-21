#include "stdafx.h"
#include "World.h"

World::World(){};

World::World(Entity **entity, int nEntity){
    m_pEntity = entity;
    m_nEntity = nEntity;
}

void World::draw()
{
    for (unsigned int i = 0; i < m_nEntity; i++)
    {
        m_pEntity[i]->update();
        m_pEntity[i]->draw();
    }
}


//en update se comprueban las colisiones
void World::update()
{
    
}

//Gestor atmosferico, aqui

//char getLLuvia(int posicion, int )