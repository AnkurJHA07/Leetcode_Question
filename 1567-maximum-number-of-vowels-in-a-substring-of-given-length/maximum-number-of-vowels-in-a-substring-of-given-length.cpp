class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
      int n = s.length();
      int i = 0, j = 0;
      int maxV = 0;
      int count = 0;

      while(j<n){

        if(isVowel(s[j]))
            count++;
        if(j-i+1 == k){
            maxV = max(maxV, count);
        if(isVowel(s[i]))
            count--;
        
        i++;
      }  
      j++;
    }
      return maxV;
    }

};