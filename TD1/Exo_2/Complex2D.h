#include <math.h>

class Complex2D{
    public:
        Complex2D();
        Complex2D(double reel, double imaginaire);
        Complex2D(double unique);
        Complex2D(const Complex2D& copy);
        void setA(double newa);
        void setB(double newb);
        double getA() const;
        double getB() const;
        Complex2D operator+(Complex2D &other);
        Complex2D operator-(Complex2D &other);
        Complex2D operator*(const Complex2D &other);
        Complex2D operator/(const Complex2D &other);
        bool operator>(Complex2D &other);
        bool operator<(Complex2D &other);
        Complex2D conjugue() const;
        double module() const;
    
    private:
        double a;
        double b;
};


