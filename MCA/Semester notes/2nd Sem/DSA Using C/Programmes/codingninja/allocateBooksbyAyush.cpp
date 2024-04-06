#include <bits/stdc++.h> 
using namespace std;

bool ispossible(vector<int> time,int n,int m,long long mid){
	long long timecount = 0;
	long long days=1;
	for(long long i=0;i<m;i++){
		if(timecount+time[i]<=mid){ 
			timecount+=time[i];
        } else {
            days++;
            if(days>n || time[i]>mid){ 
				return false;
			}    
			timecount=time[i]; 
        }   
   	}
	return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time)  {
  // Write your code here.
	long long sum=0; 
	long long ans=-1; 
	for(long long i=0;i<m;i++){ 
		sum+=time[i]; 
	}
	long long start=0; 
	long long end=sum;
	while(start<=end){
		long long mid=start+(end-start)/2; 
		if(ispossible(time,n,m,mid)){
			ans=mid;   end=mid-1; 
	    }else{  
	 		start=mid+1; 
	    }
	}
	return ans; 
}
int main() {
    // Sample inputs
    int n = 3; // Number of ninjas
    int m = 5; // Number of tests
    vector<int> time = {2, 1, 3, 2, 4}; // Duration of each test
    
    // Call the function to find the minimum time required
    long long minTime = ayushGivesNinjatest(n, m, time);

    // Output the result
    cout << "Minimum time required to conduct all tests: " << minTime << endl;

    return 0;
}