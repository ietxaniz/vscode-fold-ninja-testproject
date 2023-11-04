/**
 * calculateSum - calculates the sum of two numbers.
 *
 * This function takes two numerical arguments and returns
 * their sum. It is a demonstration of a simple arithmetic
 * operation in TypeScript.
 *
 * @param {number} a - The first number to sum.
 * @param {number} b - The second number to sum.
 * @returns {number} The sum of `a` and `b`.
 */
function calculateSum(a: number, b: number): number {
  return a + b;
}

/**
 * isEven - checks if a number is even.
 *
 * Given a number, this function will check if it is even.
 * An even number is an integer which is "evenly divisible"
 * by two, i.e., divisible by two without leaving a remainder.
 *
 * @param {number} num - The number to check.
 * @returns {boolean} `true` if `num` is even, `false` otherwise.
 */
function isEven(num: number): boolean {
  return num % 2 === 0;
}

// Export the functions if this module is to be used in other TypeScript files.
export { calculateSum, isEven };
