/* #include <iostream>
using namespace std;

class Volume
{
public:
    // Volume of cube
    double findVolume(double side)
    {
        return side * side * side;
    }

    // Volume of rectangle (cuboid)
    double findVolume(double length, double width, double height)
    {
        return length * width * height;
    }

    // Volume of cylinder
    double findVolume(double radius, double height)
    {
        return 3.1416 * radius * radius * height;
    }
};

int main()
{
    Volume v;

    cout << "Volume of Cube (side=3): " << v.findVolume(3.0) << endl;
    cout << "Volume of Rectangle (2x3x4): " << v.findVolume(2.0, 3.0, 4.0) << endl;
    cout << "Volume of Cylinder (r=2, h=5): " << v.findVolume(2.0, 5.0) << endl;

    return 0;
}
 */

#include <iostream>
using namespace std;

class volume
{
    public:
    //volume of cube
    double findVolume(double side)
    {
        return side * side * side;
    }

    double findVolume(double length, double width, double height)
    {
        return length*width*height;
    }

    double findVolume(double radius, double height)
    {
        return 3.1416*radius*radius*height;
    }
};

int main()
{
    volume v;
    cout<<"Volume of a cube (side=3): "<<v.findVolume(3)<<endl;
    cout<<"Volume of a rectangle (2x3x5): "<<v.findVolume(2,3,5)<<endl;
    cout<<"Volume of a cylinder (r=3,h=5): "<<v.findVolume(3,5)<<endl;
    return 0;
}