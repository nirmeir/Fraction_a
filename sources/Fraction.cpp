#include "Fraction.hpp"

using namespace std;
namespace ariel{


int Fraction::getNumerator() {
    return 0;
};

int Fraction::getDenominator() {
    return 0;
};

void Fraction::setNumerator(int numerator) {
};

void Fraction::setDenominator(int denominator) {
};

void Fraction::print() {
};

Fraction Fraction::operator+(const Fraction& other) {
    return *this;
};

Fraction& Fraction::operator-(const Fraction& other) {
    return *this;
};

Fraction& Fraction::operator-(int num) {
    return *this;
};

Fraction& operator+(Fraction& other,double num) {
    return other;
};

Fraction Fraction::operator*(const Fraction& other) {
    return *this;
};

Fraction operator*(double num, Fraction& other) {
    return other;
};

Fraction Fraction::operator/(const Fraction& other) {
    return *this;
};

bool Fraction::operator>(const Fraction& other) const{
    return false;
};

bool Fraction::operator>(double) {
    return false;
};

bool Fraction::operator>=(const Fraction& other) const{
    return false;
};

bool Fraction::operator<(const Fraction& other) const{
    return false;
};

bool Fraction::operator<=(const Fraction& other) const{
    return false;
};

bool Fraction::operator==(const Fraction& other) const{
    return false;
};

bool Fraction::operator!=(const Fraction& other) const{
    return false;
};

Fraction& Fraction::operator++() {
    return *this;
};

Fraction& Fraction::operator++(int) {
    return *this;
};

Fraction& Fraction::operator--() {
    return *this;
};

std::ostream& operator<<(std::ostream& output, const Fraction& fraction) {
    return output;
};

std::istream& operator>>(std::istream& input, Fraction& fraction) {
    return input;
};


}