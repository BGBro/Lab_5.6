#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = k(1, 1);
			Assert::AreEqual(0.690887, t);
		}
	};
}
