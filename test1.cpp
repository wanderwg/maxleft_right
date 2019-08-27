//贪心法求左右最值之差
class MaxGap {
public:
    int findMaxGap(vector<int> A, int n) {
        int max=A[0];
        int maxpos=0;
        for(int i=0;i<n;++i)
        {
            if(max<A[i])
            {
                max=A[i];
                maxpos=i;
            }
        }
        if(maxpos==0)
            return A[0]-A[n-1];
        if(maxpos==n-1)
            return A[n-1]-A[0];
        int ret1=A[maxpos]-A[0];
        int ret2=A[maxpos]-A[n-1];
        if(ret1>ret2)
            return ret1;
        else 
            return ret2;
    }
};