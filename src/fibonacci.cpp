#include "fibonacci.h"
int fibonacci(int n) {
    if (n <= 1)
        return n+1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
