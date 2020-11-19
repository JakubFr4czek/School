#include <iostream>

using namespace std;

int main()
{

    float n,a=2,b=0,c=1;
    float wynik;


    cin>>n;

    for(int i=1; i<=n; i++){

        b+=i;
        cout<<b<<" "<<a+(4*(i-1))<<endl;
        c*=a+(4*(i-1));



    }
    wynik=b/c;
    cout<<wynik;

    return 0;
}
