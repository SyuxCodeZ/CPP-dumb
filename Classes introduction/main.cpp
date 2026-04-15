#include <iostream>
#include <string>
using namespace std;

class Level
{
public:
    string name;
    int stars;

    Level(string n, int a)
    {
        name = n;
        stars = a;
        if (a < 0 || a > 10)
        {
            cout << "Invalid level stat input" << endl;
        }
        else
        {
            if (a > 9)
            {
                cout << "It is a demon level" << endl;
            }
            else
            {
                cout << "It is not a demon level" << endl;
            }
        }
    }
};

int main()
{
    Level lev1("Aperture", 9);
    Level lev2("Bloodbath", 10);
    Level lev3("Bloodlust", 10);

    cout << " " << lev1.name << " is worth " << lev1.stars << " stars" << endl;
}