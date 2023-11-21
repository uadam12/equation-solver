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

        print_text("Real and unequal roots: ");
        print_result("x1", x1);
        print_result("x2", x2);
    } else if(d == 0) {
        float x = -b / two_a;
        print_text("Real and equal roots: ");
        print_result("x", x);
    } else {
        float real_part = -b / two_a,
              imaginary_part = d_sqrt / two_a;

        print_text("Imaginary roots: ");
        print_result(real_part, imaginary_part);
    }
}