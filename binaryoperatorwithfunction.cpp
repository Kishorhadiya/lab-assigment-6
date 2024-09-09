#include <iostream>
using namespace std;
class person2;
class person
{
public:
    int x;
    int y;
    void getdata(int a, int b)
    {
        this->x = a;
        this->y = b;
    }
    friend person operator*(person &p1, person2 &p2);
};
class person2
{
public:
    int x;
    int y;
    void getdata(int x1, int y1)
    {
        this->x = x1;
        this->y = y1;
    }
    friend person2 operator+(person &p1, person2 &p2)
    {
        person2 p3;
        p3.x = p1.x * p2.x;
        p3.y = p1.y * p2.y;
        return p3;
    }
    void display();
};
void person2::display()
{
    cout << x << endl;
    cout << y << endl;
}
int main()
{
    system("cls");
    person p;
    p.getdata(9, 5);
    person2 p1;
    p1.getdata(8, 5);
    person2 p4 = p + p1;
    p4.display();
    return 0;
}