#include <iostream>
#include <cmath>
#include "Vector1.h"
// test to check that your header have been modified to
// work in all circumstances
#include "Vector1.h"

using namespace std;

int main()
{

    int n,i;
    double a;

    cout << "Input size of vector X :"<<endl;
    cin >> n;

    Vector X(n);
    cout << "Test constructor with only size. Values of such vector is unpredictable." <<endl;
    cout << "With auto_eval compilation option and g++ in fact null value will be expected." <<endl;
    cout << " Constructor : " << X <<endl;

    cout <<"Test non const operator () by filling X"<<endl;
    cout <<"Input coefficients of X " <<endl;
    for (i = 0; i < n; ++i)
    {
        cin >> X(i);
    }
   cout << " Operator() : " << X <<endl;

    Vector Xcopy(X);
    cout << "Test copy constructor. Xcopy is the copy of X"<<endl;
    cout << " Copy : " << Xcopy <<endl;

    cout <<"Checking Xcopy is a real copy by modifying Xcopy. X should remain unchanged"<<endl;
    Xcopy(n-1)/=2.;

    cout << " XAfterChange : " << X <<endl;
    cout << " XcopyAfterChange : " << Xcopy <<endl;

  //   cout<<"Input values for a new vector Y, having the same size as X." <<endl;
  //   Vector Y(n);
  //   for (i = 0; i < n; ++i)
  //   {
  //       cin >> Y(i);
  //   }
  //
  //   cout << " Y : " << Y <<endl;
  //
  //   cout<<"Test getSize method for Y"<<endl;
  //   cout << " getSize : " << Y.getSize() <<endl;
  //
  //   cout<<"Test *= operator with Y*=a, input a " <<endl;
  //   cin >> a;
  //   Y *= a;
  //   cout << " Operator*= : " << Y <<endl;
  //
  //   cout<<"Test += operator with Y+=X"<<endl;
  //   Y += X;
  //   cout << " Operator+= : " << Y <<endl;
  //
  //   cout<<"Test -= operator with Y-=X"<<endl;
  //   Y -= X;
  //   cout << " Operator-= : " << Y <<endl;
  //
  //   cout<<"Test = operator with Y=X"<<endl;
  //   Y = X;
  //   cout << " Operator= : " << Y <<endl;
  //
  //   const Vector XX(X);
  //   cout<<"Test of const operator (), input index  i "<<endl;
  //   cin >> i;
  //   cout<<"Test const operator () by displaying  XX(" << i << ") (XX const)"<<endl;
  //   cout << " XXi : " << XX(i) <<endl;
  //
  //   Vector Z(n+50) ;
  //   int k = n+50 ;
  //   cout << "Input Z(" << k << ") "<<endl;
  //   cin >> a;
  //   for (i=n;i<k;++i) Z(i)=a/50.*(i-n)+1.2;
  //
	// cout<<"Test = operator with a first argument having a greater size"<<endl;
  //   Z = X;
  //   cout << " Z=X : " << Z <<endl;
  //
  //   cout<<"Test += operator with a fist argument having a greater size"<<endl;
  //   Z += Y;
  //   cout << " Z+=Y : " << Z <<endl;
  //
  //   cout<<"Test = operator with a first argument having a smaller size"<<endl;
  //   X = Z;
  //   cout << " X=Z : " << X <<endl;
  //
  //   cout<<"Test += operator with a first argument having a smaller size"<<endl;
  //   Y += Z;
  //   cout << " Y+=Z : " << Y <<endl;
  //
  //   cout<<"Test -= operator with first argument having a smaller size"<<endl;
  //   Y -= Z;
  //   cout << " Y-=Z : " << Y <<endl;
  //   cout<<"Test -= operator with fist argument having a greater size"<<endl;
  //   Z -= Y;
  //   cout << " Z-=Y : " << Z <<endl;
  //
    return 0;
}
