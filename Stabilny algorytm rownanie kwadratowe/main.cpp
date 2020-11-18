#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    float x1,x2,tmp;

    float a,b,c; cin>>a>>b>>c;

    float delta; delta=pow(b,2)-4*a*c;

    if(a==0){
        cout<<"Rownanie nie jest kwadratowe! \n";
        return 0;
    }

    if(delta<0){
        cout<<"Rownanie nie posiada pierwiastkow! \n";
        return 0;
    }
    else if(delta==0){
        x1=(-b)/(2*a);
        cout<<"Jedno rozwiazanie: "<<x1<<endl;
        return 0;

    }
    else if(delta>0){
        tmp=c/a;

        if(b>0){
            x1=(-b)-sqrt(delta);
            x1=x1/(2*a);
            x2=tmp/x1;
        }
        else{
            x2=(-b)+sqrt(delta);
            x2=x2/(2*a);
            x1=tmp/x2;
        }

        cout<<"Pierwiastki to: "<<x1<<" oraz "<<x2<<endl;
    }






    return 0;
}
