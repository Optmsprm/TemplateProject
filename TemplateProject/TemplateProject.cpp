// Alexander Rosencrantz
// CIS 1202 501
// 12/3/2023

#include <iostream>
#include <math.h>

using namespace std;

template <typename T>
//Template function that divides a floating point num by 2
T half(T num)
{
    return num / 2;
}

int half(int num);

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

}

//Overloaded function that divides an int by 2
int half(int num)
{
    float temp = static_cast<float>(num) / 2;

    temp = round(temp);

    return static_cast<int>(temp);
}