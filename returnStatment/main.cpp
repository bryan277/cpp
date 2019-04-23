#include <iostream>
using namespace std;

double cube(double num){
    //double result = num * num * num;
    //return result;
    return num * num * num;
    cout << "hello"; //this line will be ignored
}

int main()
{
    double answer = cube(5.0);
    cout << answer;
    //125
    return 0;
}
