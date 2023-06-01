
// base class named shape and this base class has features such as length, breadth, height and there are sub classes namely square, rectangle, triangle and circle and parallelogram. Inherit base class in the subclass and find the area of each of the shape, use constructors. FInd the cost of fencing for all the shapes if cost of fencing is Rs. 50 per metre.
#include <iostream>
using namespace std;
class shape{
    public:
    double length;
    double breadth;
    double height;
    double radius;
};
class square:public shape{
    public:
    void set_data(double l){
        length=l;
    }
    void display(){
        cout<<"The length is "<<length<<endl;
    }
    void area(){
        cout<<"The area of the square is "<<length*length<<endl;
    }
    void perimeter(){
        cout<<"the perimeter is "<<4*length<<endl;
        cout<<"the cost of fencing is Rs "<<4*length*50<<endl;
    }
};
class rectangle:public shape{
    public:
    void set_data(double l,double b){
        length=l;
        breadth=b;
    }
    void display(){
        cout<<"The length is "<<length<<endl;
        cout<<"The breadth is "<<breadth<<endl;
    }
    void area(){
        cout<<"The area of the rectangle is "<<length*breadth<<endl;
    }
    void perimeter(){
        cout<<"the perimeter is "<<2*(length+breadth)<<endl;
        cout<<"the cost of fencing is Rs "<<2*(length+breadth)*50<<endl;
    }
};
class triangle:public shape{
    public:
    void set_data(double l,double b){
        length=l;
        breadth=b;
    }
    void display(){
        cout<<"The length is "<<length<<endl;
        cout<<"The breadth is "<<breadth<<endl;
    }
    void area(){
        cout<<"The area of the triangle is "<<0.5*length*breadth<<endl;
    }
    void perimeter(){
        cout<<"the perimeter is "<<3*breadth<<endl;
        cout<<"the cost of fencing is Rs "<<3*breadth*50<<endl;
    }
};
class circle:public shape{
    public:
    void set_data(double r){
        radius=r;
    }
    void display(){
        cout<<"The radius is "<<radius<<endl;
    }
    void area(){
        cout<<"The area of the circle is "<<3.14*radius*radius<<endl;
    }
    void perimeter(){
        cout<<"the perimeter is "<<2*3.14*radius<<endl;
        cout<<"the cost of fencing is Rs "<<2*3.14*radius*50<<endl;
    }
};
class parallelogram:public shape{
    public:
    void set_data(double l,double b,double h){
        length=l;
        breadth=b;
        height=h;
    }
    void display(){
        cout<<"The length is "<<length<<endl;
        cout<<"The breadth is "<<breadth<<endl;
        cout<<"The height is "<<height<<endl;
    }
    void area(){
        cout<<"The area of the parallelogram is "<<breadth*height<<endl;
    }
    void perimeter(){
        cout<<"the perimeter is "<<2*(length+breadth)<<endl;
        cout<<"the cost of fencing is Rs "<<2*(length+breadth)*50<<endl;
    }
};

int main() {
    int ch;
    double l,b,h,r;
    cout<<"enter the choice: ";
    cin>>ch;
    if (ch==1){
        square s;
        cout<<"enter the length: ";
        cin>>l;
        s.set_data(l);
        s.display();
        s.area();
        s.perimeter();
    }
    else if (ch==2){
        rectangle r;
        cout<<"enter the length and breadth: "<<endl;
        cin>>l;
        cin>>b;
        r.set_data(l,b);
        r.display();
        r.area();
        r.perimeter();
    }
    else if (ch==3){
        triangle t;
        cout<<"enter the length and breadth: "<<endl;
        cin>>l;
        cin>>b;
        t.set_data(l,b);
        t.display();
        t.area();
        t.perimeter();
    }
    else if (ch==4){
        circle c;
        cout<<"enter the radius: "<<endl;
        cin>>r;
        c.set_data(r);
        c.display();
        c.area();
        c.perimeter();
    }
    else if (ch==5){
        parallelogram p;
        cout<<"enter the slant length,breadth and height: "<<endl;
        cin>>l;
        cin>>b;
        cin>>h;
        p.set_data(l,b,h);
        p.display();
        p.area();
        p.perimeter();
    }
   
    return 0;
}
