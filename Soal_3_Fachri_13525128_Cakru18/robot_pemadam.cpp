#include <iostream>
#include <string>
using namespace std;

class RobotPemadam{
private:
    int jarak;
    string status;

public:
    void inputSensor(){
        cout << "jarak sensor: ";
        cin >> jarak;
    }
    void prosesLogika(){
        if (jarak > 20){
            status = "Maju Mencari Api";
        }
        else if (jarak <= 20 && jarak > 5){
            status = "UDAH DEKET NIH BRAY";
        }
        else if (jarak <= 5){
            status = "Posisi Tepat! gas semprot kali ya!";
        }
    }
    void cetakStetus(){
        cout << "[Sensor: " << jarak << " cm] -> Action: [" << status << "]" << endl;
    } 
    bool check_jarak(){
        return jarak == 67;
    }   
};

int main(){
    RobotPemadam robot;
    while(true){
        robot.inputSensor();
        if (robot.check_jarak()){
            break;
        }
        robot.prosesLogika();
        robot.cetakStetus();
    }

    cout << "selesai";
    return 0;
}