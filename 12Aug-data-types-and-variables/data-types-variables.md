#### Identifiers
- Identifiers are the names that identify programming elements such as variables and functions in a program.
- ![sample_variable.cpp](./resource/cpp%20sample%20code.jpeg)

- As you see in program, `main`, `number1`, `number2`, `number3`, are the names of
things that appear in the program. In programming terminology, such names are called identifiers.
- All identifiers must obey the following rules:
    - An identifier is a sequence of characters comprising letters, digits, and underscores(_).
    - An identifier must start with a letter or an underscore; it cannot start with a digit.
    - An identifier cannot be a reserved(keyword) word.
    - An identifier can be of any length, but your C++ compiler may impose restriction. Use identifiers of 31 characters or fewer to ensure portability.

#### Variables
- Variables are used to represent values that may be changed in the program.
- Variables are used to store values to be used later in a program. They are called variables because their values can be changed.
- Variables are used to represent data of a certain type.
- To use a variable, you declare it by telling the compiler its name as well as the type of data it can store. 
- The variable declaration tells the compiler to allocate appropriate memory space for the variable based on its data type.
- The syntax for declaring a variable is
    ```
        datatype variable_name;
    ```