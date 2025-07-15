# C++ Module 07 - Templates

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![macOS](https://img.shields.io/badge/macOS-000000?style=for-the-badge&logo=apple&logoColor=white)
![42](https://img.shields.io/badge/42-Project-00BABC?style=for-the-badge)
![Score](https://img.shields.io/badge/Score-100%25-brightgreen?style=for-the-badge)

## 📋 Project Overview

C++ Module 07 is part of the 42 school C++ curriculum, focusing on **C++ templates** to create generic, reusable code in C++98. Through three exercises—**Start with a Few Functions**, **Iter**, and **Array**—this module teaches how to write function and class templates, manage dynamic memory, and implement the Orthodox Canonical Form. It enforces strict coding standards: no forbidden functions (`printf`, `alloc`, `free`), no `using namespace` or `friend` keywords, and no STL containers/algorithms until Modules 08-09. The module emphasizes robust memory management (verified with `valgrind`) and adherence to the C++98 standard.

## ✨ Key Features

- **Exercise 00: Start with a Few Functions**:
  - Implements function templates `swap`, `min`, and `max` that work with any type supporting assignment and comparison operators.
  - Demonstrates template genericity with types like `int`, `float`, and `std::string`.
  - Templates defined in a header file with include guards.
- **Exercise 01: Iter**:
  - Implements a function template `iter` that applies a user-provided function to each element of an array.
  - Supports both modifiable (`T&`) and read-only (`const T&`) function parameters.
  - Handles edge cases (null pointer, negative/zero length).
- **Exercise 02: Array**:
  - Implements a class template `Array<T>` to manage a dynamic array of any type.
  - Features Orthodox Canonical Form (default/copy constructors, assignment operator, destructor), subscript operator with bounds checking, and `size()` method.
  - Ensures deep copying and memory safety using `new[]` and `delete[]`.
- **C++98 Compliance**:
  - Compiled with `-Wall -Wextra -Werror -std=c++98`.
  - No `using namespace`, `friend`, or forbidden functions.
  - No STL containers/algorithms.
- **Norm Compliance**:
  - Adheres to 42’s coding standards, with newline-terminated outputs and no memory leaks (verified with `valgrind`).

## 🛠️ Prerequisites

- **Operating System**: UNIX-based (Linux, macOS, etc.).
- **Compiler**: `c++` (GCC or Clang, C++98 compatible).
- **Build Tool**: `make`.
- **Debugger**: `valgrind` for memory leak detection.

## 🚀 Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/mde-agui/Cpp07.git
   cd Cpp07
   ```

2. Navigate to an exercise directory and compile:
   ```bash
   cd ex00
   make
   ```
   Repeat for `ex01` and `ex02`. This creates executables (e.g., `ex00`, `ex01`, `ex02`).

## 📖 Usage

Each exercise is independent and run from its respective directory.

### Exercise 00: Start with a Few Functions
```bash
cd ex00
./ex00
```
**Output**:
```
a = 2, b = 3
After swap: a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
s1 = apple, s2 = banana
After swap: s1 = banana, s2 = apple
min(s1, s2) = apple
max(s1, s2) = banana
```

### Exercise 01: Iter
```bash
cd ex01
./ex01
```
**Output**:
```
Test 1: Integer array
Original:
1
2
3
4
5
After increment:
2
3
4
5
6
Test 2: String array
Original:
apple
banana
cherry
After appendExclamation:
apple!
banana!
cherry!
```

### Exercise 02: Array
```bash
cd ex02
./ex02
```
**Output**:
```
Empty array size: 0
Int array: 1 2 3 4 5
Original: 1, Copy: 100
Original: 2, Assigned: 200
String array: apple banana cherry
Caught out-of-bounds exception
```

Check for memory leaks:
```bash
valgrind ./ex02
```

## 📂 Project Structure

```
cpp_module_07/
├── ex00/                   # Start with a Few Functions: Function templates
│   ├── Makefile
│   ├── main.cpp
│   └── whatever.hpp
├── ex01/                   # Iter: Function template for array iteration
│   ├── Makefile
│   ├── main.cpp
│   └── iter.hpp
├── ex02/                   # Array: Class template for dynamic arrays
│   ├── Makefile
│   ├── main.cpp
│   ├── Array.hpp
│   └── Array.tpp
└── README.md               # This file
```

## 🛠️ Makefile Commands

Each exercise has its own `Makefile` with the following commands:

| Command       | Description                              |
|---------------|------------------------------------------|
| `make`        | Builds the executable (e.g., `ex00`, `ex01`, `ex02`). |
| `make clean`  | Removes object files.                    |
| `make fclean` | Removes object files and executable.     |
| `make re`     | Rebuilds the project from scratch.       |

## 🔍 Technical Details

- **C++ Concepts Covered**:
  - **Function Templates**: Enable generic functions (`swap`, `min`, `max`, `iter`) that work with any type supporting required operations (Ex00, Ex01).
  - **Class Templates**: Create reusable classes (`Array<T>`) for managing dynamic arrays of any type (Ex02).
  - **Orthodox Canonical Form**: Ensures proper construction, copying, assignment, and destruction for class templates (Ex02).
  - **Memory Management**: Uses `new[]`/`delete[]` with deep copying to prevent leaks, verified with `valgrind` (Ex02).
  - **Exception Handling**: Throws `std::exception` for out-of-bounds access in `Array` (Ex02).
- **Constraints**:
  - Compiled with `-Wall -Wextra -Werror -std=c++98`.
  - No `using namespace`, `friend`, or forbidden functions (`printf`, `alloc`, `free`).
  - No STL containers/algorithms until Modules 08-09.
  - Outputs end with newlines.
  - Templates defined in header files with include guards (`.tpp` allowed for `Array`).
- **External Functions**:
  - Allowed: `new`, `delete`, `std::string`, `std::cout`, `std::endl`, `std::exception`.
- **Error Handling**:
  - Validates inputs (e.g., null pointers, negative lengths in `iter`, out-of-bounds in `Array`).
  - Ensures no memory leaks or access to unallocated memory.

## 📚 Explanation of Key C++ Concepts

### C++ Templates
- **Definition**: Templates allow writing generic code that works with any data type, enabling code reuse and type safety. They are resolved at compile-time, generating specific code for each type used.
- **Types**:
  - **Function Templates**: Functions that operate on generic types, defined with `template <typename T>`. Used in Ex00 (`swap`, `min`, `max`) and Ex01 (`iter`) to handle types like `int`, `float`, `std::string`, or custom classes.
  - **Class Templates**: Classes that manage data of any type, defined similarly. Used in Ex02 (`Array<T>`) to create a dynamic array for any type.
- **Usage in Module 07**:
  - **Exercise 00**: `swap`, `min`, and `max` use function templates to operate on any type supporting assignment (`=`) and comparison (`<`, `>`). For example:
    ```cpp
    template <typename T>
    void swap(T& a, T& b)
    {
        T temp = a;
        a = b;
        b = temp;
    }
    ```
    This works for `int`, `std::string`, etc., as long as `T` supports `=`.
  - **Exercise 01**: `iter` applies a function to array elements, using templates to handle any array type and function signature (`T&` or `const T&`). For example:
    ```cpp
    template <typename T>
    void iter(T* array, int length, void (*func)(T&))
    {
        if (!array || length <= 0) return;
        for (int i = 0; i < length; ++i)
            func(array[i]);
    }
    ```
    This works with arrays of `int`, `std::string`, or custom types, with functions like `print` or `increment`.
  - **Exercise 02**: `Array<T>` is a class template that manages a dynamic array of type `T`, with features like subscript access and bounds checking:
    ```cpp
    template <typename T>
    class Array
    {
    private:
        T* _data;
        unsigned int _size;
    public:
        T& operator[](unsigned int index)
        {
            if (index >= _size) throw std::exception();
            return _data[index];
        }
    };
    ```
    It supports any type `T` and ensures deep copying for independence.
- **Why It Matters**: Templates reduce code duplication, enable type-safe generic programming, and prepare you for advanced C++ libraries (e.g., STL in later modules). In C++98, template definitions must be in header files (or `.tpp` files included in headers) due to compiler requirements.
- **Example**:
  ```cpp
  int a = 2, b = 3;
  swap(a, b); // Uses template with T = int
  std::string s1 = "apple", s2 = "banana";
  swap(s1, s2); // Uses template with T = std::string
  ```

### Other Key Concepts
- **Orthodox Canonical Form**: Ensures classes (`Array<T>` in Ex02) have proper construction, copying, assignment, and destruction, preventing issues like shallow copies or memory leaks.
- **Memory Management**: Uses `new[]` and `delete[]` in `Array<T>`, with deep copying to ensure independent copies. Verified with `valgrind`.
- **Exception Handling**: Throws `std::exception` for out-of-bounds access in `Array<T>`, ensuring robust error handling.
- **Function Pointers**: Used in `iter` to pass functions as parameters, allowing flexible operations on array elements.

## 📝 Notes

- **Implementation Details**:
  - Templates in header files use include guards to prevent double inclusion.
  - `Array<T>` uses `.tpp` file for implementation, as allowed by the subject.
  - Deep copying in `Array<T>` ensures modifying a copy doesn’t affect the original.
  - `iter` handles edge cases (null pointer, negative/zero length) gracefully.
- **Testing**:
  - Test programs cover multiple types (`int`, `float`, `std::string`, custom classes) and edge cases (null pointers, invalid lengths, out-of-bounds access).
  - `valgrind` ensures no memory leaks in Ex02.
- **Evaluation**:
  - Outputs match subject requirements (e.g., correct `swap` results, exception messages).
  - Adheres to 42’s coding standards (readable code, proper naming, no forbidden features).

## 📜 License

This project is licensed under the [MIT License](LICENSE).

## 👤 Author

**mde-agui**  
GitHub: [mde-agui](https://github.com/mde-agui)

---

⭐️ If you find this project useful, consider giving it a star on GitHub!
