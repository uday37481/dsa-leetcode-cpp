class RandomizedSet 
{
private:
    vector<int> nums;                  // Stores all elements
    unordered_map<int, int> indexMap;  // value -> index in vector

public:
    // Constructor
    RandomizedSet() 
    {

    }

    // Insert a value into the set
    bool insert(int val) 
    {
        // If value already exists, return false
        if (indexMap.find(val) != indexMap.end())
            return false;

        // Add value at the end of vector
        nums.push_back(val);

        // Store its index in the map
        indexMap[val] = nums.size() - 1;

        return true;
    }

    // Remove a value from the set
    bool remove(int val) 
    {

        // If value is not present
        if (indexMap.find(val) == indexMap.end())
            return false;

        // Get index of value to remove
        int removeIndex = indexMap[val];

        // Get last element in vector
        int lastElement = nums.back();

        // Put last element in place of removed element
        nums[removeIndex] = lastElement;

        // Update index of last element in map
        indexMap[lastElement] = removeIndex;

        // Remove last element from vector
        nums.pop_back();

        // Remove value from map
        indexMap.erase(val);

        return true;
    }

    // Return a random element
    int getRandom() 
    {

        // Generate random index
        int randomIndex = rand() % nums.size();

        // Return element at that index
        return nums[randomIndex];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
