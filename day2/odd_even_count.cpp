#include<iostream>
#include<vector>
using namespace std;

class arraydemo{
public:
    std::vector<int> array1;
    int n;

public:
    void setsize() {
        cout << "Enter size: ";
        cin >> n;
        array1.resize(n);
    }

    void makearray() {
        for (int i = 0; i < n; i++) {
            cout << "Enter element: ";
            cin >> array1[i];
        }
    }

    void count_odd_even() {
        if (n == 0) {
            cout << "Array is empty." << endl;
            return;
        }

        int odd_count = 0;
        int even_count = 0;

        for (int i = 0; i < n; i++) {
            if (array1[i] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }

        cout << "Odd count = " << odd_count << endl;
        cout << "Even count = " << even_count << endl;
    }
};

int main() {
    arraydemo a;
    a.setsize();
    a.makearray();
    a.count_odd_even();
    return 0;
}