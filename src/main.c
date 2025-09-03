#include <stdio.h>
#include <raylib.h>


int main(void) {
    printf("Here I go killing again!\n");

    InitWindow(1280, 720, "Breakout1");

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(SKYBLUE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
