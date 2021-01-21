#include <iostream>



int main()
{
    int n,wynik, liczba1=1, liczba2=1;
    std::cin>>n;

    if(n==0){
        std::cout<<"0\n";
        return 0;
    }
    else if(n==1){
        std::cout<<"1\n";
        return 0;
    }
    else if(n==2){
        std::cout<<"2\n";
        return 0;

    }
    n-=2;

    for(int i=0; i<n; i++){

        wynik=liczba1+liczba2;
        liczba1=liczba2;
        liczba2=wynik;
        //std::cout<<liczba1<<" "<<liczba2<<std::endl;

    }
    std::cout<<liczba2;


    return 0;
}
