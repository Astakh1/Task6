#include "pch.h"
#include "CppUnitTest.h"
#include "../Converter/converter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(86.0, celsiusToFahrenheit(30));
		}

		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(273.15, fahrenheitToKelvin(32));
		}

		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(10.0, fahrenheitToCelsius(50));
		}
	};
}
