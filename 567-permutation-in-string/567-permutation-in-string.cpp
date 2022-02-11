class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        vector<int>count1(26,0), count2(26,0);
        
        int i;
        for(i = 0; i < s1.size(); i++) {
            // compute the frequency of each char for the first window
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }
        
        if(count1 == count2) return true;
        
        // search the remaining windows
        int start = 0, end = i;
        while(end < s2.size()){
        //remove char at 'start' index and add char at 'end' index
            --count2[s2[start] - 'a'];
            ++count2[s2[end] - 'a'];
          
            if(count1 == count2) return true;
            end++; start++;
        }
        return false;
    }
};

//if one string is the permutation of the other , then both must have same frequencies.Hash data structure is used to store frequencies, of array of size 26.

//How do we know string p is a permutation of string s? Easy, each character in p is in s too. So we can abstract all permutation strings of s to a map (Character -> Count). i.e. abba -> {a:2, b:2}. Since there are only 26 lower case letters in this problem, we can just use an array to represent the map.

// How do we know string s2 contains a permutation of s1? We just need to create a sliding window with length of s1, move from beginning to the end of s2. When a character moves in from right of the window, we subtract 1 to that character count from the map. When a character moves out from left of the window, we add 1 to that character count. So once we see all zeros in the map, meaning equal numbers of every characters between s1 and the substring in the sliding window, we know the answer is true.

//We can maintain the window by deleting the value of s2[i - len(s1)] when it gets larger than len(s1). After, we only need to check if it is equal to the target. Working with list values of [0, 1,..., 25] instead of 'a'-'z' makes it easier to count later.

