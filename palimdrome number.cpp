class Solution{
    public:
    int isPalindrome(int x){
        if(x<0){
            return false;
        }
        int original=x;
        int reverse=0;

        while(x!=0){
            long long digit=x%10;
            reverse=reverse*10+digit;
            x/=10;
        }
        if(reverse==original){
            return 1;
        }else{
            return 0;
        }
    }
};