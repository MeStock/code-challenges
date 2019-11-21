#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Solve the problem Inheritance-Introduction before solving this problem.

In the previous problem we learned about Inheritance and how can a derived class object use the member functions of the base class.

In this we will see what multi-level inheritance is. Suppose we have a class A which is the base class and we have a class B which is derived from class A and we have a class C which is derived from class B, we can access the functions of both class A and class B by creating an object for class C. This is called Multi-Level inheritance. (B inherits A and C inherits B.)

Now create a class called Equilateral which inherits from Isosceles and should have a function such that the output is as given below.

Sample Output

I am an equilateral triangle
I am an isosceles triangle
I am a triangle
*/
class Triangle{
	public:
		void triangle(){
			cout<<"I am a triangle\n";
		}
};

class Isosceles : public Triangle{
  	public:
  		void isosceles(){
    		cout<<"I am an isosceles triangle\n";
  		}
};

class Equilateral : public Isosceles {
    public:
        void equilateral(){
            cout << "I am an equilateral triangle" << endl;;
        }
};

int main(){
  
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}