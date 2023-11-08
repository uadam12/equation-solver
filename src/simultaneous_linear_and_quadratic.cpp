#include <math.h>
#include "solver.h"


void solve_simultaneous_linear_and_quadratic() {
    cout << "Form: b1x + c1y = d1.\n";
    cout << "      ax^2 + b2x + c2y + d2 = 0.\n";

    float b1 = get_number("b1"), 
          c1 = get_number("c1"),
          d1 = get_number("d1"), 
          a = get_number("a", true),
          b2 = get_number("b2"), 
          c2 = get_number("c2"),
          d2 = get_number("d2"), 
          a0 = a*c1, b0 = b2*c1 - b1*c2, 
          c0 = c1*d2 + c2*d1, d = b0*b0 - 4*a0*c0;
    
    if(d < 0) cout << "Equation(s) has imaginary roots\n";
    else {
        float x1 = (-b0 + sqrt(d)) / (2*a0),
              x2 = (-b0 - sqrt(d)) / (2*a0),
              y1 = (d1 - b1*x1) / c1,
              y2 = (d1 - b1*x2) / c1;
        
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        cout << "y1 = " << y1 << endl;
        cout << "y2 = " << y2 << endl;
    }
}