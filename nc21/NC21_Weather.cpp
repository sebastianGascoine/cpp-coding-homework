/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #21
* LAST MODIFIED: 4/15/23
*****************************************************/
/****************************************************************************
* Budget
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a program that creates a Monthly Budget structure designed to hold each expense
And one to hold what the user actually spent, and give a report on over/under spending on each
category and total budget
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Welcome to the weather program.  
On 1/25/2022 @ 11:00 PDT, zipcode 92056 experienced a temperature of 75 degrees F, humidity 51% and a visibility of 7.0 miles.

*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
*math.h for round
*iomanip for visibility and temperature
*****************************************************************************/

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

enum class Units {IMPERIAL, METRIC};

struct WxObservation {
    string date;
    string time;
    string zipcode;
    int temperature;
    int humidity;
    double visibility;
    Units unit;
};

void displayWeatherObservation(const WxObservation &wo);

int main() {
    WxObservation observation;
    observation.date = "1/25/2022";
    observation.time = "11:00 PDT";
    observation.zipcode = "92056";
    observation.temperature = 75;
    observation.humidity = 51;
    observation.visibility = 7.0;
    observation.unit = Units::METRIC;
    cout<<"Welcome to the weather program."<< endl;
    displayWeatherObservation(observation);
    
    return EXIT_SUCCESS;
}

void displayWeatherObservation(const WxObservation &wo) {
    string strDistance;
    string strTemp;
    double visibility = 0;
    double temperature = 0;
    
    if (wo.unit == Units::IMPERIAL) {
        strDistance = "miles";
        strTemp = "F";
        visibility = wo.visibility;
        temperature = wo.temperature;
    }
    if (wo.unit == Units::METRIC) {
        //assumes WxObservation standard is imperial
        strDistance = "km";
        strTemp = "C";
        visibility = wo.visibility * 1.609;
        temperature = wo.temperature - 32;
        temperature /= 1.8000;
        temperature = round(temperature);
    }
    cout << "On " << wo.date << " @ " << wo.time
        << ", zipcode " << wo.zipcode << " experience a temperature of " 
        << temperature << " "<< setprecision(1) << fixed << strTemp << ", humidity " 
        << wo.humidity << "% and visibility of " << setprecision(1) 
        << fixed << visibility << " " << strDistance << "." << endl;
}