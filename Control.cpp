#include "Control.h" //Include the header file
#include <iostream> // So that we can use cout

/*
As you can see, the order of the function declarations does not matter, I call foo_1 in doFoo after declaring foo_1,
and it works. In the display.cpp I will do the opposite, and it will work as well
*/

//Declare hidden function in file, hiding the private function
/*
In order to define the function, I need to state which class it is a part of, in this case the Control class. 
The '::' simply state that I am defining what was previously declared
*/
void Control::foo_1() {
    std::cout << "This is the foo 1 function\n";
}

//Declare public function in file
void Control::doFoo_1() {
    foo_1();
}