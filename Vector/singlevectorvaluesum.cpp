#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the sum of all values in a vector
int sum_of_vector(const vector<int>& vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i]; // Add each element to sum
    }
    return sum;
}

int main() {
    int n;
    
    // Input the size of the vector
    cout << "Enter the size of the vector: ";
    cin >> n;
    
    vector<int> vec(n);
    
    // Input the elements of the vector
    cout << "Enter elements of the vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    // Calculate the sum of the vector
    int result = sum_of_vector(vec);
    
    // Output the sum
    cout << "The sum of all the elements in the vector is: " << result << endl;
    
    return 0;
}
