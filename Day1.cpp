#include <iostream>
#include <vector>
#include <climits> // Include this for INT_MAX and INT_MIN

using namespace std;

int main() {
    vector<int> vec = {1, 5, 7, 6, 2};
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    // Use vec.size() to iterate over all elements in the vector
    for (size_t i = 0; i < vec.size(); i++) { 
        if (vec[i] < minVal)
            minVal = vec[i];
        if (vec[i] > maxVal)
            maxVal = vec[i];
    }

    cout << "The maximum number is " << maxVal << endl;
    cout << "The minimum number is " << minVal << endl;

    return 0;
}
