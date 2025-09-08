#include <iostream>
#include <complex>

using namespace std;
int main(){

    int num; 
    char c;
    float f;
    double d; 

    // oamrla ssignment
    num =10;
    c = 'a';
    f = 3.14f;
    d = 3.14159;

    // Assignment with curly braces
    // IMPORTANAT NOTE: This is the preferred way of initialization in modern C++
    int num1 = 10;
    int num2 {10};
    cout << "num1: " << num1 << ", num2: " << num2 << "\n";

    char c1 = 'a';
    char c2 {'a'};
    cout << "c1: " << c1 << ", c2: " << c << "\n";

    float f1 = 3.14f;
    float f2 {3.14f};
    cout << "f1: " << f1 << ", f2: " << f2 << "\n";

    double d1 = 3.14159;
    double d2 {3.14159};
    cout << "d1: " << d1 << ", d2: " << d2 << "\n";

    // A complex number in C++ using the standard library
    //     #include <complex>
    complex <double> complex_num1 {3.0, 4.0}; // 3 is real part, 4 is imaginary part
    complex <double> complex_num2 = {3.0, 4.0};
    cout << "complex_num1: " << complex_num1 << ", complex_num2: " << complex_num2 << "\n";


    // IMPORTANAT NOTE: AUTO in C++
    // The auto keyword in C++ is used for type inference, allowing the compiler to automatically deduce the type of a variable based on its initializer.
    // This feature enhances code readability and maintainability by reducing redundancy and making it easier to change types without modifying multiple declarations.
    auto var1 = 42;          // var1 is inferred as int
    auto var2 = 3.14;       // var2 is inferred as double
    auto var3 = 'A';        // var3 is inferred as char
    auto var4 = "Hello";    // var4 is inferred as const char*
    auto var5 = complex<double>{1.0, 2.0}; // var5 is inferred as complex<double>

    cout << "var1: " << var1 << ", var2: " << var2 << ", var3: " << var3 << ", var4: " << var4 << ", var5: " << var5 << "\n";   
    // Note with auto you haver to assign a value at the time of declaration
    // auto var6; // Error: 'var6' declared as 'auto' but not initialized


    return 0;

}