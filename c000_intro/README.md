C is a general-purpose programming language.

C is very powerful; it has been used to develop operating systems, databases, applications, etc.

Difference between C and C++
C++ was developed as an extension of C, and both languages have almost the same syntax
The main difference between C and C++ is that C++ support classes and objects, while C does not


``` c
#include <stdio.h>

int main(){
  printf("hello world");
  return 0;
}
```


Let's dive deeper into the difference between **compilation** and **interpretation** as it relates to programming languages like C and JavaScript.

### 1. **Compiled Languages (e.g., C)**

- **Compilation Process**: 
  - In a compiled language like C, the code you write is first converted (or **compiled**) into **machine code** (binary code that the CPU can directly execute). This is done by a **compiler**.
  - The compilation happens **before** the program runs, and after that, you get an **executable file** (like `.exe` on Windows or `.out` on Linux).

- **Execution**:
  - Once compiled, the machine code can be executed **directly by the operating system**. There’s no need for further translation or interpretation.
  
- **Advantages**:
  - **Speed**: Since the code is translated into machine code all at once before execution, compiled programs tend to run faster.
  - **Optimization**: Compilers can optimize code for specific hardware to improve performance.
  
- **Disadvantages**:
  - **Platform-specific**: The executable is usually specific to the operating system and hardware it was compiled for. You may need different versions for different systems.
  - **Slower development cycle**: Every time you change the source code, you need to recompile the program.

### Example of Compilation in C:
1. You write C code (source code):
   ```c
   #include <stdio.h>
   int main() {
       printf("Hello, World!");
       return 0;
   }
   ```
2. You run the compiler (`gcc`, for example) to convert it into an executable file:
   ```bash
   gcc hello.c -o hello
   ```
3. The output is an executable file (`hello`), which you can run:
   ```bash
   ./hello
   ```
4. **The source code** is no longer needed for execution because the machine code is now in the executable file.

### 2. **Interpreted Languages (e.g., JavaScript)**

- **Interpretation Process**:
  - In an interpreted language like JavaScript, the code is not compiled ahead of time. Instead, an **interpreter** reads and executes the code **line by line** at runtime.
  - There's no separate machine code generated beforehand. Instead, the interpreter translates each part of the code into machine instructions and immediately executes it.

- **Execution**:
  - Every time you run the program, the interpreter translates and runs it, often in real time. In the case of JavaScript, this happens inside the web browser or a runtime environment like Node.js.
  
- **Advantages**:
  - **Cross-platform**: Since the interpreter translates code at runtime, the same code can run on different systems as long as they have the right interpreter (e.g., all modern browsers interpret JavaScript).
  - **Easier development cycle**: You can write code and immediately run it without compiling, making testing faster and more flexible.

- **Disadvantages**:
  - **Slower execution**: Since interpretation happens at runtime and the code is translated on the fly, interpreted languages tend to be slower than compiled languages.
  - **Less optimization**: Interpreters usually don’t optimize the code as much as compilers do, so performance may be suboptimal in some cases.

### Example of Interpretation in JavaScript:
1. You write JavaScript code (source code):
   ```javascript
   console.log("Hello, World!");
   ```
2. You simply run the code in an environment that has a JavaScript interpreter, like a web browser or Node.js:
   - In a browser, you could run this code directly in the browser's developer console.
3. **The interpreter** (the browser's JavaScript engine) reads the code line by line, translating it into machine code and executing it immediately.

### Key Differences Between Compilation and Interpretation:

| **Feature**            | **Compiled Languages (e.g., C)**                             | **Interpreted Languages (e.g., JavaScript)**                         |
|------------------------|--------------------------------------------------------------|----------------------------------------------------------------------|
| **Translation**         | Entire code is translated into machine code **before** running. | Code is translated and executed **line by line** during runtime.      |
| **Speed**               | Faster execution since it's directly in machine code.         | Slower due to real-time translation and execution.                   |
| **Error Detection**     | Errors are detected at compile time, before execution.        | Errors are detected during runtime, possibly after part of the code has already run. |
| **Portability**         | Machine code is often platform-specific (needs recompiling for different platforms). | Code can run on any platform with a compatible interpreter.          |
| **Development Cycle**   | Requires compilation step, slowing down the code-test loop.   | Immediate execution makes testing changes quicker.                   |

### Just-in-Time (JIT) Compilation (Hybrid Approach)

Some modern interpreters, like **JavaScript engines** (e.g., Google’s V8), use a hybrid approach called **Just-in-Time (JIT) Compilation**. 
- With JIT, parts of the code that are run frequently are compiled into machine code on the fly (at runtime), improving performance while still retaining the flexibility of interpretation. 

This is why JavaScript, despite being an interpreted language, can run quite fast in modern environments.

### Summary:
- **Compiled languages** (like C) are typically faster but less flexible across different systems and require an explicit compilation step.
- **Interpreted languages** (like JavaScript) offer flexibility and ease of development but are slower in execution since code is translated on the fly.
