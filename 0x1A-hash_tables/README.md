# 0x1A. C - Hash Tables

## Table of Contents

- [Project Description](#project-description)
- [Learning Objectives](#learning-objectives)
- [Copyright and Plagiarism](#copyright-and-plagiarism)
- [Requirements](#requirements)
- [Data Structures](#data-structures)
- [Tests](#tests)
- [Python Dictionaries](#python-dictionaries)

## Project Description

0x1A. C - Hash Tables is a programming project in C that focuses on data structures and algorithms related to hash tables. This project is part of the curriculum created by Julien Barbier. The primary goal is to develop a clear understanding of hash tables, their functions, and how to effectively use them in C programming.

- Weight: 1
- Project Duration: November 2, 2023, 5:00 AM - November 4, 2023, 5:00 AM
- Checker Release: November 2, 2023, 5:00 PM
- Auto Review at Deadline

## Learning Objectives

By the end of this project, you are expected to be able to explain the following concepts without relying on external sources:

### General

1. What is a hash function?
2. What makes a good hash function?
3. What is a hash table, how do they work, and how to use them?
4. What is a collision, and what are the main ways of dealing with collisions in the context of a hash table?
5. What are the advantages and drawbacks of using hash tables?
6. What are the most common use cases of hash tables?

## Copyright and Plagiarism

- You are responsible for creating solutions for the project tasks to meet the learning objectives.
- Avoid copying and pasting someone else's work; it will not help you achieve the project's objectives.
- Do not publish any content related to this project.
- Plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### General

- Allowed Editors: vi, vim, emacs
- Compile using gcc on Ubuntu 20.04 LTS with options: -Wall -Werror -Wextra -pedantic -std=gnu89
- All files must end with a new line
- A README.md file at the root of the project folder is mandatory
- Code should adhere to the Betty style, verified using betty-style.pl and betty-doc.pl
- Avoid using global variables
- No more than 5 functions per file
- Allowed to use the C standard library
- Prototypes of all functions should be included in the header file named hash_tables.h
- Don't forget to push your header file
- Use include guards for all header files

## Data Structures

For this project, use the following data structures:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

## Tests

Collaborate on a set of tests to ensure the correctness and functionality of your code.

## Python Dictionaries

Python dictionaries are implemented using hash tables. This project will help you understand the inner workings of Python dictionaries. When you complete this project, you will have a better grasp of how Python dictionaries function. Although Python uses a different implementation, this project lays the foundation for understanding Python dictionaries. If you are curious about how Python dictionaries work under the hood, you can explore it further.

Please note that not all dictionaries are implemented using hash tables, and there is a distinction between a dictionary and a hash table.

For more information, you can read about [how dictionaries are implemented in Python 2.7](https://tech.blog.aknin.name/2012/03/11/what-the-heck-is-p-p-8/). (Not mandatory)

Read more about the [difference between dictionaries and hash tables](https://en.wikipedia.org/wiki/Associative_array#Dictionaries_and_hash_tables) (Not mandatory).