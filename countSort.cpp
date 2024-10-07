#include <iostream>
#include <vector>
using namespace std;

void countSort(int arr[], int n) {
    int max_val = *max_element(arr, arr + n);
    vector<int> count(max_val + 1, 0);

    // Count each element
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    int index = 0;
    for (int i = 0; i <= max_val; i++) {
        while (count[i]-- > 0)
            arr[index++] = i;
    }
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    countSort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
