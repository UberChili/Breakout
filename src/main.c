#include <raylib.h>

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

#define PLAYER_WIDTH 150.0f
#define PLAYER_HEIGHT 20.0f

typedef struct {
    Rectangle rect;
    Color color;
} Player;

void updatePlayer(Player *player, float delta) {
    float max_x = SCREEN_WIDTH - PLAYER_WIDTH;
}

int main(void) {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Breakout1");
    float deltaTime = GetFrameTime();

    // Initializing player
    Player player = {0};
    player.rect = (Rectangle){(SCREEN_WIDTH / 2.0f) - 75, SCREEN_HEIGHT - 80,
                              PLAYER_WIDTH, PLAYER_HEIGHT};
    player.color = BROWN;

    while (!WindowShouldClose()) {
        // Update
        // -------------------------
        updatePlayer(&player);

        BeginDrawing();
        ClearBackground(SKYBLUE);

        // Draw elements
        DrawRectangleRec(player.rect, player.color);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
