#ifndef _GAME_H_
#define _GAME_H_
#include "Entity.h"

const unsigned int MAX_ENTITIES = 10;
const unsigned int WORLD_SIZE = 70;

class Game
{
    private:
    public:
        void initLevel(void);
        void update(void);
};
    
#endif

