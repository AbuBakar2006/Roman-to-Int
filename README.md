# 🏛️ Roman to Integer Converter

A specific **Algorithm Implementation** in C++ that converts Roman Numerals (strings) into Decimal Integers. This program utilizes a **Class-Based approach** and a `switch-case` logic with lookahead handling to correctly process subtraction rules (like IV, IX, XL).



[Image of Roman Numeral conversion chart]


## 🚀 Features

* **Symbol Recognition:** Supports all standard Roman symbols: `I`, `V`, `X`, `L`, `C`, `D`, `M`.
* **Subtraction Rule Logic:** Automatically detects instances where a smaller numeral precedes a larger one (e.g., "CM" for 900 or "IV" for 4) and calculates the total accordingly.
* **Object-Oriented:** Encapsulates the logic within a `Conersion` class.
* **Input Handling:** Accepts standard string input via the console.

## 🛠️ Algorithm Logic

The program iterates through the Roman string and applies the following values:

| Symbol | Value | Logic Applied |
| :--- | :--- | :--- |
| **I** | 1 | If followed by `V` or `X`, subtract 1. Else add 1. |
| **V** | 5 | Always add 5. |
| **X** | 10 | If followed by `L` or `C`, subtract 10. Else add 10. |
| **L** | 50 | Always add 50. |
| **C** | 100 | If followed by `D` or `M`, subtract 100. Else add 100. |
| **D** | 500 | Always add 500. |
| **M** | 1000 | Always add 1000. |

## 📂 Project Structure

The project is contained within a single C++ source file:

1.  **`main.cpp`**: Contains the `Conersion` class and the main execution loop.

## 💻 How to Run

### 1. Compile
Run the following command in your terminal to build the project:

```bash
g++ main.cpp -o roman_converter
```

### 2. Run
Execute the compiled program:
```bash
./roman_converter
```

### 3. Input
The program will ask for a Roman Numeral string.
```text
Enter Roman Number: MCMXCIV
```

## 📝 Example Usage
### Scenario 1: Simple Addition
#### Input:
```text
Enter Roman Number: VII
```

#### Output:
```text
Roman Number: VII
Int Number: 7
```

### Scenario 2: Complex Subtraction
#### Input:
```text
Enter Roman Number: MCMXCIV
```
(Logic: M=1000, CM=900, XC=90, IV=4)

#### Output:
```text
Roman Number: MCMXCIV
Int Number: 1994
```

## ⚠️ Requirements
* **C++ Compiler** (GCC, MinGW, Clang, or MSVC).
* **Standard Library** (No external dependencies).
