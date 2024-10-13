#include <stdio.h>
#include <math.h>
#include "z9.h"

void z9() {
    double result = pow(3.5, 4) + sqrt(7) - pow(12.23, -3);
    printf("%lf\n", result);
}