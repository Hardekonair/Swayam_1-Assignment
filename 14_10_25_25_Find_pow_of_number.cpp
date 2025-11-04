class Solution {
  public:
    int reverseExponentiation(int n) {
        // code here
        string x=to_string(n);
        reverse(x.begin(),x.end());
        int a=stoi(x);
        
        return pow(n,a);
    }
};
