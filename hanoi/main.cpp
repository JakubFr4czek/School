#include <iostream>

using namespace std;
void hanoi(int n, char a, char b, char c)
{
   if (n>0)
   {
       hanoi(n-1,a,c,b);
       cout<<"Przenies "<<a<<" na " <<c<<endl;
       hanoi(n-1,b,a,c);
   }
}
int main()
{
    int n;

    cout << "Podaj liczbe krazkow" << endl;
    cin>>n;
    hanoi(n,'A','B','C');
    return 0;
}
