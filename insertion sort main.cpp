#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {12, 5, 3, 7, 11, 4, 8, 13};
    vector<int> primos;
    for (int i = 0; i < arr.size(); i++) {
        int num = arr[i];
        bool primo = true;
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                primo = false;
                break;
            }
        }
        if (primo && num > 1) {
            primos.push_back(num);
        }
    }
    insertionSort(primos);
    for (int num : primos) {
        cout << num << " ";
    }
    return 0;
}
