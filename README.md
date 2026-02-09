# 20-Questions-of-C-Programming-Language
The collection contains 20 C programs which teach students to develop logical thinking skills and build algorithms and solve mathematical problems. The system provides users with complete access to all loop structures which include basic loops and complex two-dimensional matrix operations.

# 🏛️ The C-Logic Architect
> A comprehensive collection of 20 fundamental C programs exploring procedural programming, algorithmic efficiency, and mathematical logic.

[![Language](https://img.shields.io/badge/Language-C-A8B9CC?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Tooling](https://img.shields.io/badge/Compiler-GCC-FFD43B?style=for-the-badge&logo=gnu&logoColor=black)](https://gcc.gnu.org/)
[![Topic](https://img.shields.io/badge/Logic-Algorithms-blueviolet?style=for-the-badge)](https://github.com/)

---

## 🗺️ Project Navigation
* [Core Concepts](#-core-concepts)
* [Program Directory](#-program-directory)
* [Technical Deep Dive](#-technical-deep-dive)
* [How to Build](#-how-to-build)

---

## 🧠 Core Concepts
This repository documents my journey through the building blocks of Computer Science. Key areas of focus include:

* **Computational Math:** Implementing sequences like Fibonacci and Prime verification.
* **Data Structures:** Direct manipulation of 1D arrays and 2D matrices.
* **Sorting Logic:** Comparative analysis of Bubble and Selection Sort.
* **Pattern Engineering:** Algorithmic visualization through nested loops.

---

## 📁 Program Directory

### 🛠️ Foundational Logic
### 1️⃣ Basic Logic & Decision Making
| File | Topic | Key Concepts |
| :--- | :--- | :--- |
| **Q1.c** | Student Marksheet System | `if-else ladder`, percentage calculation |
| **Q2.c** | Digit Counter | Validating number ranges (1, 2, or 3 digits) |
| **Q3.c** | TV Price Calculator | Menu-driven program using `getch()` |
| **Q4.c** | Palindrome Checker | Number reversal and comparison logic |
| **Q5.c** | Prime Number Checker | Factor counting and loop control |

### 2️⃣ Advanced Loops & Mathematical Series
| File | Topic | Key Concepts |
| :--- | :--- | :--- |
| **Q6.c** | Armstrong Numbers | Finding Armstrong numbers within a limit |
| **Q7.c** | Diamond Pattern | Symmetric pattern printing using nested loops |
| **Q14.c** | Nested Summation Series | Digit-based pattern generation |
| **Q19.c** | Cubed Reverse Series | Calculating $i^3$ and reversing the result |
| **Q20.c** | Fibonacci Series | Sequence generation using iterative swapping |

### 3️⃣ Array Manipulations & Sorting
| File | Topic | Key Concepts |
| :--- | :--- | :--- |
| **Q9.c** | Maxima Search | Finding first and second maximum elements |
| **Q11.c** | Dynamic Array Update | Index validation and data replacement |
| **Q12.c** | Sorting Suite | Selection Sort and Bubble Sort algorithms |
| **Q13.c** | Array Prime Filter | Prime identification with duplicate detection |

### 4️⃣ Matrices & String Logic
| File | Topic | Key Concepts |
| :--- | :--- | :--- |
| **Q8.c** | Decimal to Binary | Bit manipulation and `strrev()` |
| **Q15.c** | Matrix Row Sum | 2D Array traversal and row-wise summation |
| **Q16.c** | Matrix Column Sum | Transversal summation for 2D structures |
| **Q17.c** | Matrix Multiplication | $O(n^3)$ algorithm for matrix products |
| **Q18.c** | Substring Generator | Extracting and printing all possible substrings |

---

## 🔬 Technical Deep Dive

### Matrix Multiplication Logic
In **Q17.c**, the multiplication of two matrices $A$ and $B$ is implemented. The code validates if the columns of the first matrix match the rows of the second ($C1 == R2$) before proceeding with the $O(n^3)$ dot product calculation.



### Number Reversal & Palindromes
Multiple programs (Q4, Q14, Q19) utilize the standard mathematical algorithm for reversing an integer:
1.  **Extract:** `digit = n % 10`
2.  **Append:** `rev = (rev * 10) + digit`
3.  **Reduce:** `n = n / 10`


---

## 🚀 How to Build

1.  **Clone the Repo**
    ```bash
    git clone [https://github.com/your-username/C-Logic-Architect.git](https://github.com/your-username/C-Logic-Architect.git)
    ```
2.  **Compile a Program**
    ```bash
    gcc Q12.c -o sorter
    ```
3.  **Execute**
    ```bash
    ./sorter
    ```

---
**Maintained by [Deepak Rawat]** *Code is poetry written in semicolons.*
