//1
#include <iostream>
#include <math.h>
int main() {
    int x = 1;
    int y;
    if (x <= 0) {
        y = pow(2, x)-sin(y);
    } else if (x > 0)
    {
       y = pow(1/2, x)+cos(y);
    }
    std::cout << y << std::endl;

return(0);
}
//2
#include <iostream>

int main() {
    double x = 1;
    double y = 0.5;

    if ((x <= 2)
        && (x >= 0)
        && (y <= 1)
        && (y >= 0)) {
        std::cout << "The coordinate is in the range" << std::endl;
    } else {
        std::cout << "The coordinate is not in the range" << std::endl;
    }
}
return(0);
