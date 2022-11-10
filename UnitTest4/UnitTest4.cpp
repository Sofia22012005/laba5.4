#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.4/laba5.4.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a = S4(0, 1, 0);
			Assert::AreEqual(a, 1.);
		}
	};
}
