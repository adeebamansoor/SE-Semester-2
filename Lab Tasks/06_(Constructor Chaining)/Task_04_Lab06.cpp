#include <iostream>
using namespace std;

class Device {
public:
    string deviceName;
    int deviceID;
    int *data;

    Device(string n, int id) {
        deviceName = n;
        deviceID = id;

        data = new int(100);  // dynamic memory
        cout << "Device created" << endl;
    }

    ~Device() {
        delete data;
        cout << "Device destroyed" << endl;
    }
};

class Sensor : public Device {
public:
    string sensorType;
    int *sensorValue;

    Sensor(string n, int id, string type)
        : Device(n, id)
    {
        sensorType = type;

        sensorValue = new int(50);
        cout << "Sensor created" << endl;
    }

    ~Sensor() {
        delete sensorValue;
        cout << "Sensor destroyed" << endl;
    }
};

int main() {
    Sensor *s = new Sensor("Mobile", 101, "Temperature");

    delete s;   // important (calls destructor chain)

    return 0;
}
