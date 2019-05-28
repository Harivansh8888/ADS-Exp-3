#include <iostream>
using namespace std;
 
class Complex
{
    private:
        int real;
        int imag;    
 
    public:
        Complex(int r = 0, int i = 0): real(r), imag(i) {};
 
        void setComplex(void)
        {
            cout << "Enter the real and imaginary parts : ";
            cin >> this->real;
            cin >> this->imag;
        }  
        Complex add(const Complex& c)
        {
            Complex comp;
            comp.real = this->real + c.real;
            comp.imag = this->imag + c.imag;
            return comp;
        }
        Complex subtract(const Complex& c)
        {
            Complex comp;
            comp.real = this->real - c.real;
            comp.imag = this->imag - c.imag;
            return comp;
        }
        void printComplex(void)
        {
            cout << "Real      : " << this->real << endl
                 << "Imaginary : " << this->imag << endl;
        }
};
 
