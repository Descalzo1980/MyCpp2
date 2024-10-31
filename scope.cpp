#include <iostream>

using namespace std;

int main()
{
    int score;

    cout << "Enter number ";
    cin >> score;

    if (score > 1000)
    {
        cout << "You scored 1000 or more. Impressive!\n";
    }
    else
    {
        cout << "You scored less than 1000.\n" << endl;
    }

    return 0;
}