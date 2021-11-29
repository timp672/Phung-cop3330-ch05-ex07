/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tim Phung
 */
#include "std_lib_facilities.h"

using namespace std;

void getRoots(double a, double b, double c)
{
    double root1,root2,discriminant, real, imaginary;

    discriminant = b * b - 4 * a * c;

    //real and different roots
    if (discriminant > 0){
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are " << root1 << " and " << root2 << endl;
    }
    //real and equal roots
    else if (discriminant == 0){
        root1 = root2 = -b / (2 * a);
        cout << "Both roots are " << root1 << endl;
    }
    //roots are not real
    else{
        real = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        cout << "The roots are " << real << "+" << imaginary << "i and "  << real << "-" << imaginary << "i" << endl;
    }

}

int main()
{
    cout << "Enter values for a, b, and c for the quadratic equation: ";
    double a,b,c;
    cin >> a >> b >> c;

    getRoots(a,b,c);

    return 0;
}

