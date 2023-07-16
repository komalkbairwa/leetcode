class Solution {
public:
    string longestPalindrome(string s) {
        int maxlen=0;
        int n=s.length();
        int mid;
        //odd length
        for(int i=0;i<n;i++){
            int temp=check(s,i,i);
            if(temp>maxlen){
                maxlen=temp;
                mid=i;
            }
        }  
        //even length
        for(int i=0;i<n-1;i++){
            int temp=check(s,i,i+1);
            if(temp>maxlen){
                maxlen=temp;
                mid=i;
            }
        }
        int minus=(maxlen+1)/2-1;
        int j=0;
        string ans="";
        for(int i=mid-minus;j<maxlen;i++,j++){
            ans.push_back(s[i]);
        }
        return ans;
    }
    int check(string &s,int i,int j){
        int n=s.length();
        while(i>=0 and j<n and s[i]==s[j]){
            i--;
            j++;
        }
        return (j-i-1);
    }
};
