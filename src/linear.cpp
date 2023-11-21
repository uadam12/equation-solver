#include "solver.h"

void solve_linear() {
    cout << "form: mx + c = 0.\n";

    float m = get_number("m"),
          c = get_number("c"),
          x = -c/m;

    print_result("x", x);
}