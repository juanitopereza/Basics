#ifndef VECTOR1_H
#define VECTOR1_H

class Vector
{
    public:
        Vector(const int & size_);
        Vector(const Vector &input);
        ~Vector();
        Vector& operator=(const Vector & v);
        double operator()(const int &i) const;
        double &operator()(const int &i);
        Vector &operator*=(const double & a);
        Vector &operator+=(const Vector & v);
        Vector &operator-=(const Vector & v);
        int getSize(void) const;
        friend std :: ostream & operator << (std::ostream & oss, const Vector & V);

    private:
        int size;
        double *values;
};



#endif
