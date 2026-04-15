#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void saveTasks(const vector<string> &tasks)
{
    ofstream file("tasks.txt");

    for (const string &task : tasks)
    {
        file << task << endl;
    }
}
void loadTasks(vector<string> &tasks)
{
    ifstream file("tasks.txt");
    string line;

    while (getline(file, line))
    {
        tasks.push_back(line);
    }
}

int main()
{
    vector<string> tasks;
    loadTasks(tasks);
    int choice;
    string input;

    while (true)
    {
        cout << "\n1)Add 2)View 3)Exit: ";
        if (!(cin >> choice))
            break;
        cin.ignore();

        if (choice == 1)
        {
            cout << "Task: ";
            getline(cin, input);
            tasks.push_back(input);
            saveTasks(tasks);
        }
        else if (choice == 2)
        {
            if (tasks.empty())
            {
                cout << "Empty!\n";
            }
            else
            {
                for (int i = 0; i < tasks.size(); ++i)
                    cout << i + 1 << ") " << tasks[i] << "\n";
            }
        }
        else if (choice == 3)
            break;
    }
    return 0;
}