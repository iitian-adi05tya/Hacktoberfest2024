#include <iostream>
#include <algorithm>  // For sort function
using namespace std;

void charSort(char arr[], int n) {
    sort(arr, arr + n);  // Using the STL sort function
}

int main() {
    char arr[] = {'g', 'e', 'b', 'a', 'd'};
    int n = sizeof(arr) / sizeof(arr[0]);

    charSort(arr, n);

    cout << "Sorted characters: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
