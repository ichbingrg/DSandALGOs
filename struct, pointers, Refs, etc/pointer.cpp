#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *p;

    p = &a;

    std::cout << "value of a : " << a << std::endl;
    std::cout << "address of a : " << &a << std::endl;
    std::cout << "value of *p : " << *p << std::endl;
    std::cout << "value of p : " << p << std::endl;

    // accessing hepa memory through with malloc
    // p = (int *)malloc(5 * sizeof(int)); //allocares memory for 5 integers in heap

    // easier way to access heap in c++ is by using new
    p = new int[5]; // works just like malloc in c

    /*
    ================================================================
    POINTER TO AN ARRAY
    */

    // This array A is created in stack
    int A[5] = {2, 4, 6, 8, 10};
    int *q;
    q = A; // name of the array itself is always an address
    // q = &A[0];

    for (int i = 0; i < 5; ++i)
    {

        cout << "A[i]: " << A[i] << endl;
        cout << "q[i]: " << q[i] << endl;
        cout << "*(q+i): " << *(q + i) << endl;
    }

    cout << endl
         << endl
         << endl;

    int *pointer = (int *)malloc(5 * sizeof(int));
    // or int *pointer= new int[5];

    pointer[0] = 10;
    pointer[1] = 15;
    pointer[2] = 14;
    pointer[3] = 12;
    pointer[4] = 31;
    for (int i = 0; i < 5; ++i)
    {

        cout << "pointer[i]: " << pointer[i] << endl;
        cout << "*(pointer+i): " << *(pointer + i) << endl;
    }
}