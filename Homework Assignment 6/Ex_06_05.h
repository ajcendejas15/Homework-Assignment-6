//
//  Ex_06_05.h
//  Homework Assignment 6
//
//  Created by AJ Cendejas on 6/14/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#ifndef __Homework_Assignment_6__Ex_06_05__
#define __Homework_Assignment_6__Ex_06_05__

#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

class Complex
{
private:
    double a, b;
public:
    Complex(double, double);
    Complex(double);
    Complex();
    Complex add(Complex&);
    Complex subtract(Complex&);
    Complex multiply(Complex&);
    Complex divide(Complex&);
    double abs();
    string toString();

    void operator+=(Complex&);
    void operator-=(Complex&);
    void operator*=(Complex&);
    void operator/=(Complex&);
    
    double operator[](int);
    
    Complex operator+();
    Complex operator-();
    
    Complex& operator++();
    Complex& operator--();
    Complex operator++(int);
    Complex operator--(int);
    
    friend ostream& operator<<(ostream&, Complex);
    friend istream& operator>>(istream&, Complex);
};

Complex operator+(Complex&, Complex&);
Complex operator-(Complex&, Complex&);
Complex operator*(Complex&, Complex&);
Complex operator/(Complex&, Complex&);

#endif /* defined(__Homework_Assignment_6__Ex_06_05__) */
