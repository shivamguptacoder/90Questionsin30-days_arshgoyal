//Count the subarrays having product less than k
 int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
         if(k<=1)return 0;
        int s=0; 
        int e=0;
         long long int p=1;
         int ans=0;
        while(e<n)
        {  
            p*=a[e];
           while(p>=k){p/=a[s++];}
           ans+=1+e-s;
            e++;
        }
        return ans;
        
    }
