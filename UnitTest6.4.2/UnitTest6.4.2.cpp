#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.4-2/Lab-6.4-2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest642
{
	TEST_CLASS(UnitTest642)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int c[n] = { -100,99,-98,97,-96,1,-2,3,-4,5 };

			int count = 0;

			int expectedCount = 5;

			Calculate(c, n, count );

			Assert::AreEqual(expectedCount, count);
		}
	};
}
