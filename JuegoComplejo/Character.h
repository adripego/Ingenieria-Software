#ifndef _CHARACTER_H_
#define _CHARACTER_H_
#include "Entity.h"
class Character : public Entity
{
    private:
        int m_iDirCharacter;
        int m_iPosx;
    public:
        Character(int iPosx);
        void draw();        
        void update();
        ~Character();
};
#endif