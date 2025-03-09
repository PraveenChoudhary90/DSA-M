#include <iostream>
#include <vector>
using namespace std;

// Function to compare two vectors for equality
bool are_vectors_equal(const vector<int>& vector1, const vector<int>& vector2) {
    // Check if vectors have the same size
    if (vector1.size() != vector2.size()) {
        return false;  // Vectors are not equal if their sizes are different
    }

    // Compare corresponding elements of both vectors
    for (int i = 0; i < vector1.size(); i++) {
        if (vector1[i] != vector2[i]) {
            return false;  // Vectors are not equal if any corresponding elements are different
        }
    }

    return true;  // Vectors are equal if all elements are the same
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

    // Check if the vectors are equal
    if (are_vectors_equal(vector1, vector2)) {
        cout << "The vectors are equal." << endl;
    } else {
        cout << "The vectors are not equal." << endl;
    }

    return 0;
}
