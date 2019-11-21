#include <iostream>
/*
Create two classes:

Rectangle
The Rectangle class should have two data fields-width and height of int types. The class should have display() method, to print the width and height of the rectangle separated by space.

RectangleArea
The RectangleArea class is derived from Rectangle class, i.e., it is the sub-class of Rectangle class. The class should have read_input() method, to read the values of width and height of the rectangle. The RectangleArea class should also overload the display() method to print the area (width x height) of the rectangle.
*/

/*
Sample Input

10 5
Sample Output

10 5
50
*/
using namespace std;
class Rectangle {
    private:
        int height, width;
    public:
        void set_height(int h){
            height = h;
        }
        int get_height(){
            return height;
        }
        void set_width(int w){
            width = w;
        }
        int get_width(){
            return width;
        }
        void display(){
            cout << height << " " << width << endl;
        }
};

class RectangleArea : public Rectangle {
    public:
        void read_input(){
            int h, w;
            cin >> h >> w;
            set_height(h);
            set_width(w);
        }
        void display(){
            cout << get_height() * get_width() << endl;
        }

};


int main()
{
    RectangleArea r_area;
    r_area.read_input();
    r_area.Rectangle::display();
    r_area.display();
    
    return 0;
}