#include <iostream>

class Vector{
public:
    double x;
    double y;
    Vector()
    {
        this->x =0;
        this->y =0;

    }
    Vector(double x,double y){
        this->x=x;
        this->y=y;
    }
    //++++

Vector operator +(const Vector & v){
    return Vector(this->x + v.x,this->y+v.y);
    }

Vector & operator+=(const Vector &v){
        this->x+=v.x;
        this->y+=v.y;
        return *this;
    }
    //----
    Vector operator -(const Vector & v){
        return Vector(this->x - v.x,this->y - v.y);
    }

    Vector & operator-=(const Vector &v){
        this->x-=v.x;
        this->y-=v.y;
        return *this;
    }
    // *
    Vector & operator * (const double &d){
        Vector ret;
        ret.x= this->x * d;
        ret.y=this->y * d;
        return ret;
    }

    Vector & operator *= (const double &d){
        this->x *=d;
        this->y *=d;
        return *this;
    }
    // negacja wektora
    Vector &operator ! (){
        this->x=x * (-1);
        this->y=y *(-1);
    }





    void to_string(){
        std::cout<<"x="<<x<<"\n"<<"y="<<y<<std::endl;
    }

};







int main() {

    Vector a (1.0,2.0);
    Vector b (1.0,1.0);
    Vector c;
    c=a-b;
    Vector d;


    std::cout<<c.x;

    return 0;
}
