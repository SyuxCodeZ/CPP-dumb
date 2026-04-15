#include <iostream>
#include <cmath>

int main(){
    float dis = 40;
    float eyeLvl = 1.8;
    float degrees = 25;

    float radian = degrees * (3.14 / 180);

    float treeHeightOffset = dis * std::tan(radian);
    float finalTreeHeight = eyeLvl + treeHeightOffset;

    std::cout << "Final Tree Height: " << finalTreeHeight << std::endl;

    return 0;
}