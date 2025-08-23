#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdint>
using namespace std;

template <typename T>
void show(const char* name) {
    cout << left << setw(22) << name
         << " sizeof=" << setw(2) << sizeof(T)
         << "  signed? " << boolalpha << numeric_limits<T>::is_signed
         << "  min=" << setw(24) << numeric_limits<T>::min()
         << "  max=" << numeric_limits<T>::max() << "\n";
}

int main() {
    cout << "---- integers ----\n";
    show<signed char>("signed char");
    show<unsigned char>("unsigned char");
    show<short>("short");
    show<unsigned short>("unsigned short");
    show<int>("int");
    show<unsigned int>("unsigned int");
    show<long>("long");
    show<unsigned long>("unsigned long");
    show<long long>("long long");
    show<unsigned long long>("unsigned long long");

    cout << "---- floats ----\n";
    show<float>("float");
    show<double>("double");
    show<long double>("long double");

    cout << "---- fixed-width ----\n";
    show<std::int8_t>("int8_t");
    show<std::uint8_t>("uint8_t");
    show<std::int16_t>("int16_t");
    show<std::uint16_t>("uint16_t");
    show<std::int32_t>("int32_t");
    show<std::uint32_t>("uint32_t");
    show<std::int64_t>("int64_t");
    show<std::uint64_t>("uint64_t");
}
