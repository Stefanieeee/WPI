#ifndef MyQuaternion_h
#define MyQuaternion_h
#include<iostream>
#include<vector>
using namespace std;

class MyQuaternion
{
public:
  double e1;
  double e2;
  double e3;
  double e4;
  diuble f;
  //Konstructor
  MyQuaternion();
  MyQuaternion(double e1,double e2,double e3,double e4);
  //Kopierkonstruktur
  MyQuaternion(const MyQuaternion &Q);
  //MyQuaternion(Q double e1,Q double e2,Q double e3,Q double e4);
  //Addition: operator+(QB)
  MyQuaternion operator+(const MyQuaternion &Q);
  //Substraktion: operator-(QB)
  MyQuaternion operator-(const MyQuaternion &Q);
  //Konjugiert
  void MyQuaternion conj() const;
  //Produkt
  MyQuaternion operator*(const MyQuaternion &Q);
  //Skalar
  MyQuaternion operator*(const MyQuaternion &Q f);

};

//Addition: operator+(QB)
  MyQuaternion::operator+(const MyQuaternion &Q)
  {
       e1 += Q.e1;
       e2 += Q.e2;
       e3 += Q.e3;
       e4 += Q.e4;
  }

//Substraktion: operator-(QB)
  MyQuaternion::operator-(const MyQuaternion &Q)
  {
       e1 -= Q.e1;
       e2 -= Q.e2;
       e3 -= Q.e3;
       e4 -= Q.e4;
  }

//Konjugiert
  MyQuaternion::conj() const
  {
       e1 -= Q.e1;
       e2 -= Q.e2;
       e3 -= Q.e3;

  }

//Produkt
  MyQuaternion::operator*(const MyQuaternion &Q)
  {
      e1 = e1*Q.e4+e4*Q.e1-e2*Q.e3+e3*Q.e2;
      e2 = e2*Q.e4+e4*Q.e2-e3*Q.e1+e1*Q.e3;
      e3 = e3*Q.e4+e4*Q.e3-e1*Q.e2+e2*Q.e1;
      e4 = e4*Q.e4+e1*Q.e1-e2*Q.e2+e3*Q.e2;
  }

//Skalar
  MyQuaternion::operator*(const MyQuaternion &Q f)
  {
      return f*Q;
  }




#endif
