#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Kateryna Artemovska\source\repos\lab_1.6_oop\lab_1.6_oop\LorryC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest16
{
	TEST_CLASS(UnitTest16)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LorryC::Car t;
			t.Init("name", 2, 100);
			Assert::AreEqual("name", t.getBrand().c_str());;
		}
	};
}
