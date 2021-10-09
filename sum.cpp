#include <iostream>
using namespace std;

int sum(int, int, int);

int main()
{

    int num1, num2, num3;
    cout << "Enter three numbers  ";
    cin >> num1 >> num2 >> num3;
    cout << "sum of given three numbers " << sum(num1, num2, num3);
    return 0;
}

int sum(int a, int b, int c)
{
    int result;
    result = a + b + c;
    return result;
}