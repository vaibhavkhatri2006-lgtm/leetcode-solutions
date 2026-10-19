class Solution {
public:
    int sumOfMultiples(int n) {
        int sum =0;

        for(int i=0; i<=n; i++)
        {
            int count=0;

            if(i%3==0 || i%5==0 || i%7 == 0)
            {
                count++;
            }
            if(count==1)
            {
                sum+=i;
            }
        }
     return sum;

    }
};