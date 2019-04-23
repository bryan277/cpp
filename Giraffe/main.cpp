#include <iostream>

using namespace std;

int main()//function in c++, container for our code
{
    string characterName = "John";
    int years = 21;
    years = 22;
    char grade = 'A';
    string phrase = "Giraffe Academy";
    phrase[0] = 'B';


    cout << "Hello world!\n";
    cout << "Mike is " << years << " old" << endl;
    cout << grade << endl;
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    cout << phrase.find("Academy") << endl;
    cout << phrase.substr(8, 3) << endl;


    /*Hello world!
    Mike is 22 old
    A
    15
    B
    8
    Aca*/
    return 0;

}

