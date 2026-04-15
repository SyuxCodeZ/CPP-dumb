#include <iostream>
#include "raylib.h"

int main()
{
    // 1. Declare your variables FIRST
    float timer = 0.0f;
    Color bgColor = RAYWHITE; // 'Color' is a special raylib type

    InitWindow(800, 450, "Simple Window");
    SetTargetFPS(60);

    // 2. You NEED this while loop to keep the window alive
    while (!WindowShouldClose())
    {

        BeginDrawing();
        ClearBackground(bgColor);

        // TextFormat is like printf for the screen
        DrawText(TextFormat("Time: %.2f", timer), 300, 200, 40, BLACK);
        DrawText("Press SPACE to Start/Stop", 250, 260, 20, GRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}