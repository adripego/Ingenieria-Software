
#include "stdafx.h"
#include <conio.h>
#include <Windows.h>

const unsigned int WORLD_WIDTH = 75;
const unsigned int WORLD_LEFT_CAP = 0;
const unsigned int MAX_MOBS = 50;
const unsigned int RIGHT = 1;
const unsigned int LEFT = -1;

const unsigned int INT_SIZE = 4;


int g_iPosMainChar = ( WORLD_WIDTH / 2 );
int g_iCharLives = 3;
int g_iPosBullet = 0;
bool g_bExistsBullet = false;
int g_iDirBullet = 1;   // Marca la direcion y la velocidad de la bala
int g_iPosMob = 0;
int g_iDirMob = 1;
unsigned int g_iScore = 0;
Mob amobEnemies[MAX_MOBS];
int aiPosEnemigos[MAX_MOBS];
int aiIndicesMobs[MAX_MOBS];


class Character{
public:
    int m_iPos;
    int m_iCharLives;
    int m_iDirChar;
    void init(int iPos, int iLives)
    {
        m_iPos = iPos;
        m_iCharLives = iLives;
        m_iDirChar = 1;
    }
};

class Mob{ 
    public:
        // Variables miembro
        int m_iPos;
        bool m_bExistMob;
        unsigned int ref = getValidRef();
        // Funciones miembro
        Mob(int iPos)
        {
            m_iPos = iPos;
            m_bExistMob = false;
        }
        
};

class Bullet{
    public:
        int m_iPos;
        int m_iDirBullet;

        void init(int iPos, int iDirBullet)
        {
            m_iPos = iPos;
            m_iDirBullet = iDirBullet;
            g_bExistsBullet = true;
        }

        void avanza()
        {
            m_iDirBullet++;
        }

        void retrocede()
        {
            m_iDirBullet--;
        }
};



int getValidRef()
{
    for (unsigned int i = 0; i < sizeof(aiIndicesMobs); i++)
    {
        if (aiIndicesMobs[i] == NULL)       return i;
    }
}

//int g_paiPosEnemigos[];
//g_paiPosEnemigos = malloc(MAX_MOBS * sizeof(int));

// Comprueba las teclas pulsadas por el usuario.
void inputCheck()
{
	if (_kbhit())
	{
		char keyTapped = _getch();
		if (keyTapped == 'a')
		{
			g_iPosMainChar--;
		}
		else if (keyTapped == 'd')
		{
			g_iPosMainChar++;
		}
		else if (keyTapped == 'e')
		{
            Bullet *b1 = new Bullet();
            b1->init((g_iPosMainChar + 1),RIGHT);
		}
        else if (keyTapped == 'q')
        {
            g_bExistsBullet = true;
            g_iPosBullet = g_iPosMainChar - 1;
            g_iDirBullet = -1;
        }
	}
}

// Pinta en pantalla.
void draw()
{
    printf("\r");
   // printf("Vidas: %d | Puntuacion %d", g_iCharLives, g_iScore);
    for (unsigned int i = 0; i < WORLD_WIDTH; i++)
    {
        if      (i == g_iPosMainChar)                   printf("H");
        //else if (g_bExistsBullet && i == g_iPosBullet)  printf("B");
        //else if (g_bExistsMob    && i == g_iPosMob)     printf("E");
        else                                            printf("_");
    }
    //printf("Vidas: %d", g_iCharLives);
}
    

// Actualiza las variables de estado del juego.
void updateGameState()
{

        unsigned int randomSpawn = rand() % 100;
        unsigned int randomDir = rand() % 100;
 

    //****************** Movimiento Bala ******************
 /*       if (g_bExistsBullet)
        {
            if (Bullet::m_DirBullet == 1)           avanza()
            else if (Bullet::m_DirBullet == -1)     retrocede();
        }*/

    //****************** Movimiento enemigo ******************
        if (g_iPosMob == g_iPosMainChar)
        {
            g_iCharLives--;
        }
        if (g_iPosMob > WORLD_LEFT_CAP)
        {
            if (g_iDirMob == 1)
            {
                g_iPosMob--;
            }
            else
            {
                g_iPosMob++;
            }
        }
}

void gameOver()
{
    printf("\nGame Over! Puntuacion: %d\n", g_iScore);
}

int _tmain(int argc, _TCHAR* argv[])
{
    Character *personaje = new Character();
    personaje->init(50, 4);
    int iMobArraySize;
    iMobArraySize = sizeof(amobEnemies) / sizeof(Mob);
    printf("%d",iMobArraySize);

//    for (unsigned int i = 0; i < iMobArraySize; i++)
    {
       // Mob *m1 = new Mob(1);
        //amobEnemies[i] = m1;
    }
    
    //Mob *a = new Mob(1, 2);

    //while (g_iCharLives > 0)
    //{
    //    inputCheck();
    //    updateGameState();
    //    draw();
    //    Sleep(50);
    //}
    //gameOver();
    //getchar();
    //delete []amobEnemies;
    return 0;
}