# Final Exam Exercises - Programming Languages: C/C++

This repository contains solutions to the final exam exercises from the course "Programming Languages: C/C++". The exercises are organized into separate files and subfolders.

## Exercises

### 1. Lightbulbs Problem

**Problem Statement:**

You are given an array `A` of size `N`, where `A[i]` represents the index of the bulb that is turned on at the i-th moment (with 1-based indexing). Initially, all bulbs are off.

A bulb is considered "shining" if:

- It is turned on.
- All previous bulbs (from 1 to its index) are also turned on.

The goal is to find how many moments occur where all bulbs that are on are also shining. Specifically, for each moment `i`, you need to determine if the bulbs turned on from the 1st to the i-th moment are shining, and count how many such moments exist.

**Example:**

- **Input:** `A = [2, 1, 3, 5, 4]`
- **Output:** `3`

Explanation: The shining moments occur at moments 2, 3, and 5, because at these moments, all the bulbs that are turned on so far are shining.

**Code:**

The solution for this problem is available in the `Task 1` subfolder, which includes:


- `Lightbulbs.cpp` - C implementation of the Lightbulbs problem.

### 2. Complex Number Operations

**Problem Statement:**

Define a class `Complex` with two private members to store the real and imaginary parts of a complex number. Implement a constructor to initialize the complex number.

Implement member functions to add and subtract two complex numbers. These functions should take a pointer to another `Complex` object as a parameter and return a new `Complex` object.

Implement a member function to display the complex number.

**Code:**

The solution for this problem is available in the `Task 2` subfolder, which includes:

- `main.cpp` - Contains the main function and test cases.
- `Complex.h` - Header file for the `Complex` class.
- `Complex.cpp` - Implementation of the `Complex` class methods.
- `Project_version.dev` - Project form of the above.



---
