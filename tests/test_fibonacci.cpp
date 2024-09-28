// test_fibonacci.cpp
#include <cassert>
#include "fibonacci.cpp"

int main() {
    assert(fibonacci(0) == 0);
    assert(fibonacci(1) == 1);
    assert(fibonacci(2) == 1);
    assert(fibonacci(3) == 2);
    assert(fibonacci(4) == 3);
    assert(fibonacci(5) == 5);
    assert(fibonacci(10) == 55);
    return 0;
}
