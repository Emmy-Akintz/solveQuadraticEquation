#include <iostream>
// #include <cstdio>
#include <valarray>

using namespace std;

int main()
{
    float v, a, b, c, root1, root2;

    cout << "Enter values" << endl;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    // cin >> a;
    // cin >> b;
    // cin >> c;
    v = sqrt((b * b) - (4 * a * c));
    root1 = (-b + v) / (2 * a);
    root2 = (-b - v) / (2 * a);

    cout << root1 << ", " << root2 << endl;
    printf("%f", root1);
    printf(", ");
    printf("%f", root2);

    return 0;
}