//
//  Ex_06_05.cpp
//  Homework Assignment 6
//
//  Created by AJ Cendejas on 6/14/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#include "Ex_06_05.h"

Complex::Complex(double aa, double bb)
{
    a = aa;
    b = bb;
}

Complex::Complex(double aa)
{
    a = aa;
    b = 0;
}

Complex::Complex()
{
    a = 0;
    b = 0;
}

Complex Complex::add(Complex& c)
{
    double aa, bb;
    aa = a + c.a;
    bb = b + c.b;
    Complex num(aa, bb);
    return num;
}

Complex Complex::subtract(Complex& c)
{
    double aa, bb;
    aa = a - c.a;
    bb = b - c.b;
    Complex num(aa, bb);
    return num;
}

Complex Complex::multiply(Complex& c)
{
    double aa, bb;
    aa = (a*c.a - b*c.b);
    bb = (b*c.a + a*c.b);
    Complex num(aa, bb);
    return num;
}

Complex Complex::divide(Complex& c)
{
    double aa, bb;
    aa = (a*c.a + b*c.b)/(c.a*c.a + c.b*c.b);
    bb = (b*c.a - a*c.b)/(c.a*c.a + c.b*c.b);
    Complex num(aa, bb);
    return num;
}

double Complex::abs()
{
    return sqrt(a*a + b*b);
}

string Complex::toString()
{
    string num;
    stringstream ss;
    if (b == 0)
        ss << a;
    else
        ss << a << " + " << b << "i";
    return ss.str();
}

void Complex::operator+=(Complex& c)
{
    a = a + c.a;
    b = b + c.b;
}

void Complex::operator-=(Complex& c)
{
    a = a - c.a;
    b = b - c.b;
}

void Complex::operator*=(Complex& c)
{
    a = (a*c.a - b*c.b);
    b = (b*c.a - a*c.b);
}

void Complex::operator/=(Complex& c)
{
    a = (a*c.a + b*c.b)/(c.a*c.a + c.b*c.b);
    b = (b*c.a - a*c.b)/(c.a*c.a + c.b*c.b);
}

double Complex::operator[](int index)
{
    if (index == 0)
        return a;
    else
        return b;
}

Complex Complex::operator+()
{
    return *this;
}

Complex Complex::operator-()
{
    double aa, bb;
    aa = -a;
    bb = -b;
    Complex num(aa, bb);
    return num;
}

Complex& Complex::operator++()
{
    a++;
    return *this;
}

Complex& Complex::operator--()
{
    a--;
    return *this;
}

Complex Complex::operator++(int dummy)
{
    Complex temp(a, b);
    a++;
    return temp;
}

Complex Complex::operator--(int dummy)
{
    Complex temp(a, b);
    a--;
    return temp;
}

ostream& operator<<(ostream& o, Complex c)
{
    o << c.toString();
    return o;
}

istream& operator>>(istream& i, Complex c)
{
    cout << "Enter value for a: ";
    i >> c.a;
    cout << "Enter value for b: ";
    i >> c.b;
    return i;
}

Complex operator+(Complex& c1, Complex& c2)
{
    Complex n;
    n = c1.add(c2);
    return n;
}

Complex operator-(Complex& c1, Complex& c2)
{
    Complex n;
    n = c1.subtract(c2);
    return n;
}

Complex operator*(Complex& c1, Complex& c2)
{
    Complex n;
    n = c1.multiply(c2);
    return n;
}

Complex operator/(Complex& c1, Complex& c2)
{
    Complex n;
    n = c1.divide(c2);
    return n;
}
