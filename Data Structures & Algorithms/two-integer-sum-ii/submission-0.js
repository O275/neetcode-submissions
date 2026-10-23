class Solution {
    /**
     * @param {number[]} numbers
     * @param {number} target
     * @return {number[]}
     */
    twoSum(numbers, target) {
     const numMap = new Map();    

    for (let i = 0; i < numbers.length; i++) {
    const complement = target - numbers[i];

    if (numMap.has(complement)) {
      return [numMap.get(complement) + 1, (i + 1)];
   
    }

    numMap.set(numbers[i], i);
  }

  return null; // No solution found
}


        
        

        

}