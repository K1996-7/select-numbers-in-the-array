#include<iostream>
#include <vector>
#include <limits>

int findSmallestNumber(const std::vector<int>& arr) {
    if (arr.empty()) {
        return std::numeric_limits<int>::max(); // Return max int if the array is empty
    }

    int smallest = arr[0]; // Initialize smallest with the first element

    for (size_t i = 1; i < arr.size(); ++i) { // Start loop from the second element
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update smallest if a smaller number is found
        }
    }

    return smallest;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> numbers;
    std::cout << "Enter " << n << " numbers:" << std::endl;

    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        numbers.push_back(num); // Add each number to the vector
    }

    int smallestNumber = findSmallestNumber(numbers);
    
    std::cout << "The smallest number is: " << smallestNumber << std::endl;
    
    return 0;
}