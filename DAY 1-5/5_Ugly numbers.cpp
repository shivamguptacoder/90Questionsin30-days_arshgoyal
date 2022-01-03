//Ugly numbers
	ull getNthUglyNo(int n) {
	    // code here
	    ull dp[n+1];
	    int two=0; //3 pointer
	    int thr=0;
	    int fiv=0;
	    dp[0]=1;
	    for(int i=1;i<=n;i++)
	    {   
	        ull x=2*dp[two];   
	        ull y=3*dp[thr];
	        ull z=5*dp[fiv];
	        ull mini=min(x,min(y,z));
	        if(mini==x)two++;  //jiska select hua uska pointer aage bada
	        if(mini==y)thr++;
	        if(mini==z)fiv++;
	        
	        dp[i]=mini;
	    }
	    return dp[n-1];
	    
	}
