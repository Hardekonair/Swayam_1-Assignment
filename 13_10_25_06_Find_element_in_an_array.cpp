#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int target;
    cout << "Enter element to find: ";
    cin >> target;

    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }

    if(!found)
        cout << "Element not found in the array." << endl;

    return 0;
}
