#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 0;
    a = 1; // Start with the first term (1)
    s = a;

    do {
        n++;
        dod(); // Compute the next term
        s += a;
    } while (fabs(a) > e); // Continue until the term is smaller than e
}
