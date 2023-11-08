#include <math.h>
#include "solver.h"


void solve_quadratic() {
    cout << "Form: ax^2 + bx + c = 0.\n";

    float a = get_number("a", true),
          b = get_number("b"),
          c = get_number("c"),
          d = b*b - 4*a*c,
          d_sqrt = sqrt(abs(d)),
          two_a = 2 * a;
    
    if(d > 0) {
        float x1 = (-b + d_sqrt) / two_a,
              x2 = (-b - d_sqrt) / two_a;

        cout << "Real and unequal roots: \n";
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if(d == 0) {
        float x = -b / two_a;
        cout << "Real and equal roots: \n";
        cout << "x = " << x << endl;
    } else {
        float real_part = -b / two_a,
              imaginary_part = d_sqrt / two_a;

        cout << "Imaginary roots: \n";
        cout << "x1 = " << real_part << " + " << imaginary_part << "i\n";
        cout << "x2 = " << real_part << " - " << imaginary_part << "i\n";

    }
}