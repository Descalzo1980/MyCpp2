#include <iostream>
#include <string>

using namespace std;

int main()
{

    string word1 = "Game";
    string word2 = ("Over");
    string word3(3, '!');
    string phrase = word1 + " " + word2 + " " + word3;
    cout << "The phrase is: " << phrase << "\n\n";
    cout << "The phrase has: " << phrase.size() << " characters" << "\n\n";
    cout << "The character at position О is: " << phrase[0] << "\n\n";
    cout << "Changing the character at position О. \n";
    phrase[0] = 'L';
    cout << "The phrase is now: " << phrase << "\n\n";
    if (phrase.find("apple") == string::npos)
    {
        cout << "'apple' is not in the phrase. \n\n";
    }
    phrase.erase(4, 5);
    cout << "The phrase is now: " << phrase << "\n\n";
    phrase.erase(4);
    cout << "The phrase is now: " << phrase << "\n\n";
    phrase.erase();
    cout << "The phrase is now: " << phrase << "\n\n";
    if(phrase.empty())
    {
        cout << "\nThe phrase is no more \n";
    }
    return 0;
}