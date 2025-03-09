#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the sum of all values in a vector
int sum_of_vector(const vector<int>& vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];  // Add each element to sum
    }
    return sum;
}

int main() {
    int n;

    // Input the size of the vectors
    cout << "Enter the size of the vectors: ";
    cin >> n;

    vector<int> vector1(n), vector2(n);

    // Input the elements of the first vector
    cout << "Enter elements of the first vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }

    // Input the elements of the second vector
    cout << "Enter elements of the second vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vector2[i];
    }

    // Calculate the sum of the elements in both vectors
    int sum1 = sum_of_vector(vector1);
    int sum2 = sum_of_vector(vector2);

    // Calculate total sum of both vectors
    int total_sum = sum1 + sum2;

    // Output the sum of both vectors
    cout << "The sum of all the elements in both vectors is: " << total_sum << endl;

    return 0;
}
