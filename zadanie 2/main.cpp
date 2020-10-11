#include <iostream>

using namespace std;

int silnia(int a)
{
    int b=1;

    for(int i=1; i<=a; i++)
    {
        b*=i;
        //cout<<b<<endl;
    }return b;
}

int main()
{

    int n;
    float s=0,i=0;

    cin>>n;

    do
    {
        s+=1.0/silnia(i);
        i++;
    }while(i<n);
    cout<<s;

    return 0;
}
