#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main(){
    double total;
    int people;

    cout << "=== Bill Splitter v1 ===\n";
    
    while (true) {
        cout << "Enter total amount: ";
        cin >> total;

        if (cin.fail() || total <= 0) {
            cout << "Invalid total amount. Try again.\n";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    while (true) {
        cout << "Enter number of people: ";
        cin >> people;

        if (cin.fail() || people <= 0) {
            cout << "Invalid number of people. Try again.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        } else {
            break;
        }
    }
   
    double share  = total/people;

    cout << "\nTotal: $" << fixed << setprecision(2) << total << "\n";
    cout << "Each person pays: $" << fixed << setprecision(2) << share << "\n";

    return 0;
}