#include "converter.h"

static double celsiusToFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32;
}

static double fahrenheitToCelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

static double celsiusToKelvin(double c) {
    return c + 273.15;
}

static double kelvinToCelsius(double k) {
    return k - 273.15;
}

static double fahrenheitToKelvin(double f) {
    return celsiusToKelvin(fahrenheitToCelsius(f));
}

static double kelvinToFahrenheit(double k) {
    return celsiusToFahrenheit(kelvinToCelsius(k));
}
