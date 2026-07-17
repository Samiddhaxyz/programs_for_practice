# Tower of Hanoi - Implementation 🗼

This directory contains a C program that calculates the minimum number of moves required to solve the **Tower of Hanoi** puzzle.

### 📜 Approaches Included
*   **Direct Formula**: Uses the mathematical formula $2^n - 1$ for an $O(1)$ constant time calculation.
*   **Recursive Approach**: Implements the classic divide-and-conquer logic ($T(n) = 2T(n-1) + 1$).
*   **Iterative Approach**: Uses a `while` loop to calculate the result step-by-step.

### ⚙️ How to Compile & Run
1.  **Open your terminal** in the folder containing your code file.
2.  **Compile** the code using `gcc`:
    ```bash
    gcc hanoi.c -o hanoi -lm
    ```
    *(Note: The `-lm` flag is important because we use the `math.h` library!)*
3.  **Run** the executable:
    ```bash
    ./hanoi
    ```

### ⚠️ Precautions & Notes
*   **Input Range**: Please enter a positive integer. While the code will handle 0, negative inputs are not defined for this puzzle.
*   **Integer Overflow**: The `int` data type in C usually has a limit (around $2 \times 10^9$). If you input a number $n \ge 32$, the result will exceed the capacity of a standard `int` and cause an overflow. For very large numbers, consider using `long long`.
*   **Mathematical Precision**: If using the direct formula for very large $n$, be aware that `pow()` works with floating-point numbers; for competitive programming or high-precision needs, bitwise shifting (`1 << n`) is preferred.
