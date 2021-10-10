#include <iostream>
using namespace std;

void prime_num(int);

int main()
{

    int n;
    cout << "Enter a number  ";
    cin >> n;
    prime_num(n);
    return 0;
}

void prime_num(int n)
{
    int flag = 0;
    if (n == 0 || n == 1)
    {
        flag = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag==1)
    {
        cout<<n<<" is not a prime number"<<endl;
    }
    else
    {
        cout<<n<<" is a prime number"<<endl;
    }
    
}