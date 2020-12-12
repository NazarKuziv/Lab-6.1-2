#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 6.1-2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest612
{
	TEST_CLASS(UnitTest612)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[22] = { -37, -36, -5, 38, -30, -6, 4, 34, -4, 35, 10, 20, -40, -30, -29, 2, -26, 8, -15, 25, 15, 20 };

			int s = 0;
			int k = 0;
			Sum(t, 22, s, k,0);

			Assert::AreEqual(s, -172);
			Assert::AreEqual(k, 16);
		}
	};
}
