## 0x1A. C - Hash tables

#### General:
	* What is a hash function
	* What makes a good hash function
	* What is a hash table, how do they work and how to use them
	* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
	* What are the advantages and drawbacks of using hash tables
	* What are the most common use cases of hash tables


#### Tasks:

##### 0. >>> ht = {}
	Write a function that creates a hash table.
		Prototype hash_table_t *hash_table_create(unsigned long int size);
			Where "size" is the size of the array
		Returns a pointer to the newly created hash table.
		if something went wrong, your function should return NULL

