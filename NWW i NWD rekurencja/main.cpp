#include <iostream>

int NWD_mod(int,int);
int NWD_sub(int,int);
int NWW_mod(int,int);
int NWW_sub(int,int);

int main()
{
    std::cout<<NWD_mod(9,18)<<std::endl;
    std::cout<<NWD_sub(9,18)<<std::endl;

    std::cout<<NWW_mod(9,18)<<std::endl;
    std::cout<<NWW_sub(9,18)<<std::endl;

    return 0;
}

int NWD_mod(int a, int b){

    return (b>0)?NWD_mod(b,a%b):a;
}

int NWD_sub(int a, int b){

    return (a!=b)?(a>b)?NWD_sub(a-b,b):NWD_sub(a,b-a):a;
}

int NWW_mod(int a, int b){

    return (a*b)/NWD_mod(a,b);
}

int NWW_sub(int a, int b){

    return (a*b)/NWD_sub(a, b);
}
