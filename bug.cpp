std::vector<int> myVector = {1, 2, 3, 4, 5};

for (int i = 0; i <= myVector.size(); ++i) { //Error: Accessing myVector[size()] is out of bounds
    std::cout << myVector[i] << " ";
}

//Correct approach
for (size_t i = 0; i < myVector.size(); ++i) {
    std::cout << myVector[i] << " ";
}