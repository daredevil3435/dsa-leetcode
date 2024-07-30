#include <iostream>
#include <string>
#include <cmath>  // for abs and fmin

using namespace std;

double calculateAngle(string time) {
    // Parse the input time string
    int hours = stoi(time.substr(0, 2));
    int minutes = stoi(time.substr(3, 2));

    // Calculate the positions of the hour and minute hands
    double minuteAngle = minutes * 6.0; // 360 degrees / 60 minutes = 6 degrees per minute
    double hourAngle = (hours % 12) * 30.0 + minutes * 0.5; // 360 degrees / 12 hours = 30 degrees per hour and 0.5 degrees per minute

    // Calculate the angle between the two hands
    double angle = abs(hourAngle - minuteAngle);

    // The minimum angle between the two hands
    return fmin(angle, 360.0 - angle);
}

int main() {
    string time;
    cout << "Enter time in HH:MM format: ";
    cin >> time;

    double angle = calculateAngle(time);
    cout << "The minimum angle between the hour hand and minute hand is: " << angle << " degrees." << endl;

    return 0;
}
