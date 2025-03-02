#include <raylib.h>

int main() 
{
    InitWindow(300, 600, "Tetris");                     //Setting up the game window size
    SetTargetFPS(60);                                   //Setting the fps of the game


    while(WindowShouldClose() == false){                //Starting of the game loop

        BeginDrawing();                                 //All the elements are rendered in between these two lines of code

        EndDrawing();
    }

    CloseWindow();
}