#include <iostream>

int main()
{
    int a;
    std::cout<<"Enter a number: ";
    std::cin>>a;
    if (a % 2 == 0){
        std::cout<<"It's even number";
    }
    else if (a % 2 == 0){
        std::cout<<"It's odd number";
    }
    else{
        std::cout<<"Error";
    }
    return 0;
}
