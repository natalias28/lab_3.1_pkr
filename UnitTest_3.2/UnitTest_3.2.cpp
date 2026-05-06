#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_3.2_pkr/lab_3.2_rec.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Elem* list = nullptr;

			for (int i = 0; i < 10; i++) {
				append(list, i);
			}

			int expected = 20;
			int actual = calculatesumnotuples(list);

			Assert::AreEqual(expected, actual);

			DeleteList(list);
		}
	};
}