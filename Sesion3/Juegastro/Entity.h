#ifndef _ENTITY_H_
#define _ENTITY_H_

class Entity{
private:
    int m_iPosx;
    bool m_bCollideCharacter;
    bool m_bCollideMob;

public:
    Entity();
    Entity(int iPos);
    virtual void update();
    virtual void draw();
    ~Entity();
};

#endif