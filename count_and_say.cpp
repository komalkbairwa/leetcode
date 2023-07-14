class Solution {
public:
    string solve(int n){
        int cnt = 1;
        string s = "1";
        for(int i=2; i<=n; i++){
            int l = 0, r = 0;
            string ans = "";
            while(r < s.size()){
                int cnt = 0;
                while(r < s.size() and s[l] == s[r]){
                    cnt++;
                    r++;
                }
                ans += cnt+'0';
                ans += s[l];
                l = r;
            }
           s = ans; 
        }
        return s;
    }
    string countAndSay(int n) {
        return solve(n);
    }
};
