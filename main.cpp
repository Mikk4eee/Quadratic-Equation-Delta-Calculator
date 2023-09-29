#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, delta;
    double delta_sqrt;

    cout << "Insert a: " << endl;
    cin >> a;
    cout << "Insert b: " << endl;
    cin >> b;
    cout << "Insert c: " << endl;
    cin >> c;

    delta = b * b - 4 * a * c;
    delta_sqrt = sqrt(delta);

    cout << "Delta (Without Square Root): " << delta << endl;
    cout << "Square Root of Delta: " << delta_sqrt << endl;

    return 0;
}
