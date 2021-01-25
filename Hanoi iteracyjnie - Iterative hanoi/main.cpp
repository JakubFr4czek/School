// Autor: Jakub Fraczek

#include <iostream>
#include <cmath>
#include <stack>

void sprawdzenie (std::stack<int>&,std::stack<int>&,char,char);

std::stack<int> a;
std::stack<int> b;
std::stack<int> c;

int main()
{
    int n,k;

    std::cout << "Krazki: ";
    std::cin>>n;
    std::cout.put('\n');
    k=pow(2,n)-1;

    a.push(0);
    b.push(0);
    c.push(0);

    for(int i=n; i>0; i--)
        a.push(i);

    if(n==1)
    {
        std::cout<<"zamien A na C\n";
        return 0;
    }
    else if(n==2)
    {
        std::cout<<"zamien A na B\n";
        std::cout<<"zamien A na C\n";
        std::cout<<"zamien B na C\n";
        return 0;
    }


  for(int i=1;i<=k;i++)
    {
        if(i%3==1)
            (n%2==0)?sprawdzenie(a,b,'A','B'):sprawdzenie(a,c,'A','C');
        else if(i%3==2)
            (n%2==0)?sprawdzenie(a,c,'A','C'):sprawdzenie(a,b,'A','B');
        else if(i%3==0)
            sprawdzenie(b,c,'B','C');
    }
}

void sprawdzenie (std::stack<int>& p, std::stack<int>& q, char n1, char n2){

    if((p.top()<q.top()||q.top()==0)&&p.top()!=0){
        std::cout<<n1<<" na "<<n2<<"\n";

        int tmp=p.top();
        p.pop();
        q.push(tmp);

    }
    else{
        std::cout<<n2<<" na "<<n1<<"\n";

        int tmp=q.top();
        q.pop();
        p.push(tmp);
    }
}
