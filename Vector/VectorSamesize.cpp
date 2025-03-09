#include <iostream>
#include <vector>
using namespace std;

// Function to add two vectors of the same size
vector<int> add_vectors(const vector<int>& vector1, const vector<int>& vector2) {
    // Check if both vectors have the same size
    if (vector1.size() != vector2.size()) {
        throw invalid_argument("Vectors must be of the same size");
    }
    
    vector<int> result;
    
    // Iterate through both vectors and add corresponding elements
    for (size_t i = 0; i < vector1.size(); i++) {
        result.push_back(vector1[i] + vector2[i]);
    }
    
    return result;
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
    
    try {
        // Calculate the sum of vectors
        vector<int> result = add_vectors(vector1, vector2);
        
        // Output the sum of vectors
        cout << "The sum of the vectors is: ";
        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }

    return 0;
}
