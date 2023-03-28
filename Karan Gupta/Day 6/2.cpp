class Solution {
public:
    int addDigits(int num) {
        int rem;
        while(num>9){
            rem=num%10;
            num=num/10 + rem;;
        }
        return num;
        
    }
};
