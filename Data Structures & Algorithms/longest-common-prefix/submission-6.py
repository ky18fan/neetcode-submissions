class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        word_counter = 0
        letter_counter = 0
        buffer = ''
        character_is_different = True
        prefix = ""
        sorted_strs = sorted(strs, key=len, reverse=True)
        sorted_strs_len = len(sorted_strs)
        first_word_size = len(sorted_strs[0])
        while(character_is_different):
            word = sorted_strs[word_counter]
            try:
                letter = sorted_strs[word_counter][letter_counter]
            except:
                break
            if word_counter > 0 and letter != buffer:
                break
            buffer = letter
            if word_counter == sorted_strs_len - 1:
                prefix += letter
                buffer = ''
                if len(word) != first_word_size and letter_counter > len(word):
                    break
                word_counter = 0
                if first_word_size > 1:
                    letter_counter += 1
                else: break
            else:
                word_counter += 1
        return prefix