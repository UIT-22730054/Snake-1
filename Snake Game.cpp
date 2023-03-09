#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>

using namespace std;

typedef struct tailpos
{
       int x;
       int y;
       struct tailpos *next;
       struct tailpos *prev;
} tail;

int d = 4;

class snake
{
public:
       int wallsX, wallsY;
       int walleX, walleY;
       int score;

       int foodx, foody;

       HANDLE console_handle;
       COORD cur_cord;
       

       tail *start, *current, *newtail;
       snake();
       void insert(int x, int y);
       void draw();
       void drawWall();
       void move();
       bool collision();
       void drawfood(int x = 0);
       void drawinit();
       void labelDead();
       void menu();
       void help();
};
