//
//  Ex_06_04.cpp
//  Homework Assignment 6
//
//  Created by AJ Cendejas on 6/14/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#include "Ex_06_04.h"

int Circle::numberOfObjects = 0;

Circle::Circle()
{
    radius = 1;
    numberOfObjects++;
}

Circle::Circle(double newRadius)
{
    radius = newRadius;
    numberOfObjects++;
}

double Circle::getArea() const
{
    return radius * radius * 3.14159;
}

double Circle::getRadius() const
{
    return radius;
}

void Circle::setRadius(double newRadius)
{
    radius = (newRadius >= 0) ? newRadius : 0;
}

int Circle::getNumberOfObjects()
{
    return numberOfObjects;
}