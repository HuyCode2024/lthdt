#include <iostream>
using namespace std;
class Rectangle {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }
    double getArea() {
        return width * height;
    }
};
int main() {
    Rectangle myRectangle(5, 10);
    cout << "Area: " << myRectangle.getArea() << endl;
    Rectangle hinhcn2(3, 4);
    cout << "Dien tich:" << hinhcn2.getArea() << endl;
    return 0;
}
