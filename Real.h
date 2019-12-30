#ifndef REAL_H
#define REAL_H

class Real
{
public:
	Real (double m_=0.0, int e_=0);
	void display(void) const;
	Real operator+(const Real& r) const;
	Real operator-(const Real& r) const;
	Real operator*(const Real& r) const;
	Real operator/(const Real& r) const;
	Real power(int n);

private:
	double m;
	int e;
};

#endif
