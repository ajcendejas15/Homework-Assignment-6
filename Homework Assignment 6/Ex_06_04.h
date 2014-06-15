//
//  Ex_06_04.h
//  Homework Assignment 6
//
//  Created by AJ Cendejas on 6/14/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#ifndef __Homework_Assignment_6__Ex_06_04__
#define __Homework_Assignment_6__Ex_06_04__

#include <iostream>
using namespace std;

class Circle
{
public:
    Circle();
    Circle(double);
    double getArea() const;
    double getRadius() const;
    void setRadius(double);
    static int getNumberOfObjects();
    bool operator < (Circle& c)
    {
        return getRadius() < c.getRadius();
    }
    
    bool operator <= (Circle& c)
    {
        return getRadius() <= c.getRadius();
    }
    
    bool operator == (Circle& c)
    {
        return getRadius() > c.getRadius();
    }
    
    bool operator != (Circle& c)
    {
        return getRadius() >= c.getRadius();
    }
    
    bool operator > (Circle& c)
    {
        return getRadius() < c.getRadius();
    }
    
    bool operator >= (Circle& c)
    {
        return getRadius() <= c.getRadius();
    }
private:
    double radius;
    static int numberOfObjects;
};


#endif /* defined(__Homework_Assignment_6__Ex_06_04__) */
