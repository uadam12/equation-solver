#include "solver.h"


int get_choice() {
    int choice = 0, size = 5;

    while (true) {
        choice = get_number("your choice", true);
        
        if(choice >= 1 && choice <= size) return choice; 
        else cout << "Choice out of range([1," << size << "]).\n";
    }
}

void choose_equation() {
    cout << "Please choose an equation.\n";

    int choice = get_choice();
    switch (choice) {
        case 1: solve_linear();
            break;
        
        case 2: solve_quadratic();
            break;

        case 3: solve_simultaneous_in_2_variables();
            break;

        case 4: solve_simultaneous_in_3_variables();
            break;

        case 5: solve_simultaneous_linear_and_quadratic();
            break;
    
        default: cout << "Unknown equation.\n";
    }
}