#include <iostream>
#include <conio.h>
#include <windows.h>
#include <map>

using namespace std;

struct FVector2D
{
    int X;
    int Y;
};

void SetLocation(FVector2D NewLocation);
void Draw();


string Tile[] = { " ","#" };

int MAP[10][10] = {

      {1, 1, 1,  1,  1,  1,  1,  1,  1 ,1},  // 0
      {1, 0, 0,  0,  0,  0,  0,  0,  0 ,1},  // 1
      {1, 0, 0,  0,  0,  0,  0,  0,  0 ,1},  // 2
      {1, 0, 0,  0,  0,  0,  0,  0,  0 ,1},  // 3
      {1, 0, 0,  0,  0,  0,  0,  0,  0 ,1},  // 4
      {1, 0, 0,  0,  0,  0,  0,  0,  0 ,1},  // 5
      {1, 0, 0,  0,  0,  0,  0,  0,  0 ,1},  // 6
      {1, 0, 0,  0,  0,  0,  0,  0,  0 ,1},  // 7
      {1, 0, 0,  0,  0,  0,  0,  0,  0 ,1},  // 8
      {1, 1, 1,  1,  1,  1,  1,  1,  1 ,1}   // 9
};

int main()
{      
    bool bRunning = true;
    FVector2D PlayerPosition;
    PlayerPosition.X = 1;
    PlayerPosition.Y = 1;

   
    while (bRunning)
    {
        int KeyCode = _getch();

        switch (KeyCode)
        {
        case 'w':
        case 'W':
            PlayerPosition.Y--;
            break;
        case 's':
        case 'S':
            PlayerPosition.Y++;
            break;
        case 'a':
        case 'A':
            PlayerPosition.X--;
            break;
        case 'd':
        case 'D':
            PlayerPosition.X++;
            break;
        case 27:
            bRunning = false;
            break;

        }

        PlayerPosition.X = PlayerPosition.X < 1 ? 1 : PlayerPosition.X;
        PlayerPosition.Y = PlayerPosition.Y < 1 ? 1 : PlayerPosition.Y;
        PlayerPosition.X = PlayerPosition.X > 9 ? 9 : PlayerPosition.X;
        PlayerPosition.Y = PlayerPosition.Y > 9 ? 9 : PlayerPosition.Y;

        system("cls");

        Draw();

        SetLocation(PlayerPosition);
       
            cout << "P";  
    }
    return 0;
}


void SetLocation(FVector2D NewLocation)
{
    COORD Cur;
    Cur.X = NewLocation.X;
    Cur.Y = NewLocation.Y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void Draw()
{
    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

            if (MAP[j][i] == 1)
            {
                cout << Tile[1];
            }
            else
            {
                cout << Tile[0];
            }
        }
  
    }
}