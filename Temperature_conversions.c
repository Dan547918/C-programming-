/*
Name: Duncan Mugambi Gitonga
Reg No:CT101/G/26547/25
Descriprion: function to convert degrees to celcius
*/
#include <stdio.h>

// function prototype
float convert_Fahrenheit_to_celcius(int Fahrenheit_temp);

int main() {
    int Fahrenheit, Fahrenheit_1, Fahrenheit_2;

    // assigning values
    Fahrenheit = 92;
    Fahrenheit_1 = 94;
    Fahrenheit_2 = 98;

    // function calling and printing results
    printf("Temperature = %.2f degrees Celcius\n", convert_Fahrenheit_to_celcius(Fahrenheit));
    printf("Temperature = %.2f degrees Celcius\n", convert_Fahrenheit_to_celcius(Fahrenheit_1));
    printf("Temperature = %.2f degrees Celcius\n", convert_Fahrenheit_to_celcius(Fahrenheit_2));

    return 0;
}

// function definition
float convert_Fahrenheit_to_celcius(int Fahrenheit_temp) {
    float Celcius;
    Celcius = (Fahrenheit_temp - 32) * 5.0 / 9.0;
    return Celcius;
}