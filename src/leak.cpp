#include <iostream>

void leak() {
    int* p = new int(10);  // cấp phát nhưng không delete
    std::cout << *p << std::endl;
}
