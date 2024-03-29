#include <unordered_set>

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        int countA = 0; //Both have to be initialized to 0 or it won't be right it seems
        int countB = 0; //This is because if its int countA, countB = 0; only the last one is explicitly initialized
        
        // Count vowels in the first half
        for (int i = 0; i < n / 2; ++i) {
            if (vowels.find(s[i]) != vowels.end()) { //if there is no vowels, it would return vowels.end()
                countA++;
            }
        }
        
        // Count vowels in the second half
        for (int i = n / 2; i < n; ++i) {
            if (vowels.find(s[i]) != vowels.end()) {
                countB++;
            }
        }
        
        // Check if counts are equal
        return countA == countB;
    }
};
