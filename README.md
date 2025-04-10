# 👋 Hi Everyone!

Welcome to my **Day 3** hands-on programming notes!  
Today I learned about **Loop** in C, and this repository includes the examples I wrote while learning. Each section has corresponding code examples in the same file.

> **Note**: If you don't understand anything I said or need an example, please check the actual code files.

---

### 🚀 Getting Started

To clone this repository and run it locally on your computer, follow these steps:

1. Open your terminal and run the following command to clone the repository to your local machine:

   ```bash
   git clone https://github.com/MashrafiGit/Loop.git
   ```

2. Navigate into the project directory:
   ```bash
   cd Loop
   ```

---

### 🧠 Topics Covered

- **Loops**:

  - `for`
  - `while`
  - `do-while`

- **Loop Control Statements**:
  - `break`
  - `continue`
  - `goto`

---


### ➕ What is Loop?

A `loop` is a way to repeat a specific task multiple times. All loop types in C do almost the same job — the difference lies in their **syntax** and **use cases**. You can do everything with just one loop type if you understand it properly, but generally, people use the `for` loop the most.

### 🔸 A Loop Has 3 Main Parts:
1. **Initialization** – Where the loop starts.
2. **Condition** – The ending condition. When this is false, the loop stops.
3. **Increment/Decrement** – Controls how the loop moves forward or backward.

> **Tip on increment/decrement:**
> **Instead of writing `i = i + 1`, you can use shortcuts like `i++`, `i += 1`, or `i--` to make your code cleaner.**
> **You can also step by 2, 3, or more using `i += 2`, `i += 3`, etc.**


---


### 🔁 Loop Syntax Examples


1. `for` Loop
```c
for (initialization; condition; increment/decrement) {
   // code to be executed
}
```

---

2. `while` Loop
```c
initialization; // should be written before the loop
while (condition) {
   // code to be executed
   increment/decrement; // should be written inside the loop body
}
```
---

3. `do-while` Loop
```c
initialization; // same as while loop
do {
   // code to be executed
   increment/decrement;
} while (condition); // condition comes after execution
```

---


### 🔄 How Does a Loop Work?
1. Initialize the variable.
2. Check the condition.
3. If the condition is true, run the loop body (the code inside).
4. Then apply increment/decrement.
5. Repeat until the condition is false.

🔸 **Note on `do-while` Loop:**
Unlike for and while, the do-while loop runs at least once, even if the condition is false. That’s because the condition is checked after running the loop body.

--- 


### ➕ Loop Control Statements

1. `break` – Stops the loop immediately.
Example: You are printing numbers 1–10, but you want to stop when the number reaches 6. Use break inside an if condition.

2. `continue` – Skips the current iteration.
Example: You are printing 1–10 but want to skip 5. Use continue when i == 5

3. `goto` – Not used much now and considered outdated.

---


### 📌 Important Notes
1. You can use `if-else` or other loops inside a loop (nested loops).
2. Don’t worry about learning all loops — understanding one loop properly is enough to solve most problems.
3. Be careful of **infinite loops!** They happen when the condition never becomes false. If this happens:
- Press `Ctrl + C` in the terminal to stop it.
- Delete the `output.txt` file if it got too big.
4. Always be mindful about the **order** of your code.
Example: If you put `printf()` before a `break` or `continue` condition, the print will happen before the condition is checked — even if the condition should have stopped/skipped the execution. This is just like the behavior of `do-while` loops.
5. I solved some **mini problems** using loops. You’ll find those inside the folders:
- more_for_loop
- loop_with_condition

---

### ✅ Final Thoughts

This type of repository will be added to my GitHub as I continue to learn more topics. I hope others find it useful. If you find it useful, feel free to follow me and star the repo! If you notice any **mistakes**, please let me know so I can fix them. I'll be creating new repositories as I learn, so feel free to follow those as well if you want to keep up with my progress.

Email: [mashrafi.mail@gmail.com](mailto:mashrafi.mail@gmail.com)