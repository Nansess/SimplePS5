# Simple (PS5 PRX)

A basic PS5 PRX (PlayStation Relocatable eXecutable) that provides functions for printing messages, adding numbers, and calculating square numbers. The sole purpose of this PRX is to be stored on GitHub so it can be cloned when needed.
## Introduction

This is a simple console utility implemented as a PS5 PRX (PlayStation Relocatable eXecutable) using C++. It includes several functions to demonstrate basic programming concepts. The utility is designed to be used within a PS5 development environment. (but code isnt usable)

## Features

- Print a message to the console.
- Add two numbers and return the result.
- Calculate the square of a number.

## Usage

### Printing Messages

To print a message to the console, use the `PrintMessage` function and pass a C-style string (const char*) as an argument.

```cpp
#include "stdafx.h"

int main()
{
    PrintMessage("Hello, world!");
    return 0;
}
```

### Printing String Messages

To print a message using `std::string`, use the `PrintStringMessage` function and pass a `std::string` as an argument.

```cpp
#include "stdafx.h"

int main()
{
    std::string message = "Hello, C++!";
    PrintStringMessage(message);
    return 0;
}
```

### Adding Numbers

To add two numbers and get the result, use the `AddNumbers` function.

```cpp
#include "stdafx.h"

int main()
{
    int result = AddNumbers(5, 3);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
```

### Calculating Square Numbers

To calculate the square of a number, use the `SquareNumber` function.

```cpp
#include "stdafx.h"

int main()
{
    int number = 7;
    int squared = SquareNumber(number);
    std::cout << "Square of " << number << " is " << squared << std::endl;
    return 0;
}
```

This project is hosted on GitHub for easy access
