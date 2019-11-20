#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box {
    private:
        int l, b, h;
    public:
        Box(){
            l = 0;
            b = 0;
            h = 0;
        }
        Box(int _l, int _b, int _h){
            l = _l;
            b = _b;
            h = _h;
        }
        Box(const Box &B){
            set_l(B.l);
            set_b(B.b);
            set_h(B.h);
        }
        void set_l(int _l){
            l = _l;
        }
        void set_b(int _b){
            b = _b;
        }
        void set_h(int _h){
            h = _h;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
            return (long)(long)(l) * b * h;
        }
        bool operator<(const Box& box){
            if(l < box.l){
                return true;
            }
            else if(b < box.b && l == box.l){
                return true;
            }
            else if(h < box.h && b == box.b && l == box.l){
                return true;
            }
            else{
                return false;
            }
        }
};
ostream& operator<<(ostream& out, Box& B){
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}
