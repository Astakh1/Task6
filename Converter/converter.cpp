#include "converter.h"

double celsiusToFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32;
}

double fahrenheitToCelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

double celsiusToKelvin(double c) {
    return c + 273.15;
}

double kelvinToCelsius(double k) {
    return k - 273.15;
}

double fahrenheitToKelvin(double f) {
    return celsiusToKelvin(fahrenheitToCelsius(f));
}

double kelvinToFahrenheit(double k) {
    return celsiusToFahrenheit(kelvinToCelsius(k));
}