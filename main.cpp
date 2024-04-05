#include <iostream>
using namespace std;


template<typename T> T summator(const T arr[], const int size)
{
    T sum = 0;
    for (int i = 0; i < size; ++i)
        sum += arr[i];
    return sum;
}

int main() {
    float list1[] = {1.5, 2.5, 3.5, 4.2, 5.9};
    int list2[] = {1, 2, 3, 4, 5};
    short list3[] = {0, 13, 12, 7, 2};
    cout << summator(list1,5) << endl;
    cout << summator(list2,5) << endl;
    cout << summator(list3,5) << endl;
    return 0;
}

