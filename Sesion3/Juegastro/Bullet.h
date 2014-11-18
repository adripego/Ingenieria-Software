#ifndef _BULLET_H_
#define _BULLET_H_
#include "Entity.h"
class Bullet : public Entity
{
private:
    int m_iDirBullet;
public:
    Bullet(int iPosx, int Direction) : Entity(iPosx)
    {
        m_iDirBullet = Direction;
    }
};

#endif