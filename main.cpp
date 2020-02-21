#include"class.h"
int main() {
  Complex c1, c2(2.0, 3.0), c3(2.0, -3.0), c4, c5(5.9), c6, c7, c8, c9, c10;

  c6 = c2 + c3;
  c4 = c2;
  c7 = c2 * c3;
  c8 = c2 / c3;
  c9 = c2 - c3;


  c1.output();
  c2.output();
  c3.output();
  c4.output();
  c5.output();
  c6.output();
  c7.output();
  c8.output();
  c9.output();
  if (c2 == c2)
  {
    cout << "Sasat" << endl;
  }
  else
  {
    cout << "leshat" << endl;
  }



  Complex* pc1 = new Complex(c1);
  delete pc1;

  getchar();
  getchar();
  return 0;
}