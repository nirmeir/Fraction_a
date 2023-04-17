#include "doctest.h"
#include <iostream>
#include <sstream>
#include <cassert>
using namespace std;

#include "sources/Fraction.hpp"

using namespace ariel;


TEST_CASE("check fraction") {
    CHECK_NOTHROW(Fraction(5,3));
}
TEST_CASE("check devide by zero") {
    CHECK_THROWS(Fraction(5,0));
}
TEST_CASE("check cout") {
    Fraction a(5,3), b(14,21);
    CHECK_NOTHROW(cout << "a: " << a << "b: " << b << endl);
}
TEST_CASE("check sum") {
    Fraction a(5,3), b(14,21);
    CHECK_NOTHROW(a+b);
}
TEST_CASE("check sub") {
    Fraction a(5,3), b(14,21);
    CHECK_NOTHROW(a-b);
}
TEST_CASE("check devide") {
    Fraction a(5,3), b(14,21);
    CHECK_NOTHROW(cout << "a/b" << a/b << endl);
}
TEST_CASE("check multiply") {
    Fraction a(5,3), b(14,21);
    CHECK_NOTHROW(cout << "a*b" << a*b << endl);
}
TEST_CASE("check multiply by double") {
    Fraction a(5,3), b(14,21);
    CHECK_NOTHROW(cout << "2.3*b" << 2.3*b << endl);
}
TEST_CASE("check sum by double") {
    Fraction a(5,3), b(14,21);
    CHECK_NOTHROW(cout << "a+2.421" << a+2.421 << endl);
}
TEST_CASE("check a+b-1") {
    Fraction a(5,3), b(14,21);
    CHECK_NOTHROW(Fraction c = a+b-1);
}
TEST_CASE("check ++") {
    Fraction a(5,3), b(14,21);
    Fraction c = a+b-1;
    CHECK_NOTHROW(cout << c++ << endl);
}
TEST_CASE("check --") {
    Fraction a(5,3), b(14,21);
    Fraction c = a+b-1;
    CHECK_NOTHROW(cout << --c << endl);
}
TEST_CASE("check >= ") {
    Fraction a(5,3), b(14,21);
    Fraction c = a+b-1;
    CHECK_NOTHROW(cout << (c >= b ? "true" : "false"));
}
TEST_CASE("check if a is bigger than 1.1 ") {
    Fraction a(5,3), b(14,21);
    Fraction c = a+b-1;
    CHECK_NOTHROW(if (a > 1.1) cout << " a is bigger than 1.1" << endl);
}
TEST_CASE("check if a is bigger than 1.1") {
    Fraction a(5,3), b(14,21);
    CHECK_NOTHROW(if (a > 1.1) cout << " a is bigger than 1.1" << endl);
}
TEST_CASE("check Ctor ") {
    CHECK_THROWS(Fraction(5,0));
}
TEST_CASE("check correct sum ") {
    Fraction a(1,2), b(1,2), c(1,1);
    CHECK_EQ(a+b, 1*c);
}
TEST_CASE("check correct sub ") {
    Fraction a(1,2), b(1,2), c(1,1);
    CHECK_EQ(a-b, 0*c);
}
TEST_CASE("check correct devide ") {
    Fraction a(1,2), b(1,2), c(1,1);
    CHECK_EQ(a/b, 1*c);
}
TEST_CASE("check correct multiply ") {
    Fraction a(1,2), b(1,2), c(1,1);
    CHECK_EQ(a*b, 0.25*c);
}
TEST_CASE("check correct multiply by double ") {
    Fraction a(1,2), b(1,2), c(1,1);
    CHECK_EQ(2.3*b, 1.15*c);
}
TEST_CASE("check correct sum by double ") {
    Fraction a(1,2), b(1,2), c(1,1);
    CHECK_EQ(a+2.421, 3.421*c);
}













