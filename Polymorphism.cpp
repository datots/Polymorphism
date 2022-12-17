#include <iostream>

using namespace std;

class Industry{
    public:
        string Car_Brand;
        string Car_Model;
        string Car_Country;
        
        Industry(string car_Brand,string car_Model,string car_Country){
            Car_Model = car_Model;
            Car_Brand = car_Brand;
            Car_Country = car_Country;
            
            cout<<"The model of the car: "<<Car_Model<<endl;
            cout<<"The brand of the car: "<<Car_Brand<<endl;
            cout<<"The manufacturer country of the car is: "<<Car_Country<<endl;
        }
};

class characteristics{
    public:
        void features(string body_type,string color,string steering_wheel,string engine,string drivetrain,string transmission,string fuel,string car_start,int price){
            cout<<"The bodytype of the car is: "<<body_type<<endl;
            cout<<"The color of the car is: "<<color<<endl;
            cout<<"The ruli of the car is: "<<steering_wheel<<endl;
            cout<<"The engine of the car is: "<<engine<<endl;
            cout<<"The drivetrain of the car is: "<<drivetrain<<endl;
            cout<<"The transmission of the car is: "<<transmission<<endl;
            cout<<"The fuel of the car is: "<<fuel<<endl;
            cout<<"The car can be started: "<<car_start<<endl;
            cout<<"The price of the car is: "<<price<<"$"<<endl;
        }
};

class Car_Move{
    public:
        virtual void move()=0;
};

class Country{
    public:
        void Sold_In(string name){
            cout<<"The car was sold in: "<<name<<endl;
        }
};


class Mercedes_benz:public Industry,public Car_Move,public Country,public characteristics{
    public:
        Mercedes_benz(string car_Brand,string car_Model,string car_Country):Industry(car_Brand,car_Model,car_Country){
            
        }
        void move(){
                cout << " " << Car_Brand << " can move" << endl;
            }
};



int main()
{   
    Mercedes_benz mercedes("Mercedes_benz","C 250","Germany");
    mercedes.features("Coupe","Black","Right","Hybrid engine","Rear Front","Tiptronic","Diesel","button",55000);
    mercedes.Sold_In("Russia");
    mercedes.move();

    return 0;
}