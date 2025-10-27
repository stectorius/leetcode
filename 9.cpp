class Solution{
public:
    bool isPalindrome(int x)
    {
        if (x<0) return false;
        long long cpyx=x;
        long long cpy;
        cpy=cpyx%10;
        cpyx/=10;
        while (cpyx!=0)
        {
            cpy=cpy*10+cpyx%10;
            cpyx/=10;
        }
        if (cpy==x) return true;
        return false;
    }
};
