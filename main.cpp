#include <iomanip>
#include "src/solver.h"

void line() {
    cout << setw(50) << setfill('-') << '\n';
}

int main() {
    char try_again;

    line();
    cout << '|' << setw(36) << setfill(' ') 
         << "Welcome to equation solver" << setw(13) << "|\n";
    
    do {
        line();
        choose_equation();

        cout << "\nEnter 'Y' to try again: ";
        cin >> try_again;
    } while (try_again == 'Y' || try_again == 'y');

    line();
    cout << '|' << setw(26) << setfill(' ') 
         << "Good Bye" << setw(23) << "|\n";
    line();
    
    return 0;
}
