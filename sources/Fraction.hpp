#pragma once
#include <iostream>
#include <stdio.h>

namespace ariel
{
    class Fraction{
        
    private:
        int numerator;
        int denominator;        

    public:

        Fraction(int _numerator, int _denominator): numerator(_numerator), denominator(_denominator) {
            if (_denominator == 0) {
                throw std::invalid_argument("Denominator cannot be zero");
            }
        }

        int getNumerator() ;
        int getDenominator() ;
        void setNumerator(int numerator);
        void setDenominator(int denominator);
        void print();
        Fraction operator+(const Fraction& other) ;
        friend Fraction& operator+(Fraction& other,double num);
        Fraction& operator-(const Fraction& other) ;
        Fraction& operator-(int);

        Fraction operator*(const Fraction& other) ;
        friend Fraction operator*(double num, Fraction& other);
        Fraction operator/(const Fraction& other) ;
        bool operator>(const Fraction& other) const;
        bool operator>(double) ;

        bool operator>=(const Fraction& other) const;
        bool operator<(const Fraction& other) const;
        bool operator<=(const Fraction& other) const;
        bool operator==(const Fraction& other) const;
        bool operator!=(const Fraction& other) const;
        Fraction& operator++();
        Fraction& operator++(int);
        Fraction& operator--();
        friend std::ostream& operator<<(std::ostream& output, const Fraction& fraction);
        friend std::istream& operator>>(std::istream& input, Fraction& fraction);
    };

    }
