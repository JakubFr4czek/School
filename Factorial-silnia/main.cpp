#include <iostream>

int factorial(int);

int main()
{
    int numb;
    std::cin>>numb;
    std::cout<<factorial(numb);

    return 0;
}

int factorial(int n){

    return (n<1)?1:factorial(n-1)*n;

}
