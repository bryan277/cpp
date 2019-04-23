#include <iostream>

using namespace std;

void sayHi(string name, int age);

int addition (int a, int b) {
    int r;
    r = a + b;
    return r;
}


int main()//function
{
    sayHi("Jason Bourne", 29);
    sayHi("Kobe Bryant", 31);
    sayHi("Cleveland Brown", 11);
    int z;
    z = addition (3 ,5);
    cout << "The result is " << z << endl;
    //Hello Jason Bourne you are 29
    //Hello Kobe Bryant you are 31
    //Hello Cleveland Brown you are 11
    //The result is 8
    return 0;
}


void sayHi(string name, int age){
    cout << "Hello " << name << " you are " << age << endl;
}
