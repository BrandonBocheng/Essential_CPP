#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

template<typename ItType, typename eleType>
ItType myFind(ItType first, ItType last, const eleType &value) {
    for (; first != last; first++) {
        if (*first == value) {
            return first;
        }
    }

    return last;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> ivec(arr, arr + 10);
    list<int> ilist(arr, arr + 10);

    int *p = myFind(arr, arr + 10, 9);
    if (p != arr + 10) {
        cout << "Find at: " << hex << p << endl;
    } else {
        cout << "Not finded" << endl;
    }
    cout << "*****************" << endl;

    vector<int>::iterator vec_iter;
    vec_iter = myFind(ivec.begin(), ivec.end(), 5);
    if (vec_iter != ivec.end()) {
        cout << "vector iterator finded!" << endl;
    } else {
        cout << "vector iterator not found!" << endl;
    }
    cout << "*****************" << endl;


    list<int>::iterator list_iter;
    list_iter = myFind(ilist.begin(), ilist.end(), 100);
    if (list_iter != ilist.end()) {
        cout << "list iterator finded!" << endl;
    } else {
        cout << "list iterator not found!" << endl;
    }
    cout << "*****************" << endl;


    return 0;
}