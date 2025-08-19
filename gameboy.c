#include "raylib.h"
#include <stdio.h>
#include <stdbool.h>
int main() {
    typedef struct {
        Rectangle rect;
    } Platform;
    
    InitWindow(1280, 720, "Jumping Square");
    SetTargetFPS(60);

    // Player position and size
    Rectangle playerRect = { 100, 300, 25, 50 };

    // Movement
    float mvelocitiyX = 10.0;
    float velocityX = 5;
    float accel = 0.1;
    float decel = 0.8;
    float velocityY = 0;    // vertical speed
    float gravity = 0.5f;  // gravity pulling player down
    float jumpForce = -15;  // negative because y=0 is top of screen
    bool onGround = false;

    Platform platforms[3];

    platforms[0].rect = (Rectangle){ 0, 675, 1280, 20 };
    platforms[1].rect = (Rectangle){ 400, 200, 150, 20 };
    platforms[2].rect = (Rectangle){ 650, 100, 80, 20 };

    while (!WindowShouldClose()) {
        // --- Input ---

        if (IsKeyDown(KEY_A)) {
            if (velocityX < mvelocitiyX) velocityX += accel;
            playerRect.x -= velocityX;
        }    
        else if (!IsKeyDown(KEY_A) && !IsKeyDown(KEY_D)) {
            if (velocityX >= 5) {
                velocityX -= decel;
            }
        }

        if (IsKeyDown(KEY_D)) {
            if (velocityX < mvelocitiyX) velocityX += accel;
            playerRect.x += velocityX;
        }    
        else if (!IsKeyDown(KEY_D) && !IsKeyDown(KEY_A)) {
            if (velocityX >= 5) {
                velocityX -= decel;
            }
        }
        // Jump only if on the ground
        if (IsKeyPressed(KEY_W) && onGround) {
            velocityY = jumpForce;
            onGround = false;
        }

        // --- Physics ---
        velocityY += gravity; // gravity accelerates player down
        playerRect.y += velocityY;

        // --- Floor collision ---
        onGround = false;
        for (int i = 0; i < 3; i += 1) {
            if (CheckCollisionRecs(playerRect, platforms[i].rect)) {
                if (velocityY > 0) {
                    playerRect.y = platforms[i].rect.y - playerRect.height;
                    velocityY = 0;
                    onGround = true;
                }
            }
        }
        
        // --- Drawing ---
        BeginDrawing();
        ClearBackground(SKYBLUE);

        DrawRectangleRec(playerRect, RED);
        
        for (int i = 0; i < 3; i += 1) {
            DrawRectangleRec(platforms[i].rect, DARKGREEN);
        }
        
        EndDrawing();
    }

    CloseWindow();
    return 0;
}

