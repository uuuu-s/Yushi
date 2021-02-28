#include <random>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    float u;
    u = -0.5 * 3;
    u = max(u, float(0.0));
    cout << u << endl;
    return 0;
}