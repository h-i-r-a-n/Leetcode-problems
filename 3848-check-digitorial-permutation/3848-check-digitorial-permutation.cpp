class Solution {
public:
    array<int,10> freq (int x)
    {
        array<int, 10> c{};
        do
        {
            c[x%10]++;
            x/=10;
        }while(x);
        return c;
    }

    int factorial(int num)
    {
        int ans = 1;

        for(int i = 2;i<=num;i++)
        {
            ans = ans*i;
        }

        return ans;
    }

    bool isDigitorialPermutation(int n) {
        

        int digit = 0;
        int temp = n;
        int sum = 0;

        do
            {
                digit = temp%10;
                temp = temp/10;

                //cout<<"\ndigit "<< digit;
                //cout<<"\nfactorial"<< factorial(digit);

                sum = sum + factorial(digit);
            }while(temp!=0);
        //cout<<sum;
        
        return freq(sum) == freq(n);

    
    }
};