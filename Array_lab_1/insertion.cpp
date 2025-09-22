#include<iostream>
#include<vector>
using namespace std;
void insert(int x, int i, vector<int>& arr) {
    
    if (i > arr.size()) {
        i = arr.size();
    }

    arr.resize(arr.size() + 1);

    for (int j = arr.size() - 1; j > i; j--) {
        arr[j] = arr[j - 1];
    }
    
    arr[i] = x;
}

int main() {
    int n;
    cout << "enter the number of elements: ";
    cin >> n;

   
    vector<int> a(n);

    cout << "enter the elements in sorted order: ";
    for (int l = 0; l < n; l++) {
        std::cin >> a[l];
    }

    int x;
    cout << "enter the number you want to insert: ";
    cin >> x;

    int i = 0;
    while (i < a.size() && x >= a[i]) {
        i++;
    }

    insert(x, i, a);

    for (int k = 0; k < a.size(); k++) {
        cout << a[k] << " ";
    }

    cout << std::endl;

    return 0;
}