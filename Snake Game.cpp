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

void ve(){
       void ve (Point Qua){
              for (int i = 0 ; i < DoDai; i++){
                     gotoxy (A[1].x, A[1].y);
                     count << "X";
              }
       }
void DiChuyen (int Huong){
       void DiChuyen (int Huong, Point& Qua ){
              for (int i = DoDai-1; i>0; i--)
                     A[i] = A[i-1];
              if (Huong == 0) A[0].x = A[0].x +1;
              if (Huong == 1) A[0].y = A[0].y +1;
              if (Huong == 2) A[0].x = A[0].x -1;
              if (Huong == 3) A[0].y = A[0].y -1;
              
              if ((A[0].x == Qua.x) && (A[0].y == Qua.y)){
                     DoDai++
                     Qua.x = rand()%(MAXX-MINX)+MINX ;
                     Qua.y = rand()%(MAXY-MINY)+MINY ;
              }
       Point Qua ;
       srand ((int)time(0)) ; 
       Qua.x = rand()%(MAXX-MINX)+MINX ;
       Qua.y = rand()%(MAXX-MINX)+MINX ;
       While (1) {
              if (kbhit()) {
                  t = getch();
                     if (t=='a') Huong = 2;
                     if (t=='w') Huong = 3;
                     if (t=='d') Huong = 0;
                     if (t=='x') Huong = 1;
              }
              system ("cls"); 
              r. ve ();
              r. DiChuyen (Huong);
              r. ve (Qua);
              r. DiChuyen (Huong, Qua);
              sleep (300);
       }
              
