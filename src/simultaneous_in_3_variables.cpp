#include "solver.h"

void solve_simultaneous_in_3_variables() {
    cout << "Form: a1x + b1y + c1z = d1.\n";
    cout << "      a2x + b2y + c2z = d2.\n";
    cout << "      a3x + b3y + c3z = d3.\n";

    float a1 = get_number("a1"), b1 = get_number("b1"),
          c1 = get_number("c1"), d1 = get_number("d1"),
          a2 = get_number("a2"), b2 = get_number("b2"),
          c2 = get_number("c2"), d2 = get_number("d2"),
          a3 = get_number("a3"), b3 = get_number("b3"),
          c3 = get_number("c3"), d3 = get_number("d3");
    
    float d = a1*(b2*c3 - c2*b3) - b1*(a2*c3 - c2*a3) + c1*(a2*b3 - b2*a3),
          dx = d1*(b2*c3 - c2*b3) - b1*(d2*c3 - c2*d3) + c1*(d2*b3 - b2*d3),
          dy = a1*(d2*c3 - c2*d3) - d1*(a2*c3 - c2*a3) + c1*(a2*d3 - d2*a3),
          dz = a1*(b2*d3 - d2*b3) - b1*(a2*d3 - d2*a3) + d1*(a2*b3 - b2*a3),
          x = dx / d, y = dy / d, z = dz / d;
    
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}