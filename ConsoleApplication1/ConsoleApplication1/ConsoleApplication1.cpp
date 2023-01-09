// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
   {
        int r, i;
        int arr[100]{};
        int a, b, c;
        cout << "Kilkist elementiv";
        cin >> r;
        cout << "Nomer masiva ";
        cin >> a >> b;
        cout << "Element masiva ";
        for (i = 1; i <= r; i++) {

            cin >> arr[i];
        }
        c = (arr[a] + arr[b]) / 2;

        cout << "Vidpovid " << endl;

        for (i = 1; i <= r; i++) {
            if (arr[i] % c == 0) {
                cout << arr[i] << endl;
            }
        }
        return 0;
}
