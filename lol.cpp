#include <iostream>
#include <string>

using namespace std;

void area(int a, int b)
{
    int area;
    area = a * b;
    if (a == b)
        cout << "Square area: " << area;
    else
        cout << "Rectangle area: " << area;
}

void areap(int a, int h)
{
    int area;
    area = a * h;
    cout << "Parallelogram area: " << area;
}

void areat(int a, int c, int h)
{
    int area;
    area = ((a + c) * h) / 2;
    cout << "Trapezoid area: " << area;
}

void pers(int a)
{
    int per = 4 * a;
    cout << "Square perimeter: " << per;
}

void perr(int a, int b)
{
    int per = 2 * (a + b);
    cout << "Rectangle perimeter: " << per;
}

void perp(int a, int b)
{
    int per = 2 * (a + b);
    cout << "Parallelogram perimeter: " << per;
}

void pert(int a, int b, int c, int d)
{
    int per = a + b + c + d;
    cout << "Trapezoid perimeter: " << per;
}

int main()
{
    int a, b, h, c, d;
    string geomfig, mathaction;
    cout << "Enter geometric figure (square, rectangle, ...): ";
    cin >> geomfig;
    cout << "Enter geometric action (area, perimeter): ";
    cin >> mathaction;

    if (geomfig == "parallelogram" && mathaction == "area")
    {
        cout << "Enter data h: ";
        cin >> h;
    }
    else if (geomfig == "trapezoid")
    {
        if (mathaction == "area") {
        cout << "Enter data h: ";
        cin >> h;
        cout << "Enter data c: ";
        cin >> c;
        }

        if (mathaction == "perimeter")
        {
            cout << "Enter data d: ";
            cin >> d;
            cout << "Enter data c: ";
            cin >> c;
        }  
    }

    cout << "Enter data a: ";
    cin >> a;
    cout << "Enter data b: ";
    cin >> b;

    if (mathaction == "area")
    {
        if (geomfig == "square" || geomfig == "rectangle")
        {
            area(a, b);
        }
        else if (geomfig == "parallelogram")
        {
            areap(a, h);
        }
        else if (geomfig == "trapezoid")
        {
            areat(a, c, h);
        }


    }

    if (mathaction == "perimeter") 
    {
        if (geomfig == "square")
        {
            pers(a);
        }
        else if (geomfig == "rectangle")
        {
            perr(a, b);
        }
        else if (geomfig == "parallelogram")
        {
         perp(a, b);
        }
        else if (geomfig == "trapezoid")
        {
            cout << "Enter data d: ";
            cin >> d;
            pert(a, b, c, d);
        }
       
    }


    return 0;
}
