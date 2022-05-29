class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        int ans =0;
        
        vector<bitset<26>> chars(n);
        for(int i=0;i<n;i++){
            for(auto&ch:words[i]) //map the letters to 1 if it occurs in the word
                chars[i][ch-'a'] =1;
            //check with all the words if it has no common letter and update the ans
            for(int j=0;j<i;j++)
                if(!checkCommon(chars[i],chars[j]))
                    ans = max(ans, int(size(words[i]) * size(words[j])));
            
        }
        return ans;
    }
    //return if there is a common letter between bitset of two words
    bool checkCommon(bitset<26>&a, bitset<26>b){
	for(int i = 0; i < 26; i++) if (a[i] && b[i]) return true;
	return false;
}
};