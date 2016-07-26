#include <iostream>

using namespace std;

bool checkPerfect(int n)
{
    int number = n;
    for(int i=2; i<=n; i++)
    {
        if (n%i == 0)
        {
            n=n/i;
            if (n%i == 0)
            {
                cout<<number<<" is not perfect"<<endl;
                return false;
            }
        }
    }
    cout<<number<<" is perfect"<<endl;
    return true;
}

int main()
{
    checkPerfect(1);
    checkPerfect(2);
    checkPerfect(3);
    checkPerfect(4);
    checkPerfect(5);
    checkPerfect(6);
    return 0;
}
