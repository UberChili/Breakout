#include <raylib.h>
#include <stdio.h>

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

#define PLAYER_WIDTH 150.0f
#define PLAYER_HEIGHT 20.0f

typedef struct {
    Rectangle rect;
    Color color;
} Player;

/* void updatePlayer(Player *player, float delta) { */
void updatePlayer(float delta) {
    /* float max_x = SCREEN_WIDTH - PLAYER_WIDTH; */
    printf("%f\n", delta);
}

int main(void) {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Breakout1");

    // Initializing player
    Player player = {0};
    player.rect = (Rectangle){(SCREEN_WIDTH / 2.0f) - 75, SCREEN_HEIGHT - 80,
                              PLAYER_WIDTH, PLAYER_HEIGHT};
    player.color = BROWN;

    while (!WindowShouldClose()) {
        float deltaTime = GetFrameTime();
        // Update
        // -------------------------
        /* updatePlayer(&player, deltaTime); */
        updatePlayer(deltaTime);

        BeginDrawing();
        ClearBackground(SKYBLUE);

        // Draw elements
        DrawRectangleRec(player.rect, player.color);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
