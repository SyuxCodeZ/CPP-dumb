#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int choice = 0;
    vector<pair<string, bool>> tasks; // string = task, bool = done/not

    while (true)
    {
        cout << "\n==== TO-DO LIST ====\n";
        cout << "1) Add Task\n";
        cout << "2) View Tasks\n";
        cout << "3) Mark Task as Done\n";
        cout << "4) Delete Task\n";
        cout << "5) Quit Program\n";
        cout << "Enter Option: ";

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Enter a number.\n";
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (choice == 1)
        {
            string newtask;
            cout << "Enter new task: ";
            getline(cin, newtask);

            tasks.push_back({newtask, false});
            cout << "Task added successfully!\n";
        }
        else if (choice == 2)
        {
            if (tasks.empty())
            {
                cout << "\nYour list is empty.\n";
            }
            else
            {
                cout << "\nYOUR TASKS:\n";
                for (size_t i = 0; i < tasks.size(); i++)
                {
                    cout << i + 1 << ") "
                         << (tasks[i].second ? "[✔] " : "[ ] ")
                         << tasks[i].first << "\n";
                }
            }
        }
        else if (choice == 3)
        {
            if (tasks.empty())
            {
                cout << "No tasks to mark.\n";
                continue;
            }

            int index;
            cout << "Enter task number to mark as done: ";
            cin >> index;

            if (index < 1 || index > tasks.size())
            {
                cout << "Invalid task number.\n";
            }
            else
            {
                tasks[index - 1].second = true;
                cout << "Task marked as done!\n";
            }
        }
        else if (choice == 4)
        {
            if (tasks.empty())
            {
                cout << "No tasks to delete.\n";
                continue;
            }

            int index;
            cout << "Enter task number to delete: ";
            cin >> index;

            if (index < 1 || index > tasks.size())
            {
                cout << "Invalid task number.\n";
            }
            else
            {
                tasks.erase(tasks.begin() + (index - 1));
                cout << "Task deleted!\n";
            }
        }
        else if (choice == 5)
        {
            cout << "Exiting program...\n";
            break;
        }
        else
        {
            cout << "Invalid choice! Pick 1–5.\n";
        }
    }

    return 0;
}