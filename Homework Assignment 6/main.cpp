//
//  main.cpp
//  Homework Assignment 6
//
//  Created by AJ Cendejas on 6/14/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include "Ex_06_04.h"
#include "Ex_06_05.h"
using namespace std;

int main()
{
    //Ex_06_01
    fstream fout("/Users/ajcendejas15/Documents/CS 172/Homework Assignment 6/Homework Assignment 6/Exercise13_1.txt", ios::app); //This was the only way I could find the file.( Sorry! :( )
    if (!fout)
    {
        cout << "File could not be opened." << endl;
    }
    for( int i = 0; i < 100; i++)
    {
        int j = rand() % 100;
        fout << j << " ";

    }
    
    //Ex_06_02
    string filename;
    cout << "Enter a filename to count characters: ";
    getline(cin, filename);
    
    ifstream fin(filename);
    if(!fin)
    {
        cout << endl << filename << " does not exist.";
        return 0;
    }
    char a;
    int count = 0;
    while(!fin.eof())
    {
        fin >> a;
        if (a != '\0')
            count++;
    }
    cout << "\n\nCharacters: " << count;
    //Ex_06_03
    
    string year;
    char gender;
    string name;
    cout << "\n\nEnter year: ";
    cin >> year;
    cout << "\nEnter gender(M or F): ";
    cin >> gender;
    cout << "\nEnter name: ";
    cin >> name;
    string file = "/Users/ajcendejas15/Documents/CS 172/Homework Assignment 6/Homework Assignment 6/Babynameranking" + year + ".txt"; //This was the location of my files.
    fstream f(file);
    while (!f)
    {
        cout << "\nFile doesn't exist.";
        return 0;
    }
    string n;
    string rank = "";
    while(!f.eof())
    {
        f >> n;
        if (n == name && toupper(gender) == 'M')
        {
            f.seekg(-(name.length()+2), ios::cur); //If they're on the same line, the rank should be 2 bytes behind the name for males and femals I think.
            f >> rank;
            break;
        }
        else if (n == name && toupper(gender) == 'F')
        {
            f.seekg(-(name.size()+2), ios::cur);
            f >> rank;
            break;
        }
    }
    if(rank == "")
        cout << "\nName not in top 1000 for year " << year;
    else
        cout << "\n\n" << name << " is ranked #" << rank << " in year " << year;

    //Ex_06_04
    Circle c1(2.5);
    Circle c2(5);
    cout << boolalpha << "\n\nCircle 1 is smaller than circle 2: " << (c1 < c2) << endl;
    
    //Ex_06_05
    double a1, b1, a2, b2;
    cout << "\n\nEnter a value for a: ";
    cin >> a1;
    cout << "\nEnter a value for b: ";
    cin >> b1;
    cout <<"\n\nEnter a value for a: ";
    cin >> a2;
    cout << "\nEnter a value for b: ";
    cin >> b2;
    Complex com1(a1, b1);
    Complex com2(a2, b2);
    cout << endl << endl << com1 + com2;
    cout << endl << com1 - com2;
    cout << endl << com1 * com2;
    cout << endl << com1 / com2;
    cout << endl << com1.abs() << endl;
}