#include<iostream>
using namespace std;
class Complex{
float real,imag;
public:
  Complex(){//default constructor
    real=0;
    imag=0;
  }
  Complex(float r,float i){//parameterized constructor
    real=r;
    imag=i;
  }
  Complex( Complex &c2){//copy constructor
    cout<<"copy constructor is called:"<<endl;
  real=c2.real;
  imag=c2.imag;
  }
  ~Complex(){
    cout<<"Inside Destructor"<<endl;
  }

  void displaycomplex(){
    cout<<"The complex form of the number is: "<<real<<"+"<<imag<<"i"<<endl;
  }
};
int main(){
Complex c1,c2(2,8),c3(c2);
c1.displaycomplex();
c2.displaycomplex();

c3.displaycomplex();

}

