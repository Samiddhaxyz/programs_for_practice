# 🎯 Number Guessing Game

A simple number guessing game in C where the player tries to guess a hidden number within a limited number of turns.

## 📋 Overview

- **Functionality:** The program picks a fixed number, and the player has up to 10 turns to guess it. After each guess, the program tells the player whether to guess higher or lower.
- **Concepts used:** Variables, a `while` loop for repeated turns, an `if-else` ladder for comparisons, and `scanf` for reading user input.
- **Goal:** To practice loops combined with conditional logic, and controlling program flow with `return`.

## 🛠️ How It Works

1. The program sets a target `number` and starts a loop that runs for up to 10 turns.
2. On each turn, the player enters a guess.
3. The program compares the guess to the target:
   - If the guess is too low, it prints "higher number please".
   - If the guess is too high, it prints "lower number please".
   - If the guess is correct, it prints a success message along with how many turns it took, then exits immediately with `return 0`.
4. If the player doesn't guess correctly within 10 turns, the loop ends and the program reveals the correct number.

## ▶️ How to Run

```
gcc project-1.c -o guessing_game
./guessing_game
```

(On Windows, you can compile with `gcc project-1.c -o guessing_game.exe` and run `guessing_game.exe`)

## 🚧 Known Limitations

- No input validation — entering a non-numeric value (like a letter) can cause the loop to behave unexpectedly, since `scanf` will fail silently and leave the guess unchanged.
- The target number is hardcoded rather than randomized, so the game plays out the same way every time.

## 📚 What I Learned

- How to combine a `while` loop with an `if-else` ladder to repeat logic until a condition is met.
- Using `return 0` inside a loop to exit the program early once a goal is reached.
- That once a variable's value is narrowed down by `<` and `>` checks, an `==` check for "everything else" is really the only remaining possibility — and how that affects which branches are actually reachable.

## 🔮 Future Improvements

- Randomize the target number using `rand()` instead of hardcoding it.
- Add proper input validation using `scanf`'s return value to catch non-numeric input.
- Let the player choose the number of turns or a difficulty level.

  ***Created by Samiddha Ganguly****
  <br>
  ***Note - This is a beginner-friendly project. Feedbacks are welcomed***
