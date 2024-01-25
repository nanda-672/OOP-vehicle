#include <iostream>
#include <string>

// deklarasi class base
class Vehicle{
public:
    // deklarasi variabel=
    double *Fuel, *Weight, *MaxSpeed;
    char *Brand, *Name, *Plate;
    int *Passenger, *Engine;

    // inisiasi variabel yang akan digunakan
	Vehicle()	{
	Brand= new char[20];
	Name=new char[20];
    Plate= new char[20];
	Fuel= new double;
    Weight= new double;
    MaxSpeed= new double;
	Passenger=new int;
    Engine= new int;
	}

    void TurnEngine(){
        if(*Engine == 0){
            *Engine = 1;
            std::cout<< "\nEngine Turned On";
        }
        else{
            *Engine = 0;
            std::cout<< "\nEngine Turned Off";
        }
    }
    //fungsi untuk isi ulang fuel
    void ReFuel(){
        *Fuel = 100;
        std::cout<<"\nfuel at 100%";
    }

    // virtual function
    virtual void feeddata()	{
        std::cin.ignore();
        *Engine = 0;
	    std::cout<<"\nEnter Brand: ";                                  std::cin.getline(Brand,20);
	    std::cout<<"Enter Name: ";                                     std::cin.getline(Name,20);
	    std::cout<<"Enter Max Speed: ";                                std::cin>>*MaxSpeed;
	    std::cout<<"Enter Weight: ";                                   std::cin>>*Weight;   
        std::cout<<"Enter Current Fuel Load percentage(%): ";          std::cin>>*Weight; 
    }
    
    virtual void feeddataBike(){}
    virtual void feeddataCar(){}
    virtual void feeddataTruck(){}
    virtual void feeddataHelicopter(){}
    virtual void feeddataAirplane(){}
    virtual void feeddataBoat(){}

    virtual void showdata()	{
	    std::cout<<"\nBrand: "<<Brand;
	    std::cout<<"\nName: "<<Name;
	    std::cout<<"\nMax Speed: "<<*MaxSpeed;
	    std::cout<<"\nWeight: "<<*Weight;
	    std::cout<<"\nFuel load percentage: "<<*Fuel;
        std::cout<<"\nEngine Status (0 = off & 1 = on) : " << *Engine;
	}
    virtual void showdataBike(){}
    virtual void showdataCar(){}
    virtual void showdataTruck(){}
    virtual void showdataHelicopter(){}
    virtual void showdataAirplane(){}
    virtual void showdataBoat(){}


};

// child class hasil klasifikasi tempat penggunaan
class LandVehicle : public Vehicle{
public:
    int *Wheels; 
    double *Payload;
    LandVehicle(){
        Wheels = new int;
        Payload = new double;
    }

};

class Boat : public Vehicle{
public:
    double *LOA, *BLMD;
    Boat(){
        LOA = new double;
        BLMD = new double;
    }
    void feeddataBoat(){
	    std::cin.ignore();
	    std::cout<<"Enter Maximum Passenger count: ";                             std::cin>>*Passenger;
        std::cout<<"Enter Length Over All (m): ";                               std::cin>>*LOA;
        std::cout<<"Enter Breadth Moulded (m): ";                               std::cin>>*BLMD;
    }
    void showdataBoat(){
        std::cout<< "\nMaximum number of passenger: "<< *Passenger;
        std::cout<<"\nLength Over All (m): "<<*LOA;
        std::cout<<"\nBreadth Moulded (m): "<<*BLMD;
    }
};

class AirVehicle : public Vehicle{
public:
    double *WingSpan;
    AirVehicle(){
        WingSpan = new double;
    }
};

// child class dari kendaraan udara
class helicopter : public AirVehicle{
public:
    void feeddataHelicopter(){
	    std::cin.ignore();
	    std::cout<<"Enter Maximum Passenger count: ";                             std::cin>>*Passenger;
    }
    void showdataHelicopter(){
        std::cout<< "\nMaximum number of passenger: "<< *Passenger;
    }
};
class airplane : public AirVehicle{
public:
    void feeddataAirplane(){
	    std::cin.ignore();
	    std::cout<<"Enter Maximum Passenger count: ";                             std::cin>>*Passenger;
        std::cout<<"Enter Wingspan: ";                                            std::cin>>*WingSpan;
    }
    void showdataAirplane(){
        std::cout<< "\nMaximum number of passenger: "<< *Passenger;
        std::cout<< "\nWingspan: "<< *WingSpan;
    }
};

// child class dari kendaraan darat
class bike : public LandVehicle{
public:
    void feeddataBike()	{
	    std::cin.ignore();
        *Wheels = 2;
	    std::cout<<"Enter Bike License Plate: ";                             std::cin.getline(Plate,20);
    }
    void showdataBike(){
        std::cout<< "\nNumber of Wheels: "<< *Wheels;
    }

};
class car : public LandVehicle{
public:
    void feeddataCar()	{
	    std::cin.ignore();
        *Wheels = 4;
        std::cout<<"Enter Maximum Passenger: ";                             std::cin>>*Passenger;
    }
    void showdataCar()	{
        std::cout<<"\nMaximum passenger: "<<*Passenger;
	}

};
class truck : public LandVehicle{
public:
    void feeddataTruck(){
	    std::cin.ignore();
        std::cout<<"Enter Maximum Payload (kg): ";                           std::cin>>*Payload; 
        std::cout<<"Enter Number of Wheels: ";                               std::cin>>*Wheels;
    }
    void showdataTruck(){
        std::cout<<"\nMaximum Payload(kg): "<<*Payload;
        std::cout<<"\nNumber of Wheels: "<<*Wheels;
    }

};
