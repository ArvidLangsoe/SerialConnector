#include <iostream>
#include "rs232.h"

using namespace std;

int main()
{
    cout << RS232_OpenComport(0, 115200, "8N1");
}
