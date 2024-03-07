#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours=0;
        minutes=0;
        seconds=0;
    }
    Time(int h, int m, int s)
    {
        hours=h;
        minutes=m;
        seconds=s;
    }
    void displayTime() 
    {
        cout << hours << ":" << minutes << ":" << seconds <<endl;
    }
    void add(Time& t1,Time& t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = seconds / 60;
        seconds %= 60;
        minutes += t1.minutes + t2.minutes;
        hours = minutes / 60;
        minutes %= 60;
        hours += t1.hours + t2.hours;
    }
};
int main() {
    Time time1(3, 45, 30);
    Time time2(2, 15, 45);
    cout << "Time 1: ";
    time1.displayTime();

    cout << "Time 2: ";
    time2.displayTime();

    Time result;
    result.add(time1, time2);
    cout << "Sum of Time 1 and Time 2: ";
    result.displayTime();
    return 0;
}
