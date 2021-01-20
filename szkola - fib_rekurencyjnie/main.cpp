#include <iostream>

int fib(int a){

    if(a==0) return 0;
    else if(a==1) return 1;
    else return fib(a-2)+fib(a-1);

}

int main()
{

    std::cout<<fib(11);

    return 0;
}
