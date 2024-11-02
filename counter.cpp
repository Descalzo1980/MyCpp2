#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "Counting forward:\n";
    for (int i = 0; i < 10; ++i)
    {
        cout << i << " ";
    }
    cout << "\n\nCounting back:\n";
    for (int i = 9; i >= 0; --i)
    {
        cout << i << " ";
    }
    cout << "\n\nNested \n";
    const int ROWS = 9;
    const int COLUMN = 9;

    for (int i = 1; i <= ROWS; ++i)
    {
        for (int j = 1; j <= COLUMN; ++j)
        {
            cout << setw(2) << i << " * " << setw(2) << j << " = " << setw(2) << i * j << "  ";
        }
        cout << endl;
    }
    return 0;
}
