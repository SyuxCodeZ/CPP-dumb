#include <iostream>
using namespace std;

// This function takes a POINTER as an argument
void applyGravity(float *vPtr)
{
    float gravity = -9.8f;
    *vPtr += gravity; // Reach into the address and change it
}

int main()
{
    float velocity = 0.0f;

    cout << "Initial Velocity: " << velocity << endl;

    // We pass the ADDRESS (&) of the velocity
    applyGravity(&velocity);

    cout << "Velocity after gravity: " << velocity << endl;

    return 0;
}