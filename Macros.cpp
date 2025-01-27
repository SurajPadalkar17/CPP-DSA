// a pieace of program tht is replaced by macros

// Types of Macros in C++
// Macros can be classified into four types in C++:
// Object-Like Macros :act as textual replacements,sed for defining constants or short, reusable code snippets
// Function-Like Macros: take arguments and perform text substitution based on those arguments also lack type safety.
// Multiline Macros :allow us to define multiple lines of code as a single macro
// Chain Macros  :e parent macro will be expanded first and then the child macro will be expanded.

// # predifined Macros
//__LINE__: This macro expands to the current line number in the source code.
//  __FILE__: This macro expands to the name of the current source file.
//  __DATE__: This macro expands to a string that represents the date of compilation.
//  __TIME__: This macro expands to a string that represents the time of compilation.


// C++ program to illustrate the macro definition
// ex of object Like macros
// #include <iostream>
// using namespace std;

// // Define a macro to calculate the square of a number
// #define SQUARE(x) (x * x)

// int main()
// {
//     int n = 7;
//     int result = SQUARE(n); // Expands to: (n * n)
//     cout << "Square of " << n << " is " << result;
//     return 0;
// }

// // C++ program to illustrate the function like macros
// #include <iostream>
// using namespace std;

// // Define a macro to print a value
// #define PRINT(x) cout << "Value is: " << x

// int main()
// {
//     int value = 42;

//     // Print the value using the PRINT macro
//     PRINT(value);
//     return 0;
// }

// // C++ program to illustrate the multiline macros
// #include <iostream>

// // Define a macro for printing a rectangle with a given
// // width and height
// #define PRINT_RECTANGLE(width, height)  \
//     \ 
//     for (int i = 0; i < height; i++)    \
//     {                                   \
//         \ 
//         for (int j = 0; j < width; j++) \
//         {                               \
//             \ 
//             std::cout                   \
//                 << "*";                 \
//             \ 
//                                                           \
//         }                               \
//         \ 
//         std::cout                       \
//             << std::endl;               \
//         \ 
//                                                               \
//     }

// int main()
// {

//     // Print a rectangle with a width of 4 and a height of 3
//     PRINT_RECTANGLE(4, 3);
//     return 0;
// }

// // C++ program to illustrate the chain macros
// #include <iostream>
// using namespace std;

// // defining first macro
// #define CLERK 10

// // defining second macro
// #define WORKER CLERK

// int main()
// {

//     // checking value of worker
//     cout << WORKER;

//     return 0;
// }




// C++ program to illustrate the predefined macros 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
  
    // Display the current line number and the source file 
    // name 
    cout << "This is line " << __LINE__ << " in file "
         << __FILE__ << "\n"; 
  
    // Display the compilation date 
    cout << "Compiled on " << __DATE__; 
  
    return 0; 
}