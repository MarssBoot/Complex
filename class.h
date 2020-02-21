#pragma once
#include <iostream>

using namespace std;

class Complex {
public:
  Complex();
  Complex(double _re, double _im);
  Complex(const Complex& c);
  Complex(double d);
  ~Complex();
  Complex operator +(const Complex& c);
  Complex Add(const Complex& c);
  void output();
  Complex& operator = (const Complex& c);
  bool operator==(const Complex& c);
  Complex operator-(const Complex& c);
  Complex operator*(const Complex& c);
  Complex operator/(const Complex& c);
private:
  double re;
  double im;

};
