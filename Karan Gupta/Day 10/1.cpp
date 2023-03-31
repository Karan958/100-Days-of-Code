class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        int n1=(int)(log(n)/log(2));
        return (int)pow(2,n1)==n;
    }
};
