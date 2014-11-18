#ifndef _WORLD_H_
#define _WORLD_H_
#include "Entity.h"
//const unsigned int MAX_ENTITIES = 10;

//gestion de colisiones

//Entity g_aEntityList[MAX_ENTITIES];       // Lista de todas las entidades

class World{
    private:
        Entity  **m_pEntity;
        int m_nEntity;
    public:
        World::World();
        World::World(Entity **m_pEntity, int nEntity);
        void draw(void);
        void update(void);
        //void addEntity(Entity *pEntidad);
        
};
#endif