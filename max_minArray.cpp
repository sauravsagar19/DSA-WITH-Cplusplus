// https://practice.geeksforgeeks.org/problems/product-of-maximum-in-first-array-and-minimum-in-second3943/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#
// Asked by adobe
        long long find_multiplication(int a[], int b[], int n, int m)
    {
        int largest=a[0];
        // Complete the function
        for(int i=0;i<n;i++){
        if(a[i]>largest){ 
            largest=a[i];
        }
        
        }
        int smallest=b[0];
        for(int j=0;j<m;j++){
            if(b[j]<smallest){
                smallest=b[j];
            }
        }
        return largest*smallest;
        
        
    }
};