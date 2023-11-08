#include "solver.h"

void solve_simultaneous_in_2_variables() {
    cout << "Form: a1x + b1y = c1.\n";
    cout << "      a2x + b2y = c2.\n";

    float a1 = get_number("a1"),
          b1 = get_number("b1"),
          c1 = get_number("c1"),
          a2 = get_number("a2"),
          b2 = get_number("b2"),
          c2 = get_number("c2");
    
    float d = a1*b2 - b1*a2,
          dx = c1*b2 - b1*c2,
          dy = a1*c2 - c1*a2,
          x = dx / d, y = dy / d;
    
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}