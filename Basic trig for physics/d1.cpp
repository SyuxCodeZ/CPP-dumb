#include <iostream>
#include <cmath> // Required for std::cos()

int main()
{
    float groundDistance = 25.0f; // Adjacent side
    float degrees = 35.0f;
    float PI = 3.14159265f;

    //**IMPORTANT: */ 1. Degree to Radian conversion
    float radian = degrees * (PI / 180.0f);

    // 2. Solve for Hypotenuse (H = A / cos(theta))
    float laserDistance = groundDistance / std::cos(radian);

    // 3. Output the results
    std::cout << "Direct Laser Range: " << laserDistance << " meters" << std::endl;

    return 0;
}