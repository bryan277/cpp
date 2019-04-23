#include <iostream>

using namespace std;

int main()
{
    int age;
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello " << name << endl;

    cout << "Enter your age: \n";
    cin >> age;

    cout << "Your age is " << age << " years old\n";


    return 0;
}
