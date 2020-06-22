#ifndef CONTROL_H // If the Control file has not been defined yet
#define CONTROL_H // Define the Control file as the following

class Control { // Make a new control file class
    public: // Variables and function that will be public outside the class
        void doFoo_1(); // Executes hidden function foo_1

    private: // Variables and functions that will be private outside the class
        void foo_1(); // Simple function declaration
};

#endif // End the Control file declaration