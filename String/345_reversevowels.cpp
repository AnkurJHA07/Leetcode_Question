class solution{
    public:
    string reverseVowels(string s){
        int i = 0; j = s.size()-1;
        while(i<j){
            while(!isVowels(s[i]) && i<j) i++;
            while(!isVowels(s[j]) && i<j) j--;
            char temp=s[i];
            s[j] = temp;
            i++;
            j--;
        }
        return s;
        bool isVowel(char c){
            return c=='a' || c=='e' || c=='i' ||  c=='o' ||  c=='u' ||  c=='A' ||  c=='E' ||  c=='I' || c=='O' || c=='U'; 
        }
    }
}