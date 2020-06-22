#ifndef DISPLAY_H // If the Display file has not been defined yet
#define DISPLAY_H // Define the Display file as the following

class Display { // Make a new display file class
    public: // Variables and function that will be public outside the class
        void doFoo_2(); // Executes hidden function foo_2

    private: // Variables and functions that will be private outside the class
        void foo_2(); // Simple function declaration
};

#endif // End the Display file declaration