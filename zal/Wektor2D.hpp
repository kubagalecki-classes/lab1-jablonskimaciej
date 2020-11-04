class Wektor2D
{
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
    ~Wektor2D(){}

    public:
    void       setX(int a) { x = a; }
    void       setY(int b) { y = b; }
    int        getX() { return x; }
    int        getY() { return y; }

    private:
    double x;
    double y;
};

Wektor2D operator+(Wektor2D wek1, Wektor2D wek2)
{
    return Wektor2D(wek1.getX() + wek2.getX(), wek1.getY() + wek2.getY());
}

Wektor2D operator*(Wektor2D wek1, Wektor2D wek2)
{
    return Wektor2D(wek1.getX() * wek2.getX(), wek1.getY() * wek2.getY());
}
