#include <iomanip>
#include "src/solver.h"

void line() {
    cout << setw(50) << setfill('-') << '\n';
}

int main() {
    ofstream out("Output.txt");
    char try_again;
    string equations[] = {
        "1. Linear equation",
        "2. Quadratic equation",
        "3. Simultaneous equations in 2 variables",
        "4. Simultaneous equations in 3 variables",
        "5. Simultaneous linear and quadratic equations"
    };

    set_output(&out);
    line();
    cout << '|' << setw(36) << setfill(' ') 
         << "Welcome to equation solver" << setw(13) << "|\n";
    
    do {
        line();
        for(string equation: equations) cout << equation << '\n';
        choose_equation();

        cout << "\nEnter 'Y' to try again: ";
        cin >> try_again;
    } while (try_again == 'Y' || try_again == 'y');

    line();
    cout << '|' << setw(26) << setfill(' ') 
         << "Good Bye" << setw(23) << "|\n";
    line();
    out.close();
    
    return 0;
}
