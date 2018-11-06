#include <iostream>
#include <cstdlib> // for use rand()
#include <conio.h> // aita input er jonno
using namespace std;
bool gameOver; // global variable
const int width = 20;
const int height = 20; // ei 2ta variable map  diminstaion mane coordinate er jonno use hobe
int x,y, fruitX,fruitY,score;  // for our head position er jonno,x,y and fruitX(ফল),fruitY(ফল), fruit position er jonno,and score vaiable
enum eDirection {STOP = 0, LEFT,RIGHT, UP, DOWN}; // mane kono key press korle snack ta kon dik jave tar jonno variable nese
eDirection dir; // direction ta k hold korbe r ke
void Setup()
{
    gameOver = false;
    dir = STOP; // SO the snake will not move until we start moving it
    x = width / 2; // aita hole head er position width/ 2 mane middle
    y = height / 2; // so the snack head  will be centered on the map
    fruitX = rand() % width;  //for the fruit we should randomly place it somewhere on the map this will create a random number from 0 to width
    fruitY = rand() % height;
    score = 0;


}
void Draw()
{
// at 1st we need draw a map and we should do is to clear the screen
system("cls"); // mane consol or termenal er sob cls dia clear korlam cls for windows
for(int i = 0; i < width; i++) // its going to display the top border of our map
    cout << "#"; // ita holo top wall er jonno
    cout << endl;
   // ei khane amra amder map ta ke print korabo

   for(int i = 0; i< height; i++)
   {
       for(int j= 0; j<width;j++ )
       {
           if(j==0)
            cout << "#";  // mane wall bampaser ta
            if(i ==y && j == x)
                cout <<"0";
            else if (i == fruitY && j == fruitX)
                cout <<"F";
           else
            cout << " ";
           if(j == width -1) // mane wall danpaser ta
            cout << "#";
       }
       cout << endl;

   }
for(int i = 0; i< width; i++)  // aita bootom wall er jonoo
    cout <<" #";
cout << endl;
cout << "Score:" << score << endl;
}
 void Input()
 {
    if(_kbhit()) //mane holo amra jode keybord thake kono key press kore tahole charcater prnt hobe r jode keso press na kore tahole 0 print korbe
        switch(_getch()) //-getch aita return our ASCII value of our character that was pressed
    {
    case 'a':
        dir = LEFT; // a press korle left a jabe
        break;
    case 'd':
        dir = RIGHT;
        break;
    case 'w':
        dir = UP;
        break;
    case 's':
        dir = DOWN;
        break;
    case 'X':
        gameOver = true;
        break;
    }
 }

 void Logic()
 {
    switch(dir)
    {
    case LEFT:
        x--; // if we go left we are going to decrease our x-coordinate of snake
        break;
    case RIGHT:
        x++; // increase the x value
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }
    if(x >width || x < 0 || y > height || y < 0)
        gameOver = true;
    if(x == fruitX && y == fruitY)
    {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
    }

 }

int main()
{
    Setup();
    while (!gameOver) // jode game over na hoi tahole necher kaj koro
    {
        Draw();
        Input();
        Logic();
    }
    return 0;
}
