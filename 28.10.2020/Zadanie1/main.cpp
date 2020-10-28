#include <iostream>

using namespace std;

int main()
{
    float a1,a2,b1,b2;
    cout<<"Input: a1 a2 b1 b2"<<endl;
    cin>>a1>>a2>>b1>>b2;

    if(a1==a2) //jezeli a1=a2, to proste s¹ rownolegle
        cout<<"Rownolegle"<<endl;
    else if(a1*a2==-1) //je¿eli a1*a2=-1, to proste s¹ rownolegle
        cout<<"Prostopadle"<<endl;
    else
        cout<<"Ani prostopadle, ani rownolegle"<<endl;


    return 0;
}
