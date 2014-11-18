#include "stdafx.h"
#include "Character.h"
const unsigned int WORLD_SIZE = 70;

Character::Character(int iPosx) : Entity(m_iPosx)
{
    m_iPosx = iPosx;
}

 
void Character::draw(void)
{
    for (unsigned int  i = 0; i < WORLD_SIZE; i++)
    {
        if (m_iPosx == i)     printf("&"); 
        else                printf("_");
    }
}

void Character::update(void)
{

}