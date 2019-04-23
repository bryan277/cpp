#include <iostream>

using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = false;

    if (isMale && isTall) {
        cout << "You are a tall male";
    } else if (isMale && !isTall) {
        cout << "You are short male";
    } else {
        cout << "You are not male and not tall";
    }
    //You are short male
    return 0;
}
