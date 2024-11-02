#include<iostream>
#include<string>

int main(){
std::string name;
int age;
std::cout <<"What is your name?\n";
std::getline(std::cin, name);
std::cout<< "Hello, " << name << "!\n";
std::cout <<"What is your age?\n";
std::cin >> age;
std::cout << "Your age is " << age << std::endl;
return 0;
}

