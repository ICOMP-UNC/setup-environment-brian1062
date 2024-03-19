/**
 * @file logic.h
 * @brief Header file for mathematical operations.
 */

/**
 * @brief Adds two integers.
 *
 * This function adds two integers and returns the result.
 *
 * @param first_n The first integer.
 * @param second_n The second integer.
 * @return The sum of the two integers.
 */
int add(int first_n, int second_n);

/**
 * @brief Subtracts two integers.
 *
 * This function subtracts the second integer from the first integer and returns the result.
 *
 * @param first_n The first integer.
 * @param second_n The second integer.
 * @return The result of subtracting the second integer from the first integer.
 */
int sub(int first_n, int second_n);

/**
 * @brief Multiplies two integers.
 *
 * This function multiplies two integers and returns the result.
 *
 * @param first_n The first integer.
 * @param second_n The second integer.
 * @return The product of the two integers.
 */
int mul(int first_n, int second_n);

/**
 * @brief Divides two integers.
 *
 * This function divides the first integer by the second integer and returns the result.
 * If the second integer is zero, it returns -1.0 to indicate division by zero.
 *
 * @param first_n The first integer.
 * @param second_n The second integer (divisor).
 * @return The result of dividing the first integer by the second integer.
 *         If the second integer is zero, returns -1.0.
 */
double div(int first_n, int second_n);
