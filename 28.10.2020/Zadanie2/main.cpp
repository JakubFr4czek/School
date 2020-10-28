#include <iostream>
#include <cmath>

using namespace std;

bool czyTrojkat(float a,float b,float c)
{
     if (a+b>c&&a+c>b&&b+c>a)
        return true;
     else
        return false;
}
float obwod(float a,float b,float c)
{
    return a+b+c;
}
float pole(float a,float b, float c) //pole ze wzoru Herona
{
    float p = obwod(a,b,c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main()
{
    float xA,yA; //wierzcholek A
    float xB,yB; //wierzcholek B
    float xC,yC; //wierzcholek C

    float AB,BC,CA;

    cout << "Input: x1 y1 x2 y2 x3 y3" << endl;
    cin>>xA>>yA>>xB>>yB>>xC>>yC;

    AB=sqrt(pow(xA-xB,2)+pow(yA-yB,2));
    AB=fabs(AB)/2; cout<<AB<<endl;
    BC=sqrt(pow(xB-xC,2)+pow(yB-yC,2));
    BC=fabs(BC)/2; cout<<BC<<endl;
    CA=sqrt(pow(xC-xA,2)+pow(yC-yA,2));
    CA=fabs(CA)/2; cout<<CA<<endl;

    if(czyTrojkat(AB,BC,CA))
    {
        cout<<"Obwod: "<<obwod(AB,BC,CA)<<endl;
        cout<<"Pole: "<<pole(AB,BC,CA)<<endl;
    }
    else
        cout<<"Z podanych odcinkow nie mozna zbudowac trojkata"<<endl;

    return 0;
}
