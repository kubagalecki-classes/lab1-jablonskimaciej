class Wektor2D
{
public:
    Wektor2D()
    {
        x = 0;
        y = 0;
    }
    Wektor2D(double a, double b)
    {
        x = a;
        y = b;
    }
    ~Wektor2D() {}

    void   setX(double a) { x = a; }
    void   setY(double b) { y = b; }
    double getX() { return x; }
    double getY() { return y; }

private:
    double x;
    double y;
};

Wektor2D operator+(Wektor2D wek1, Wektor2D wek2)
{
    return Wektor2D(wek1.getX() + wek2.getX(), wek1.getY() + wek2.getY());
}

double operator*(Wektor2D wek1, Wektor2D wek2)
{
    return wek1.getX() * wek2.getX() + wek1.getY() * wek2.getY();
}
