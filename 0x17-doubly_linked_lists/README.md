# Doubly Linked Lists - 0x17. C

![Doubly Linked Lists](https://img.shields.io/badge/Doubly%20Linked%20Lists-0x17.C-blue)

This repository contains C code for a project that focuses on doubly linked lists. It is part of the curriculum in the C programming track, where you will learn how to work with and implement doubly linked lists, a fundamental data structure in computer science.

## Table of Contents

- [Project Overview](#project-overview)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [File Descriptions](#file-descriptions)
- [Usage](#usage)
- [Authors](#authors)
- [License](#license)

## Project Overview

The "0x17. C - Doubly Linked Lists" project is designed to introduce you to the concept of doubly linked lists in C. A doubly linked list is a data structure that consists of nodes, each of which has a value and two pointers, one pointing to the previous node and one pointing to the next node.

### Timeline

- **Project Start Date:** October 11, 2023, 7:00 PM
- **Project End Date:** October 12, 2023, 7:00 PM
- **Checker Release Date:** October 12, 2023, 1:00 AM
- **Auto Review:** An automatic review will be launched at the deadline.

### Learning Objectives

By the end of this project, you are expected to:

- Understand what a doubly linked list is.
- Know how to use doubly linked lists.
- Implement various operations (deletion, insertion, etc.) with doubly linked lists.
- Learn to find the right source of information without excessive external help.

### Copyright and Plagiarism

- You are responsible for solving the project tasks yourself to meet the learning objectives.
- Plagiarism is strictly forbidden and will result in removal from the program.
- You are not allowed to publish any content of this project.

## Requirements

### General

- **Allowed Editors:** vi, vim, emacs
- All code will be interpreted/compiled on Ubuntu 20.04 LTS using Python3 (version 3.8.5).
- All code files should end with a new line.
- A `README.md` file, at the root of the project folder, is mandatory.
- Your code should adhere to the Betty style, which will be checked using `betty-style.pl` and `betty-doc.pl`.
- Global variables are not allowed.
- Each C source file should contain no more than 5 functions.
- The only C standard library functions allowed are `malloc`, `free`, `printf`, and `exit`.
- The prototypes of all your functions should be included in the header file `lists.h`. Don't forget to push your header file.
- All your header files should be include guarded.

### Data Structure

Please use the following data structure for this project:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

