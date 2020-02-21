#include"class.h"
Complex::Complex() {
  re = 0.0;
  im = 0.0;
}
Complex::~Complex() {
  re = 0.0;
  im = 0.0;
}
bool Complex::operator==(const Complex& c) {
  bool res = 0;
  if (re == c.re)
  {
    if (im == c.im) { res = 1; }
  }
  return res;
}
Complex Complex::operator-(const Complex& c) {
  Complex res;
  res.re = re - c.re;
  res.im = im - c.im;
  return res;
}
Complex Complex::operator*(const Complex& c) {
  Complex res;
  res.re = ((re * c.re) - (im * c.im));
  res.im = ((re * c.im) + (c.re * im));
  return res;
}
Complex Complex::operator/(const Complex& c) {
  Complex res;
  res.re = ((re * c.re) + (im * c.im)) / ((c.re * c.re) + (c.im * c.im));
  res.im = ((c.re * im) - (re * c.im)) / ((c.re * c.re) + (c.im * c.im));
  return res;
}

Complex::Complex(double _re, double _im) : re(_re), im(_im) {}

Complex& Complex::operator=(const Complex& c) {
  (*this).re = c.re;
  im = c.im;
  return *this;
}

Complex Complex::operator+(const Complex& c) {
  Complex res;
  res.re = re + c.re;
  res.im = im + c.im;
  return res;
}



Complex::Complex(double d) {
  re = d;
  im = 0.0;
}

Complex Complex::Add(const Complex& c) {
  Complex res;
  res.re = re + c.re;
  res.im = im + c.im;
  return res;
}

Complex::Complex(const Complex& c) {
  re = c.re;
  im = c.im;
}

void Complex::output() {
  cout << re;
  if (im < 0) cout << "-" << -im << "i";
  else
    if (im > 0)
      cout << "+" << im << "i";
  cout << endl;
}