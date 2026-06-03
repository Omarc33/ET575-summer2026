/*
Omari Callender
June 3, 2026
Lab 8: Temperature Converter
*/

#include <iostream>
#include <iomanip>

using namespace std;

//function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius){
    return (1.8 * celsius) + 32;
}

//function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit){
    return (5.0 / 9.0) * (fahrenheit - 32);
}

//function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius){
    return celsius + 273.15;
}

//function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit){
    return (fahrenheit - 32) * (5.0 / 9.0) + 273.15;
}

int main(){

    cout<<"\n-----Exercise/Lab 8-----"<<endl;

    //declare variables
    int choice = 0;
    double temperature = 0;
    double convertedTemperature = 0;

    //display menu
    cout<<"\nChoose conversion type:"<<endl;
    cout<<"1. Celsius to Fahrenheit"<<endl;
    cout<<"2. Fahrenheit to Celsius"<<endl;
    cout<<"3. Celsius to Kelvin"<<endl;
    cout<<"4. Fahrenheit to Kelvin"<<endl;

    //collect choice
    cout<<"\nEnter choice: ";
    cin>>choice;

    //display result with one decimal place
    cout<<fixed<<setprecision(1);

    //check choice and perform conversion
    if(choice == 1){

        cout<<"Enter temperature in Celsius: ";
        cin>>temperature;

        convertedTemperature = celsiusToFahrenheit(temperature);

        cout<<temperature<<"°C is "<<convertedTemperature<<"°F"<<endl;
    }
    else if(choice == 2){

        cout<<"Enter temperature in Fahrenheit: ";
        cin>>temperature;

        convertedTemperature = fahrenheitToCelsius(temperature);

        cout<<temperature<<"°F is "<<convertedTemperature<<"°C"<<endl;
    }
    else if(choice == 3){

        cout<<"Enter temperature in Celsius: ";
        cin>>temperature;

        convertedTemperature = celsiusToKelvin(temperature);

        cout<<temperature<<"°C is "<<convertedTemperature<<"K"<<endl;
    }
    else if(choice == 4){

        cout<<"Enter temperature in Fahrenheit: ";
        cin>>temperature;

        convertedTemperature = fahrenheitToKelvin(temperature);

        cout<<temperature<<"°F is "<<convertedTemperature<<"K"<<endl;
    }
    else{

        cout<<"Invalid choice. Please enter a number from 1 to 4."<<endl;
    }

    return 0;
}

/*
1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
Yes, it used functions and the iomanip library for fixed and setprecision. I understood the basic idea of the functions because each one takes a temperature value and returns the converted temperature. The formatting part was newer because it controls how many decimal places are shown.

2. Are there any issues or improvements you noticed? Explain.
 I did not find any major problems with the code. It uses multiple functions, which makes the program more organized. If I were improving it further, I would add more comments to explain the formulas.

 3. What methods did you use to test if the AI code was working as it should? Explain.
I tested the program with the example values from the assignment. For example, I checked that 20 Celsius converted to 68 Fahrenheit and that 98.6 Fahrenheit converted to 37 Celsius. I also tested each menu choice to make sure the correct formula was being used.
*/
