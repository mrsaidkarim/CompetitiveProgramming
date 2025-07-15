class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3)
            return (false);
        int count_vowel = 0;
        int count_consonant = 0;

        vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for (int i = 0; i < word.size(); i++)
        {
            if (!isalpha(word[i]) && !isdigit(word[i]))
                return (false);
            auto it = find(vowels.begin(), vowels.end(), word[i]);
            if (it != vowels.end())
                count_vowel++;
            if (it == vowels.end() && isalpha(word[i]))
                count_consonant++;
        }
        return (count_vowel && count_consonant);
    }
};