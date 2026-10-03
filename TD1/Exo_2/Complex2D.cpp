#include "Complex2D.h"

Complex2D::Complex2D(){
    a=0;
    b=0;
}

Complex2D::Complex2D(double reel, double imaginaire){
    a=reel;
    b=imaginaire;
}

Complex2D::Complex2D(double unique){
    a=unique;
    b=unique;
}

Complex2D::Complex2D(const Complex2D& copy){
    a=copy.a;
    b=copy.b;
}

void Complex2D::setA(double newa){
    a=newa;
}

void Complex2D::setB(double newb){
    a=newb;
}

double Complex2D::getA() const{
    return a;
}

double Complex2D::getB() const{
    return b;
}

Complex2D Complex2D::operator+(Complex2D &other){
    Complex2D newcomplex(a+other.getA(),b+other.getB());
    return newcomplex;
}

Complex2D Complex2D::operator-(Complex2D &other){
    Complex2D newcomplex(a-other.getA(),b-other.getB());
    return newcomplex;
}

Complex2D Complex2D::operator*(const Complex2D &other){
    double otherA=other.getA();
    double otherB=other.getB();
    Complex2D newcomplex(a*otherA-b*otherB,a*otherB+b*otherA);
    return newcomplex;
}

Complex2D Complex2D::operator/(const Complex2D &other){
    Complex2D number = *this * (other.conjugue());
    double par = other.module()*other.module();
    double otherA = other.getA();
    double otherB = other.getB();

    return Complex2D((number.getA())/par,number.getB()/par);
}

Complex2D Complex2D::conjugue() const{
    return Complex2D(a, -b);
}

bool Complex2D::operator>(Complex2D &other){
    if (a>other.getA() & b>other.getB()){
        return true;
    }
    return false;
}

bool Complex2D::operator<(Complex2D &other){
    if (a<other.getA() & b<other.getB()){
        return true;
    }
    return false;
}

double Complex2D::module() const{
    return sqrt(a*a+b*b);
}