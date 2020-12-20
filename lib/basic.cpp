#include <iostream>

#ifdef __EMSCRIPTEN__
#include <emscripten/bind.h>
#endif

void myPrint() {
    std::cout << "Hello World!" << std::endl;
}


#ifdef __EMSCRIPTEN__
EMSCRIPTEN_BINDINGS(basicModule) {
    function("myPrint", &myPrint);
}
#endif