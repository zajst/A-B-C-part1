#include <iostream>

using namespace std;

int factorial(int n)
{
    int result=1;
    if (n > 1)
        result = n*factorial(n-1);
    else
        return 1;
    return result;
}

int choose(int n, int r)
{
    return factorial(n)/factorial(r)/factorial(n-r);
}

int main()
{
    bool flag = false;
    do
    {
        int n,r;

        cout<<"Program oblicza dwumian Newtona dwóch liczb naturalnych"<<endl;
        cout<<"Podaj pierwsza liczbe - musi byc to nieujemna liczba naturalna"<<endl;
        cin>>n;
        if (n<0)
        {
            cout<<endl<<"ta liczba jest ujemna, jeszcze raz..."<<endl<<endl;
            continue;
        }
        cout<<"Podaj druga liczbe - nie może byc wieksza od pierwszej"<<endl;
        cin>>r;
        if (r>n)
        {
            cout<<endl<<r<<" jest wieksze od "<< n << "  Jeszcze raz..." << endl<<endl;
            continue;
        }
        cout<<n<<" po "<< r << " wynosi " << choose(n,r) << endl;
        flag = true;
    } while (flag != true);
    return 0;
}
