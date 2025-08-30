#include <iostream>
using i64 = long long;
int main(){

    int people;
    i64 subtotal, tips, each, tax, total, rem;

    std::cout << "How many people?" << std::endl;
    std::cin >> people;

    std::cout << "What's the subtotal?" << std::endl;
    std::cin >> subtotal;

    std::cout << "How much tips?" << std::endl;
    std::cin >> tips;

    std::cout << "How much tax?" << std::endl;
    std::cin >> tax;

    total = subtotal + tips + tax;
    each = total / people;
   

    std::cout << "Each person has to pay: " << each << std::endl;
 


return 0;
}