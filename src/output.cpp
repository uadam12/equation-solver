#include "solver.h"

ofstream *output;

void set_output(ofstream *out) {
    output = out;
}

bool is_open() {
    return (*output).is_open();
}

void print_text(string text) {
    cout << text << endl;
    if(is_open()) *output << text << endl;
}

void print_result(string description, float result) {
    cout << description << " = " << result << endl;
    if(is_open()) *output << description << " = " << result << endl;
}

void print_result(float real_part, float imaginary_part) {
    cout << "x1 = " << real_part << " + " << imaginary_part << "i\n";
    cout << "x2 = " << real_part << " - " << imaginary_part << "i\n";
    if(!is_open()) return;
    *output << "x1 = " << real_part << " + " << imaginary_part << "i\n";
    *output << "x2 = " << real_part << " - " << imaginary_part << "i\n";
}