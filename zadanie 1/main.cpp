#include <iostream>

using namespace std;

int main()
{

    int n;
    float s=0,i=1;

    cin>>n;

    while(i<=n)
    {
        s+=1.0/i;
        i++;
    }
    cout<<s;

    return 0;
}
