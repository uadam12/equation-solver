#include <iostream>
#include <fstream>

using namespace std;

void set_output(ofstream *out);
void choose_equation();
void print_text(string text);
void print_result(string description, float result);
void print_result(float real_part, float imaginary_part);
void solve_linear();
void solve_quadratic();
void solve_simultaneous_in_2_variables();
void solve_simultaneous_in_3_variables();
void solve_simultaneous_linear_and_quadratic();
float get_number(string, bool non_zero=false);