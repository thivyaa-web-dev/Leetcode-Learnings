class Solution {
public:
   vector<int> partitionLabels(string s) {
    vector<int> answer;
    vector<int> last(26,-1);
    for(int i = 0; i < s.length(); ++i){
        last[s[i] - 'a'] = i;
    }
    int start = 0, end = 0;
    for(int i = 0; i < (int)s.length();){
        while(( i < s.length() && i <= end )){
            end = max(end,last[s[i]-'a']);
            ++i;
        }
        answer.push_back(end - start + 1);
        i = end + 1;
        start = end = i;
    }
    if(start != s.length())
        answer.push_back(s.length() - start);
    return answer;
}
    
};