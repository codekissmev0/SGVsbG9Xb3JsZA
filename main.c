#include <stdio.h>

int main(void) {
    // int i;
    // for (i = 0; i < 5; ++i) {
    for (int i = 0; i < 5; ++i) { //c99才开始支持这种写法,如果set(CMAKE_C_STANDARD 90),你用MinGW则不支持, 但vs支持（因为它是msvc Microsoft Visual C++ 本质是个c++编译器,C++是可以这样写的）
        printf("Hello, World!\n");
    }
    return 0;
}
