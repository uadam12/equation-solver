#include "solver.h"

bool is_numeric(string input) {
    bool has_decimal_point = false;
    int size = input.length();

    for(int i=0; i<size; i++) {
        char ch = input[i];

        switch (ch) {
            case '-':
            case '+': 
                if(i != 0) return false;
                break;
            
            case '.':
                if(i==0 || i == size-1 || has_decimal_point) return false;
                has_decimal_point = true;
                break;
        
            default: // Return false if ch is not digit(0-9).
                if(ch < '0' || ch > '9') return false;
        }
    }

    return size != 0;
}

float get_number(string label, bool non_zero) {
    string input;
    float number;

    while (true) {
        cout << "Enter " << label << ": ";
        cin >> input;

        if(is_numeric(input)) {
            number = stof(input);

            if(non_zero && number==0.0) 
                cout << "Value of " << label << " cannot be zero(0).\n";
            else return number;
        } else cout << "Please enter a valid number.\n";
    }    
}