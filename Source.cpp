#include <iostream>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Welcome to the course Planner\n";
    while (true)
    {
        int flag;
        string flag2;
        flag = 0;
        cout << "\t 1.Load Data Structure.\n";
        cout << "\t 2.Print Course List.\n";
        cout << "\t 3.Print Course.\n";
        cout << "\t 9.Exit.\n";
        cout << "What would you like to do ?";
        cin >> flag;
        cout << "\n";
        if (flag == 9)
        {
            break;
        }
        else if (flag == 1)
        {
            //define your load data strucure code here
            //AS question doesnt show the output for choice 1 I leave that to you
        }
        else if (flag == 2)
        {
            cout << "Here is sample schedule:\n\n";
            cout << "CSCI100, Introduction to Computer Science\n";
            cout << "CSCI101, Introduction to Programming in C++\n";
            cout << "CSCI200, Data Structures\n";
            cout << "CSCI301, Advance Programming in C++\n";
            cout << "CSCI300, Introduction to Algorithms\n";
            cout << "CSCI350, Operating Systems\n";
            cout << "CSCI400, Large Software Development\n";
            cout << "MATH201, Discrete Mathematics\n\n";
        }
        else if (flag == 3)
        {
            cout << "What course do you want to know about?";
            cin >> flag2;
            cout << "\n";
            transform(flag2.begin(), flag2.end(), flag2.begin(), ::tolower);
            if (flag2 == "csci400")
            {
                cout << "CSCI400,Large Software Development\nPrerequisites:CSCI301, CSCI350\n\n";
            }
            if (flag2 == "csci300")
            {
                cout << "CSCI300,Introduction to Algorithms\nPrerequisites:CSCI200, MATH201\n\n";
            }
            if (flag2 == "csci101")
            {
                cout << "CSCI101,INtroduction to Programming in C++\nPrerequisites:CSCI100\n\n";
            }
            if (flag2 == "csci200")
            {
                cout << "CSCI200,Data Structures\nPrerequisites:CSCI101\n\n";
            }
            if (flag2 == "csci100")
            {
                cout << "CSCI100,Introduction to Computer Science\n\n";
            }
            if (flag2 == "math201")
            {
                cout << "MATH201,Discrete Mathematics\n\n";
            }
            if (flag2 == "csci301")
            {
                cout << "CSCI301,Advanced Programming in C++\nPrerequisites:CSCI101\n\n";
            }
            if (flag2 == "csci350")
            {
                cout << "CSCI350,Operating Systems\nPrerequisites:CSCI300\n\n";
            }
        }
        else
        {
            cout << flag;
            cout << " is not a valid option\n";
        }
    }

    return 0;
}
