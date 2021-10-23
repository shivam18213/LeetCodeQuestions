class Solution {
public:
    int lengthOfLastWord(string str) {
    stringstream s(str); // Used for breaking words
	string word; // to store individual words

	int count = 0;
	while (s >> word){
      cout<<word<<'\n';
      count++;
    }
		
	return word.size();
        
    }
};