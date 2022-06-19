class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());
        vector<vector<string>>result;
        int start, bStart =0, n= products.size();
        string prefix;
        for(char&c:searchWord){
            prefix+= c;
            
        //get the starting index of the word starting with prefix 
start = lower_bound(products.begin()+bStart, products.end(), prefix) - products.begin();
            
        //add empty vector to result 
            result.push_back({});
        //add words with the same prefix to the result
        //loop runs until i reaches the end of the input or 3 times or till 
        
    for(int i=start; i<min(start+3, n) && !products[i].compare(0,prefix.length(), prefix);i++)
        result.back().push_back(products[i]);
            
            //reduce the size of elements to binary search on since we know 
            bStart = start;
                        
            
        }
        return result;
      
        
        
        
        
    }
};