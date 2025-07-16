#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    virtual void startEngine() = 0;
    virtual void shiftGear(int gear) = 0;
    virtual void accelerate() = 0;
    virtual void brake() = 0;
    virtual void stopEngine() = 0;
    virtual ~Car() {}
};

class SportsCar : public Car{
public:
    string brand;
    string model;
    bool isEngineActive;
    int currentSpeed;
    int currentGear;

    void startEngine(){
        isEngineActive = true;
        cout << brand << " " << model << " : Engine starts with a roar!" << endl;
    }

    // if engine is start, then only we can change the gear shift
    void shiftGear(int gear){
        if(!isEngineActive){
            cout << brand << " " << model << " : Engine is off! Cannot Shift Gear.!" << endl;
        }
        currentGear = gear;
        cout << brand << " " << model << " : Shifted to gear " << currentGear << endl;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
};

/**
 * chartacties(variable) & method(functino)
   car-brand
   car-model
   car-isEngineActiveOrNot
   car-currentSpeed
   car-currentGear
   - create constructor of this provide
   - create this method startEngine()
   - create for gearShift the car()
   - create for accelerate the car speed
   - create break the car()
   - create stopEgine car()
 *
 */