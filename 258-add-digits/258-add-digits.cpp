class Solution {
public:
    int addDigits(int num) {
        if(num ==0) return 0;
//variable_name = (condition)?value_if_true:value_if_false;
        return num%9 == 0 ? 9: num%9;
        
        
    }
};