#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int width;
    bool a;
    char x[];
};

int main()
{
    struct Rectangle r;
    r.width = 7;
    r.length = 8;

    int area = r.width * r.length;

    cout << "size of Rectangle: " << sizeof(r) << endl;
    // size of rectangle will be 12 although char only takes 1 byte.
    // This is because it is easier for the computer to take up 4 byte

    cout << "Area: " << area << endl;
    return 0;
}