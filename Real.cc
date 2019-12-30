#include <iostream>
#include <cmath>
#include <iomanip>
#include "Real.h"

using namespace std;

// class operator
Real::Real(double m_, int e_): m(m_), e(e_)
{

 	for (int i=0; (m <= -1.0 || m >= 1.0) ; i++)
	{
		m = m /10;
		e++;
	}
	for (int j=0; ((-0.1 < m && m < 0.1) && m!=0.0); j++)
	{
		m = m * 10;
		e--;
	}
}

// display function

void Real::display() const
{
	cout << setprecision(15) << m << "E" << e << endl;
}


// fix the number so m is always between [-1,-0.1)U{0}U(0.1,1]

//void norm(double m_, int e_);

//arithmetic operators member functions

// Real Real::operator+(const Real& r) const
// {
// 	double nuevam = 0.0;
// 	if (e == r.e)
// 	{
// 		return Real(m + r.m, e);
// 	}
// 	else if ((e-r.e)> 15 ||(r.e+e)< -15)
//     {
//       	nuevam = m;
//       	return Real (nuevam, e + r.e);
//     }
//   	else if ((r.e-e)> 15||(e + r.e)< -15)
//     {
//       	nuevam= r.m;
// 		return Real (nuevam, e + r.e);
//     }
//   	else if ((-15 < (e-r.e) || (e-r.e) < 15 ) && r.e>e)
// 	{
// 		double dife=abs(e-r.e);
// 		nuevam=r.m +(m/pow(10,dife));
// 		return Real (nuevam, r.e);
//     }
//   		else if ((-15<(r.e-e) || (r.e-e) <15 ) && e>r.e)
// 	{
// 		double dife=abs(e-r.e);
// 		nuevam=m +(r.m/pow(10,dife));
// 		return Real (nuevam, e);
// 	}
//
// }

Real Real::operator+(const Real& r) const
{
	double nuevam = 0.0;
	if (e == r.e)
	{
		return Real(m + r.m, e);
	}
	else if(abs(r.e - e) > 15 && r.e>e){
		return Real(r.m,r.e);
	}
	else if(abs(r.e - e) > 15 && r.e<e){
		return Real(m,e);
	}
	else if (r.e > e) {
		double dife=abs(e-r.e);
		nuevam = r.m + (m/pow(10,dife));
		return Real (nuevam, r.e);
	}
	else if (r.e < e) {
		double dife=abs(e-r.e);
		nuevam = m + (r.m/pow(10,dife));
		return Real (nuevam, e);
	}

}



Real Real::operator-(const Real& r) const
{
	double nuevam = 0.0;
	if (e == r.e)
	{
		return Real(m - r.m, e);
	}
	else if(abs(r.e - e) > 15 && r.e>e){
		return Real(r.m,r.e);
	}
	else if(abs(r.e - e) > 15 && r.e<e){
		return Real(m,e);
	}
	else if (r.e > e) {
		double dife=abs(e-r.e);
		nuevam = r.m - (m/pow(10,dife));
		return Real (-nuevam, r.e);
	}
	else if (r.e < e) {
		double dife=abs(e-r.e);
		nuevam = m - (r.m/pow(10,dife));
		return Real (nuevam, e);
	}
}

Real Real::operator*(const Real& r) const
{
	return Real (m * r.m, e + r.e);
}

Real Real::operator/(const Real& r) const
{
	return Real (m/ r.m, e - r.e);
}


// member function for define a new function pow for not using the function pow from the cmath library

Real Real::power(int n)
{
	if (n == 0) {return Real(1.0,0);}
	cout << "m: "<< m << " "<< "e: " << e << '\n';
	Real mult(m,e);
	int i = 1;
		do
		{
		mult = *this * mult;
		i++;
		}
		while (i < n && n>1);

	return mult;
}
