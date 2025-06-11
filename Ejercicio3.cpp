#include <iostream>
using namespace std;
#include<iostream>
using namespace std;

int main() {
    int n, cambio, A[10];
    cout << "Ingrese la cantidad de elementos ";
    cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < n / 2; i++) {
            cambio = A[i];
            A[i] = A[n - i - 1];
            A[n - i - 1] = cambio;
        }

        for (int i = 0; i < n; i++) {
            cout << A[i] << endl;
        }
        return 0;
}