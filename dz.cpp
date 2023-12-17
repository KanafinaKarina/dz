#include <iostream>
#include <string>

class Company {
public:
    std::string companyName;
    int howLong;
    bool IT_Company;
    int numberOfOffices;


    Company() : companyName("Default company"), howLong(1), IT_Company(true), numberOfOffices(0) {}

    Company(std::string name, int year, bool IT, int number) : companyName(name), howLong(year), IT_Company(IT), numberOfOffices(number) {}

    void printCompanyInfo() {
        std::cout << "Company: " << companyName << ", How long has the company been in business?: " << howLong << ", Is the company IT?: " << (IT_Company ? "Yes" : "No") << ", Number of offices: " << numberOfOffices << std::endl;
    }
};

class Employee {
public:
    std::string employeeName;
    int numberOfFlats;
    bool isMarried;
    int experience;

    Employee() : employeeName("Default Employee"), numberOfFlats(2), isMarried(false), experience(0) {}

    Employee(std::string name, int number, bool married, int years) : employeeName(name), numberOfFlats(number), isMarried(married), experience(years) {}

    void printEmplyeeInfo() {
        std::cout << "Employee Name: " << employeeName << ", Number of flats: " << numberOfFlats << ", Married: " << (isMarried ? "Yes" : "No") << ", Experience: " << experience << std::endl;
    }
};

class Vehicle {
public:
    std::string vehicleType;
    int yearOfManufacture;
    bool isOftenUsed;

    Vehicle() : vehicleType("Default Vehicle"), yearOfManufacture(0), isOftenUsed(false) {}
    Vehicle(std::string type, int year, bool often) : vehicleType(type), yearOfManufacture(year), isOftenUsed(often) {}

    void printVehicleInfo() {
        std::cout << "Vehicle Type: " << vehicleType << ", Year of Manufacture: " << yearOfManufacture << ", Is oten used?: " << (isOftenUsed ? "Yes" : "No") << std::endl;
    }
};

class Truck : public Vehicle {
public:
    bool isModern;
    int length;

    Truck() : isModern(false), length(0) {}

    Truck(std::string type, int year, bool often, bool modern, int metrs) : Vehicle(type, year, often), isModern(modern), length(metrs) {}

    // Truck(bool drive, int capacity, Vehicle& vehicle) : isFourWheelDrive(drive), loadCapacity(capacity), Vehicle(vehicle) {}

    void printTruckInfo() {
        std::cout << "Is modern?: " << (isModern ? "Yes" : "No") << ", Length: " << length << std::endl;
    }
};


class Car : public Vehicle {
public:
    std::string fuelType;
    int numberOfTrips;

    Car() : fuelType("disel"), numberOfTrips(0) {}

    Car(std::string type, int year, bool often, std::string fuel, int number) : Vehicle(type, year, often), fuelType(type), numberOfTrips(number) {}

    void printCarInfo() {
        std::cout << "Fuel type: " << fuelType << "Number of seats: " << numberOfTrips << std::endl;
    }
};

int main() {
    Company myCompany("Freddy", 17, true, 21);
    myCompany.printCompanyInfo();

    Employee employee("Daria", 2, true, 5);
    employee.printEmplyeeInfo();

    Truck myTruck("ZIL", 2001, true, false, 8);
    myTruck.printVehicleInfo();
    myTruck.printTruckInfo();

    Car myCar("Gelik", 2020, true, "Disel", 52);
    myCar.printVehicleInfo();
    myCar.printCarInfo();

    return 0;
}
