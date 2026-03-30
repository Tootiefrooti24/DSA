//Maximum numbers of words found in a sentence
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        int n = sentences.size();
        for (int i = 0; i < n; i++) {
            int count = 1;
            int m = sentences[i].size();
            for (int j = 0; j < m; j++) {
                if (sentences[i][j] ==  ' ') {
                    count++;
                }
            }
            if (max < count) {
                max = count;
            }
        }
        return max;
    }
};