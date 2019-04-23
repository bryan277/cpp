#include <iostream>

using namespace std;

int main()
{
    int luckyNums[] = {4, 8, 15, 16, 23, 42};
    int luckyNums2[20];// 20 is how many itmes you want C++ to store
    cout << luckyNums[0] << endl;
    //4
    cout << luckyNums[2] << endl;
    //15
    luckyNums[0] = 19;
    cout << luckyNums[0];
    //19
    //cout << luckNums << endl;

    return 0;
}
