#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> a{1,3,7,4,2,7,1,2,55,98,1,2,6,43,12,0,43};
    std::sort(a.begin(),a.end(), std::greater<int>());
    for(int n : a)
        std::cout<<n<<" ";
    return 0;
}
