#include <iostream>
using namespace std;
double square(double val){
    return val * val;
}
void print_double_square(double val){
    cout << "Square of " << val << " is " << square(val) << "\n";
}
int main(){
    print_double_square(5.125);
    
}