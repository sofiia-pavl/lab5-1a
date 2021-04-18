#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Софія\source\repos\lab5-1a\lab5-1a\Combination.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest41a
{
	TEST_CLASS(UnitTest41a)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Combination t(4, 6);
			int a;
			a = t.combination();
			Assert::AreEqual(a, 15);
		}
	};
}