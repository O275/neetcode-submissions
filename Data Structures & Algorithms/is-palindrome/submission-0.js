class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isPalindrome(s) {
    const str = s.toLowerCase().replace(/\W|_/g, ''); 
    return str.split('').every((char, i) => {
     return char === str[str.length - i - 1] ? true : false;
   })  
}
}