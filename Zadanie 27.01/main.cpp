#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr;
    int n,a,wynik=0,i=0;

    std::cin>>n;

    loop1:

    if(i<n){
        std::cin>>a;
        arr.push_back(a);
        i++;
        goto loop1;
    }

    a=0;

    loop2:
    if(a<arr.size()){
        wynik+=arr[a++];
        goto loop2;
    }

    std::cout<<(1.0*wynik)/n<<std::endl;

    return 0;
}

