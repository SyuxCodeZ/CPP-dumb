#include <iostream>

struct Vector2D
{
    float x;
    float y;
};

int main()
{
    Vector2D position = {0.0f, 0.0f};
    Vector2D velocity = {5.0f, 2.0f};

    std::cout << "Starting at: (" << position.x << ", " << position.y << ")\n";
    for (int i = 1; i <= 5; i++)
    {
        position.x += velocity.x;
        position.y += velocity.y;
        std::cout << "After " << i << " ticks: (" << position.x << ", " << position.y << "), ";
    }
    return 0;
}