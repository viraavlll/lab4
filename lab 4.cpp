#include <iostream>
#include <string>
using namespace std;

class Bicycle {
protected:
    string model;
    int wheelSize;
public:
    Bicycle(const string& model, int wheelSize) : model(model), wheelSize(wheelSize) {}
    void display1() {
        cout << "Модель велосипеда: " << model << endl;
        cout << "Дiаметр колеса: " << wheelSize << " сантиметрiв\n";
    }
};
class Ride : public Bicycle {
private:
    int number;
    string track;
    double time;
public:
    Ride(const string& model, int wheelSize, int number, const string& track, double time)
        : Bicycle(model, wheelSize), number(number), track(track), time(time) {}
    void displayRide() {
        cout << "Номер велосипеда: " << number << endl;
        cout << "Велотраса: " << track << endl;
        cout << "Час: " << time << " години\n";
     
    }
};
int main() {
    setlocale(LC_CTYPE, "ukr");
    Ride ride1("Велосипед Crossride", 35, 76946, "Синевирська поляна", 2.5);
    ride1.display1();
    ride1.displayRide();
    return 0;
}