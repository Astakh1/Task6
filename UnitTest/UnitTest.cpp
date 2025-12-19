#include <gtest/gtest.h>
#include "../Converter/converter.h"

TEST(ConverterTests, CelsiusToFahrenheit_30_Returns_86) {
    EXPECT_DOUBLE_EQ(86.0, celsiusToFahrenheit(30));
}

TEST(ConverterTests, FahrenheitToKelvin_32_Returns_273_15) {
    EXPECT_DOUBLE_EQ(273.15, fahrenheitToKelvin(32));
}

TEST(ConverterTests, FahrenheitToCelsius_50_Returns_10) {
    EXPECT_DOUBLE_EQ(10.0, fahrenheitToCelsius(50));
}

TEST(ConverterTests, CelsiusToFahrenheit_0_Returns_32) {
    EXPECT_DOUBLE_EQ(32.0, celsiusToFahrenheit(0));
}

TEST(ConverterTests, FahrenheitToCelsius_32_Returns_0) {
    EXPECT_DOUBLE_EQ(0.0, fahrenheitToCelsius(32));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
