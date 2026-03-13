#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

struct Node {
    int data;
    Node* next1;
    Node* next2;
};

namespace UnitTest31
{
    TEST_CLASS(UnitTest31)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
          
            Node* n5 = new Node{ 5, nullptr, nullptr };
            Node* n4 = new Node{ 4, n5, nullptr };
            Node* n3 = new Node{ 3, n4, n5 };
            Node* n2 = new Node{ 2, n4, nullptr };
            Node* n1 = new Node{ 1, n2, n3 };

           
            Assert::AreEqual(1, n1->data);

            
            Assert::IsTrue(n1->next1 == n2);
            Assert::IsTrue(n1->next2 == n3);

            
            Assert::IsTrue(n2->next1 == n4);
            Assert::IsNull(n2->next2);

            
            Assert::IsTrue(n3->next1 == n4);
            Assert::IsTrue(n3->next2 == n5);

            
            Assert::IsTrue(n4->next1 == n5);
            Assert::IsNull(n4->next2);


            Assert::IsNull(n5->next1);
            Assert::IsNull(n5->next2);

            
            delete n1; delete n2; delete n3; delete n4; delete n5;
        }
    };
}
