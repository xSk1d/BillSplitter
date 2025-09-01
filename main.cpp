#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double total;
    int people;

    cout << "=== Bill Splitter v1 ===\n";
    cout << "Enter total amount: ";
    cin >> total;

    if (cin.fail() || total < 0) {
        cout << "Invalid total amount entered.\n";
        return 1;
    }

    cout << "Enter number of people: ";
    cin >> people;

    if (cin.fail() || people <= 0) {
        cout << "Who are you splitting with? Ghosts?\n";
        return 1;
    }
   
    double share  = total/people;

    cout << fixed << setprecision(2);
    cout << "\nTotal: $" << total << "\n";
    cout << "Each person pays: $" << share << "\n";

    return 0;
}