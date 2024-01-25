#include "header.hpp"

int main() 
{
    int choice,r,t,i=0;
    Vehicle* V[20]; //array untuk menyimpan objek objek turunan Vehicle
    std::cout << "---Vehicle Management Program---\n";
    while (1) {
        std::cout << "\n\nMenu" << "\n1. Insert new Vehicle" << "\n2. Select Vehicle" << "\n3. Exit"<< "\nEnter your choice : ";
        std::cin >> choice;
        switch(choice){
            case 1:
                std::cout<<"\n\nMenu" << "\n1. Land Vehicle" << "\n2. Air Vehicle" << "\n3. Water Vehicle(boat)"<< "\nEnter your choice : ";
                std::cin >> choice;
                switch(choice){
                    case 1:
                        std::cout<<"\n\nMenu" << "\n1. Bike" << "\n2. Car" << "\n3. Truck"<< "\nEnter your choice : ";
                        std::cin >> choice;
                        switch(choice){
                            case 1: V[i] = new bike;
                                V[i]->feeddata();
                                V[i]->feeddataBike();
                                i++;
                                std::cout<< "\nVehicle Number "<< i<< " inserted";
                                break;
                            case 2: V[i] = new car;
                                V[i]->feeddata();
                                V[i]->feeddataCar();
                                i++;
                                std::cout<< "\nVehicle Number "<< i<< " inserted";
                                break;
                            case 3: V[i] = new truck;
                                V[i]->feeddata();
                                V[i]->feeddataTruck();
                                i++;
                                std::cout<< "\nVehicle Number "<< i<< " inserted";
                                break;
                        }
                        break;
                    case 2:
                        std::cout<<"\n\nMenu" << "\n1. Helicopter" << "\n2. Airplane"<< "\nEnter your choice : ";
                        std::cin >> choice;
                        switch(choice){
                            case 1: V[i] = new helicopter;
                                V[i]->feeddata();
                                V[i]->feeddataHelicopter();
                                i++;
                                std::cout<< "\nVehicle Number "<< i<< " inserted";
                                break;
                            case 2: V[i] = new airplane;
                                V[i]->feeddata();
                                V[i]->feeddataAirplane();
                                i++;
                                std::cout<< "\nVehicle Number "<< i<< " inserted";
                                break;
                        }
                        break;
                    case 3: V[i] = new Boat;
                        V[i]->feeddata();
                        V[i]->feeddataBoat();
                        i++;
                        std::cout<< "\nVehicle Number "<< i<< " inserted";
                        break;
                }
                break;
            case 2:
                std::cout<<"\n\nMenu" << "\n1. Land Vehicle" << "\n2. Air Vehicle" << "\n3. Water Vehicle(boat)"<< "\nEnter your choice : ";
                std::cin >> choice;
                switch(choice){
                    case 1:
                        std::cout<<"\n\nMenu" << "\n1. Bike" << "\n2. Car" << "\n3. Truck"<< "\nEnter your choice : ";
                        std::cin >> choice;
                        switch(choice){
                            case 1:
                                std::cout<< "\nEnter Vehicle Number: "; std::cin>>r;
                                std::cout<< "\n\nMenu" << "\n1. Show data" << "\n2. Refuel" << "\n3. Turn On/Off Vehicle" << "\nEnter your choice : "; std::cin>>t;
                                switch(t){
                                    case 1:
                                        V[r-1]->showdata();
                                        V[r-1]->showdataBike();
                                        break;
                                    case 2:
                                        V[r-1]->ReFuel();
                                        break;   
                                    case 3:
                                        V[r-1]->TurnEngine();
                                        break;                              
                                }
                                break;
                            case 2:
                                std::cout<< "\nEnter Vehicle Number: "; std::cin>>r;
                                std::cout<< "\n\nMenu" << "\n1. Show data" << "\n2. Refuel" << "\n3. Turn On/Off Vehicle" << "\nEnter your choice : "; std::cin>>t;
                                switch(t){
                                    case 1:
                                        V[r-1]->showdata();
                                        V[r-1]->showdataCar();
                                        break;
                                    case 2:
                                        V[r-1]->ReFuel();
                                        break;   
                                    case 3:
                                        V[r-1]->TurnEngine();
                                        break;                              
                                }
                                break;
                            case 3:
                                std::cout<< "\nEnter Vehicle Number: "; std::cin>>r;
                                std::cout<< "\n\nMenu" << "\n1. Show data" << "\n2. Refuel" << "\n3. Turn On/Off Vehicle" << "\nEnter your choice : "; std::cin>>t;
                                switch(t){
                                    case 1:
                                        V[r-1]->showdata();
                                        V[r-1]->showdataTruck();
                                        break;
                                    case 2:
                                        V[r-1]->ReFuel();
                                        break;   
                                    case 3:
                                        V[r-1]->TurnEngine();
                                        break;                              
                                }
                                break;
                        }
                        break;
                    case 2:
                        std::cout<<"\n\nMenu" << "\n1. Helicopter" << "\n2. Airplane"<< "\nEnter your choice : ";
                        std::cin >> choice;
                        switch(choice){
                            case 1:
                                std::cout<< "\nEnter Vehicle Number: "; std::cin>>r;
                                std::cout<< "\n\nMenu" << "\n1. Show data" << "\n2. Refuel" << "\n3. Turn On/Off Vehicle" << "\nEnter your choice : "; std::cin>>t;
                                switch(t){
                                    case 1:
                                        V[r-1]->showdata();
                                        V[r-1]->showdataHelicopter();
                                        break;
                                    case 2:
                                        V[r-1]->ReFuel();
                                        break;   
                                    case 3:
                                        V[r-1]->TurnEngine();
                                        break;                              
                                }
                            case 2:
                                std::cout<< "\nEnter Vehicle Number: "; std::cin>>r;
                                std::cout<< "\n\nMenu" << "\n1. Show data" << "\n2. Refuel" << "\n3. Turn On/Off Vehicle" << "\nEnter your choice : "; std::cin>>t;
                                switch(t){
                                    case 1:
                                        V[r-1]->showdata();
                                        V[r-1]->showdataAirplane();
                                        break;
                                    case 2:
                                        V[r-1]->ReFuel();
                                        break;   
                                    case 3:
                                        V[r-1]->TurnEngine();
                                        break;                              
                                }
                        }
                        break;
                    case 3:
                        std::cout<< "\nEnter Vehicle Number: "; std::cin>>r;
                        std::cout<< "\n\nMenu" << "\n1. Show data" << "\n2. Refuel" << "\n3. Turn On/Off Vehicle" << "\nEnter your choice : "; std::cin>>t;
                        switch(t){
                            case 1:
                                V[r-1]->showdata();
                                V[r-1]->showdataBoat();
                                break;
                            case 2:
                                V[r-1]->ReFuel();
                                break;
                            case 3:
                                V[r-1]->TurnEngine();
                                break;
                        }
                }
                break;
            case 3: exit(0); //keluar program
        }
    }

    return 0;
}

