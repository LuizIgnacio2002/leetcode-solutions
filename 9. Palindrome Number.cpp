class Solution {
public:
typedef long long int bigint;
    bool isPalindrome(int x) {
        int numero=x;
        unsigned int x1=0;
        	double lowerBounds=pow(-2,31);
	double upperBounds=pow(2,31);
	if(x<lowerBounds || x>upperBounds)
	{
		return false;
	}
        if(x<0) return false;
        while(x>0)
        {
            x1=x1*10+x%10;
            x=x/10;
        }
        if(x1==numero)
        {
            return x1 == numero || x1 == numero /10;
        }
        else
        {
            return false;
        }
    }
};
