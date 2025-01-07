std::vector<int> myVector = {1, 2, 3, 4, 5};

for (size_t i = 0; i < myVector.size(); ++i) { //Corrected: Accessing only valid elements
    std::cout << myVector[i] << " ";
}

//Alternative using iterators (safer, more idiomatic)
for (int& num : myVector) {
    std::cout << num << " ";
}

//Another alternative using range-based for loop
for (const auto& num : myVector) {
    std::cout << num << " ";
}