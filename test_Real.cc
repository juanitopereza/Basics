#include <iostream>
#include "Real.h"
using namespace std;

int main()
{
	int e ;
	double m ;
    // 2 instances of the class Real : test constructor
    cout << "Input first Real r1 (m,e) : " << endl ;
    cin >> m >> e ;
    Real r1(m,e);

    cout << "Input second Real r2 (m,e) : " << endl ;
    cin >> m >> e ;
    Real r2(m,e);

    cout << "Test constructor with default argument =>  r3 (m,0)"<< endl ;
    Real r3(m);

    cout << "Test constructor with default argument =>  r4 (0,0)"<< endl ;
    Real r4;

    // test diplay method
    cout<<"r1 : ";
    r1.display();
    cout<<"r2 : ";
    r2.display();
    cout<<"r3 : ";
    r3.display();
    cout<<"r4 : ";
    r4.display();

    // test + operator method
    Real radd=r1+r2;
    cout<<"r1+r2 : ";
    radd.display();

    // test - operator method
    Real rneg=r1-r2;
    cout<<"r1-r2 : ";
    rneg.display();

    // test * operator method
    Real rprod=r1*r2;
    cout<<"r1*r2 : ";
    rprod.display();

    // test / operator method
    Real rdiv=r1/r2;
    cout<<"r1/r2 : ";
    rdiv.display();

    // test power(n) method
    int n1 ;
    cout << "Input n1 : " << endl ;
    cin >> n1 ;
    Real r1pow = r1.power(n1) ;
    cout<<"r1^n1 : " ;
    r1pow.display() ;

    // test on a more complicated case
    int n2 ;
    cout << "Input n2 : " << endl ;
    cin >> n2 ;
    Real r5 = (r1pow)/(r2.power(n2));
    cout<<"(r1^n1)/(r2^n2) : " ;
    r5.display() ;

    return 0;
}
