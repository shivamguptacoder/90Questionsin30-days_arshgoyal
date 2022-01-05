//find repeating and missing 

 int *findTwoElement(int *arr, int n) {
        // code here
         int repeating=0;
        int missing=0;
        for(int i=0;i<n;i++){
            int index=abs(arr[i])-1;
            if(arr[index]>0){
                arr[index]=-1*arr[index];
            }
            else{
                repeating=abs(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                missing=i+1;
            }
        }
        int *a=new int[2];
        a[0]=repeating;
        a[1]=missing;
        return a;
    }
