#include <iostream>
#include <vector>
#include <algorithm> // For sorting the vector 
using namespace std;

int main() {
    vector<int> vec = {5, 2, 9, 1, 5, 6};

    // Sort in ascending order
    sort(vec.begin(), vec.end());

    // Print the minimum and maximum numbers
    cout << "The minimum number is: " << vec[0] << endl;
    cout << "The maximum number is: " << vec[vec.size() - 1] << endl;

    return 0;
}
