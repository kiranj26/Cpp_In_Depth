/* Example practice for the type fo operators in C++    

*/
#include <iostream>
using namespace std;    

int main(){

    // unary operators
    int a = 5;
    cout << "a = " << a << endl;
    cout << "++a = " << ++a << endl; // pre-increment
    cout << "a++ = " << a++ << endl; // post-increment
    cout << "a = " << a << endl; // a is now 7
    cout << "--a = " << --a << endl; // pre-decrement
    cout << "a-- = " << a-- << endl; // post-decrement
    cout << "a = " << a << endl; // a is now 5
    // binary operators 
    // Aithmatic Operators
    int b = 10, c = 20;
    cout << "b + c = " << b + c << endl; // addition
    cout << "b - c = " << b - c << endl; // subtraction
    cout << "b * c = " << b * c << endl; // multiplication
    cout << "b / c = " << b / c << endl; // division
    cout << "b % c = " << b % c << endl; // modulus

    // modulus rules
    // 1. Modulus operator (%) returns the remainder of the division.
    // 2. It can only be used with integer types.
    // 3. The result has the same sign as the dividend (the first operand).
    // 4. If the dividend is negative, the result will also be negative.
    // 5. If the divisor is zero, it will cause a runtime error (division by zero).
    // 6. The modulus operator is not defined for floating-point types. 
    // example code
    int x = 10, y = 3;
    cout << "x % y = " << x % y << endl; // 1
    cout << "x % -y = " << x % -y << endl; // -2
    cout << "-x % y = " << -x % y << endl; // -1
    cout << "-x % -y = " << -x % -y << endl; // 2
    // Note: Using modulus with floating-point types will result in
    // a compilation error, as it is not defined for them.  

    // Assignment Operators basics and advance
    int d = 5;
    cout << "d = " << d << endl;
    d += 3; // equivalent to d = d + 3
    cout << "d += 3: " << d << endl; // d is now 8
    d -= 2; // equivalent to d = d - 2
    cout << "d -= 2: " << d << endl; // d is now 6
    d *= 2; // equivalent to d = d * 2
    cout << "d *= 2: " << d << endl; // d is now 12
    d /= 3; // equivalent to d = d / 3
    cout << "d /= 3: " << d << endl; // d is now 4
    d %= 3; // equivalent to d = d % 3
    cout << "d %= 3: " << d << endl; // d is now 1  

    // Relational Operators
    int e = 10, f = 20;
    cout << "e == f: " << (e == f) << endl; // equality
    cout << "e != f: " << (e != f) << endl; // inequality
    cout << "e < f: " << (e < f) << endl; // less than
    cout << "e > f: " << (e > f) << endl; // greater than
    cout << "e <= f: " << (e <= f) << endl; // less than or equal to
    cout << "e >= f: " << (e >= f) << endl; // greater than or equal to

    // Relation without parenthesis
    // The precedence of relational operators is lower than that of arithmetic operators.
    // For example, in the expression `a + b < c`, the addition is performed
    // before the comparison, so it is equivalent to `(a + b) < c`.

    // Will a == b in count throw error if not used inside bracket?
    // Yes, if you write `a == b + c`, it will not throw an error,
    // but it will compare `a` with the result of `b + c`.

    // Logical Operators
    bool g = true, h = false;
    cout << "g && h: " << (g && h) << endl; //
    cout << "g || h: " << (g || h) << endl; // logical OR
    cout << "!g: " << (!g) << endl; // logical NOT  

    // Bitwise Operators
    int i = 5, j = 3; // binary: i = 010
    cout << "i & j: " << (i & j) << endl; // bitwise AND
    cout << "i | j: " << (i | j) << endl; // // bitwise OR
    cout << "i ^ j: " << (i ^ j) << endl; // bitwise XOR
    cout << "~i: " << (~i) << endl; // bitwise NOT
    cout << "i << 1: " << (i << 1) << endl; // left shift
    cout << "i >> 1: " << (i >> 1) << endl; // right shift

    // Conditional (Ternary) Operator
    int k = (e < f) ? e : f; // if e is less
    cout << "k = (e < f) ? e : f: " << k << endl; // k will be e if true, else f
    // The conditional operator is also known as the ternary operator.
    // It is a shorthand for an if-else statement
    // Syntax: condition ? expression_if_true : expression_if_false

    // ternanry operators

}