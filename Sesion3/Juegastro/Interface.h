#ifndef _INTERFACE_H_
#define _INTERFACE_H
#include "Entity.h"

class Interface{
    public:
        Interface(Entity *pMainCharacter);
        int getInput(void);
    private:
        Entity *m_pMainChar;

};
#endif