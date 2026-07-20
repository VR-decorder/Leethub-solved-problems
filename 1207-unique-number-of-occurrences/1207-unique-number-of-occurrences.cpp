class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    std::unordered_map<int, int> counts;
        for (int num : arr) {
            counts[num]++;
        }
        
        std::unordered_set<int> unique_counts;
        for (auto& pair : counts) {
            if (!unique_counts.insert(pair.second).second) {
                return false;
            }
        }
        
        return true;    
    }
};