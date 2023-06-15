## 0x0B. c - malloc, free

### General
* The difference between automatic and dynamic allocation
* malloc and free and how to use them.
* importance of malloc
* Valgrind and how to check for memory leak.

### TASKS:

#### 0. Float like a butterfly, sting like a bee
* A function that creates an array of chars and initialize a specific char.
* Returns NULL if size = 0.
* Returns a pointer to the array, or NULL if it fails.

#### 1. The woman who has no imagination has no wings
* A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
* The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
* Returns NULL if str = NULL
* On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

#### 2. He who is not couraeous enough to take risks will accomplish nothing in life.
* A function that concatenates two strings.
* The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
* if NULL is passed, treat it as an empty string
* The function should return NULL on failure
