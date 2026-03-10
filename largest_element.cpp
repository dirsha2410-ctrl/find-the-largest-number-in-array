#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element is: " << largest;

    return 0;
}