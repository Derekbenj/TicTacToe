//include the .h files
#include "Control.h" 
#include "Display.h"

int main() {
    // Create instances of each class
    Display display_1;
    Control control_1;

    //Call each class's public functions, thereby calling their private functions as well
    display_1.doFoo_2();
    control_1.doFoo_1();

    //Needed for c++ stuff
    return 0;
}
