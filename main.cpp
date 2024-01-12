#include <unordered_set>

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        int countA, countB = 0;
        
        // Count vowels in the first half (a)
        for (int i = 0; i < n / 2; ++i) {
            if (vowels.find(s[i]) != vowels.end()) {
                countA++;
            }
        }
        
        // Count vowels in the second half (b)
        for (int i = n / 2; i < n; ++i) {
            if (vowels.find(s[i]) != vowels.end()) {
                countB++;
            }
        }
        
        // Check if counts are equal
        return countA == countB;
    }
};
