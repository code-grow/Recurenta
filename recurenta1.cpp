#include <iostream>

using namespace std;
///functie iterativa care returneaza suma cifrelor unui numar
int f(int x)
{
    int s=0;
    while(x!=0)
    {
        s=s+x%10;
        x=x/10;
    }
    return s;
}
///functie recursiva care returneaza suma cifrelor unui numar
int f1(int x)
{
    if(x!=0){cout<<"*";
        return x%10+f1(x/10);}
    else
        return 0;
}
int main()
{int y;
y=123;

    cout <<f(y) << endl;
    cout <<f1(y) << endl;
    return 0;
}
