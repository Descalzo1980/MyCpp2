#include <iostream>

using namespace std;

int main()
{
    if (true)
    {
        cout << "This is alwase displaed.\n\n";
    }
    if (false)
    {
        cout << "This is never displaed.\n\n";
    }
    int scope = 1000;
    if (scope)
    {
        cout << "At least you didn't score zero.\n\n";
    }
    if (scope >= 250)
    {
        cout << "You scored 250 or more. Decent. \n\n";
    }
    if (scope >= 500)
    {
        cout << "You scored 500 or more. Nice. \n\n";
    }
    if (scope >= 1000)
    {
        cout << "You scored 1000 or more. Impressive!\n";
        return 0;
    }
}