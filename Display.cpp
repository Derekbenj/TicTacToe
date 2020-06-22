#include "Display.h"
#include <iostream>

/*
As stated in the Control.cpp file, we can use the foo_2 function before we define it in the .cpp file
because the linker will find the declaration in the .h file, and link them together. Therefore
the order does not matter
*/

//Declare public function to call private function, hiding the code in layers of visibility
void Display::doFoo_2() {
    foo_2();
}

//Declare private function
void Display::foo_2() {
    std::cout << "This is a test for foo_2" << std::endl;
}

