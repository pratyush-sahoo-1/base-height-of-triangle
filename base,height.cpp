#include <iostream>
using namespace std;
class triangle
{
    public:
    int i;
    float base;
    float height;
    void getData(float a,float b)
    {   
        base = a;
        height =b;
    }
    void areaTriangle()
    {
        float area = 0.5*base*height;
        cout<<"The area is:"<<area<<"\n";
    }
};

int main()
{
    
    triangle t[10];
    for(int i =0;i<10;i++)
    {
        float base,height;
        cout<<"Enter the base and height of the triangle";
        cout>>base>>height;
        t[i].getData(base,height);
        t[i].areaTriangle();
    }
    return 0;
}
