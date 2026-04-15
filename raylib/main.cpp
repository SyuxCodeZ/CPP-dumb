#include "raylib.h"

int main() {
    // --- 1. INITIALIZATION ---
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Engine Core Challenge: SUCCESS");

    // Physics Variables
    Vector2 pos = { 400, 225 };
    Vector2 vel = { 0, 0 };
    float gravity = 0.5f;   // Continuous downward acceleration
    float bounce  = -0.7f;  // Reverse velocity and retain 70% energy
    float radius  = 20.0f;

    // Audio Setup
    InitAudioDevice();
    // Note: Ensure you have an audio file named "level.mp3" in your project folder
    // Music bgm = LoadMusicStream("level.mp3"); 
    // PlayMusicStream(bgm);

    SetTargetFPS(60); // Lock to 60 FPS for consistent physics

    // --- 2. GAME LOOP ---
    while (!WindowShouldClose()) {
        
        // INPUT: Jump Impulse
        if (IsKeyPressed(KEY_SPACE)) { 
            vel.y = -12.0f; // Instant upward velocity
        }

        // PHYSICS & AUDIO UPDATES
        // UpdateMusicStream(bgm);           
        
        vel.y += gravity;  // Gravity pulls velocity down
        pos.y += vel.y;    // Velocity moves position

        // COLLISION: Floor Detection
        // We check against screenHeight minus the radius so it doesn't sink into the floor
        if (pos.y >= (screenHeight - radius)) {
            pos.y = screenHeight - radius; // Snap to floor surface
            vel.y *= bounce;               // Apply the bounce factor
        }

        // --- 3. RENDERING ---
        BeginDrawing();
            ClearBackground(BLACK);
            
            // Draw UI Info
            DrawText("SPACE TO JUMP | PHYSICS: STABLE", 10, 10, 20, DARKGRAY);
            DrawText(TextFormat("Velocity Y: %.2f", vel.y), 10, 40, 20, GRAY);

            // Draw the Player
            DrawCircleV(pos, radius, BLUE); 
            
            // Draw Floor Line
            DrawLine(0, screenHeight, screenWidth, screenHeight, RED);
            
        EndDrawing();
    }

    // --- 4. SHUTDOWN ---
    // UnloadMusicStream(bgm);
    CloseAudioDevice();
    CloseWindow();

    return 0;
}