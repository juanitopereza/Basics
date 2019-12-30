#include <iostream>
#include <cmath>
#include "Vector1.h"

using namespace std;

//constructor
Vector::Vector(const int & size_): size(size_)
{
	values = new double [size];
}

//copy constructor
Vector::Vector(const Vector &input): size(input.size)
{
		values = new double [size];
		cout << "size: " << size << endl;
		for (int i=0; i < size; ++i)
		{
			cout << "val: " << input.values[i] << endl;
			values[i]=input.values[i];
		}

}

// destructor
Vector::~Vector()
{
	delete values;
}


Vector& Vector::operator=(const Vector & v)
{
  for (int i=0; i<min(size,v.size);++i)
    {
      values[i]= v.values[i];
    }

  return(*this);

}

double Vector::operator()(const int &i) const
{
	return values[i];
	}

double& Vector::operator()(const int &i)
{
	return values[i];
}

int Vector::getSize(void) const
{
	return size;
}

std :: ostream & operator << (std::ostream & oss, const Vector & V)
{
	oss << "[" << V.values[0];

  for (int i=1;i<(V.size-1);++i)
    {

      oss<<", "<<V.values[i];

    }

  oss<< ", " << V.values[V.size - 1] << "]" << endl;

  return oss;
}
