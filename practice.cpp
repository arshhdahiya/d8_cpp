class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int wordCount = 1;
        int p1 = 0;
        int p2 = 0;
        bool isPrefix = true;
        while(p1<sentence.length()){
            if(p2 == searchWord.length()){
                return wordCount;
            }
            else if(sentence[p1] == ' '){
                wordCount++;
                isPrefix = true;
                p2 = 0;
            }
            else if(sentence[p1] == searchWord[p2] && isPrefix){
                p2++;
            }
            else{
                p2 = 0;
                isPrefix = false;
            }
            p1++;

        }

        return(p2==searchWord.length()) ? wordCount : -1;
        
    }
};