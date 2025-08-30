#include <iostream>
#include <string>
using i64 = long long;

int main(){

    std::string moneyString;
    std::cout << "Enter total: ";
    std::cin >> moneyString;

    std::string cleaned;
    for (char character : moneyString) {
        if (character != ' ') cleaned += character;
    }
    std::cout << "Cleaned: " << cleaned << std::endl;
    auto dot = cleaned.find('.');
    if (dot == std::string::npos) {
        std::cout << "No decimal point." << std::endl;
    } else {
        std::cout << "Decimal at index: " << dot << std::endl;
    }

    std::string dollars, cents;
    
    if (dot == std::string::npos) {
        dollars = cleaned; 
        cents = "00";
    } else {
        dollars = cleaned.substr(0, dot);
        cents = cleaned.substr(dot +1);
    }

    if (cents.size() == 0)  cents = "00";
    else if (cents.size () == 1) cents += "0";
    else if (cents.size() > 2) cents.resize(2);

return 0;
}