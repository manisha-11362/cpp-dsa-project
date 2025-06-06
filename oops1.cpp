#include <iostream>
using namespace std;
class Box {
    private:
           double length;
           double width;
           double height;

public:
     void setDimension(double l, double w, double h){
    length = l;
    width = w;
    height = h;

}

double getVolume(){
    return length * width * height;
}
};
int main(){
    Box box1, box2;
    box1.setDimension(10.0,5.0,3.0);
    box2.setDimension(7.0,4.0,2.0);
    cout << "Volume of box1 (using instances vars):" << box1.getVolume() << endl;
    cout<< "Volume of box2(using instances vars):" <<box2.getVolume()<< endl;
    box1.setDimension(6.0,4.0,2.0);
    box2.setDimension(5.0,5.0,5.0);
    cout << "volume of box1 (using methods):" << box1.getVolume() << endl;
    cout << " volume of box2 (using methods):" << box2.getVolume() << endl;
    return 0;
}