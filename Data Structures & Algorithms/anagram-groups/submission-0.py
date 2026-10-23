class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram_map = {}

        for s in strs:
            sorted_s = "".join(sorted(s))
            if sorted_s in anagram_map:
                anagram_map[sorted_s].append(s)
            else:
                anagram_map[sorted_s] = [s]

        result = []

        for key, value in anagram_map.items():
            result.append(value)
        return result

        