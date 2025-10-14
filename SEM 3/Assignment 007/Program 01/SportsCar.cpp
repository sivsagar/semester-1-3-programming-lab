/*
Create a base class Vehicle with members mileage and price.
Derive Car from Vehicle with additional members fuelType and seatingCapacity.
Further derive SportsCar from Car that adds topSpeed and horsePower.
Input and display details of a SportsCar.
*/

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    double mileage;
    double price;
public:
    Vehicle(): mileage(0), price(0) {}
    Vehicle(double m, double p): mileage(m), price(p) {}
    void inputVehicle() {
        cout << "Enter mileage: ";
        cin >> mileage;
        cout << "Enter price: ";
        cin >> price;
    }
    void displayVehicle() const {
        cout << "Mileage: " << mileage << '\n';
        cout << "Price: " << price << '\n';
    }
};

class Car : public Vehicle {
protected:
    string fuelType;
    int seatingCapacity;
public:
    Car(): fuelType(""), seatingCapacity(0) {}
    Car(double m, double p, const string &fuel, int seats)
        : Vehicle(m, p), fuelType(fuel), seatingCapacity(seats) {}
    void inputCar() {
        // first input base vehicle details
        inputVehicle();
        cout << "Enter fuel type: ";
        // read remainder of line if needed
        cin >> ws;
        getline(cin, fuelType);
        cout << "Enter seating capacity: ";
        cin >> seatingCapacity;
    }
    void displayCar() const {
        displayVehicle();
        cout << "Fuel Type: " << fuelType << '\n';
        cout << "Seating Capacity: " << seatingCapacity << '\n';
    }
};

class SportsCar : public Car {
private:
    double topSpeed;
    int horsePower;
public:
    SportsCar(): topSpeed(0), horsePower(0) {}
    SportsCar(double m, double p, const string &fuel, int seats, double speed, int hp)
        : Car(m, p, fuel, seats), topSpeed(speed), horsePower(hp) {}
    void inputSportsCar() {
        inputCar();
        cout << "Enter top speed: ";
        cin >> topSpeed;
        cout << "Enter horse power: ";
        cin >> horsePower;
    }
    void displaySportsCar() const {
        cout << "--- SportsCar Details ---" << '\n';
        displayCar();
        cout << "Top Speed: " << topSpeed << '\n';
        cout << "Horse Power: " << horsePower << '\n';
    }
};

int main() {
    SportsCar sc;
    cout << "Input details for SportsCar:\n";
    sc.inputSportsCar();
    cout << '\n';
    sc.displaySportsCar();
    return 0;
}

/*
SAMPLE RUN (inputs provided in order):
60
500000
Petrol
2
320.5
450

Corresponding program output (prompts are printed while reading input):
Input details for SportsCar:
Enter mileage: Enter price: Enter fuel type: Enter seating capacity: Enter top speed: Enter horse power:
--- SportsCar Details ---
Mileage: 60
Price: 500000
Fuel Type: Petrol
Seating Capacity: 2
Top Speed: 320.5
Horse Power: 450
*/