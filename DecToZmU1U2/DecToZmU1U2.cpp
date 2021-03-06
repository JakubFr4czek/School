#include <iostream>
#include <bitset>

std::string decToBin(int);
std::string decToZm(int);
std::string decToU1(int);
std::string decToU2(int);

int main()
{

    int decNum;
    std::cout << "Podaj liczbe w systemie dziesietnym: ";
    std::cin >> decNum;

    std::cout<<"ZM: "<< decToZm(decNum) <<'\n';
    std::cout << "U1: " << decToU1(decNum) << '\n';
    std::cout << "U2: " << decToU2(decNum) << '\n';

   
       
}

std::string decToBin(int a) {
    if (a == 0) return "";
    return (a % 2 == 0) ? decToBin(a / 2) + "0" : decToBin(a / 2) + "1";
}
std::string decToZm(int a) {
    std::string b="";

    if (a >= 0)
        b += '0';
    else
        b += '1';

    b += decToBin(a);

    std::bitset<32>c(b);
    b = c.to_string();

    return b;
}

std::string decToU1(int a) {

    std::string b = "";

    b += '0';

    b+=decToBin(a);
        
    std::bitset<32>c(b);

    for (int i = 0; i < b.size(); i++) {
        c.flip();
    }

    b = c.to_string();


    return b;

}

std::string decToU2(int a) {
    std::bitset<32>c(a);
    return c.to_string();
}
