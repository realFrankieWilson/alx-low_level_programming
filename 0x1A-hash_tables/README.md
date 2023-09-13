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


##### 1. djb2
	Wrie a hash function implementing the djb2 algorithm.
		Prototype: unsigned long int hash_djb2(const unsigned char *str);
		You are not allowed to copy and paste the function of (this page)[https://intranet.alxswe.com/rltoken/3B7lCUBD4yZh66Pbl2KcEQ]


##### 2. key->index
	Write a function that gives you the index of a key
		Prototype unsigned long int key_index(const unsigned char *key, unsigned long int size);
			where "key" is the key
			and "size" is the size of the array of the hash table.
		This function should use the "hash_djb2" function that you wrote earler
		Returns the index at which the key/value pair should be stored in the
		array table
		You will have to use this hash function for all the next tasks.


##### 3. >>> ht['betty']='cool'

	Write a function that adds an element to the hash table.
		prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
			Where ht is the hash table to add or update the key/vale to
			key is the key, key can not be an empty string
			and value is the value associated with the key. value must be
			dublicated. value can be an empty string.
		Returns: 1 if it succeeded, 0 otherwise.
		In case of collision, add the new node at the beginning of the list.


##### 4. >>> ht['betty']

	Write a function that retrieves a value associated with a key.

		Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
			where ht is the hash table you want to look into
			and key is the key you are looking for
		Returns the value associated with the element, or NULL if key couldn’t be found

##### 5. >>> print(ht)

	Write a function that prints a hash table.

		Prototype: void hash_table_print(const hash_table_t *ht);
			where ht is the hash table
		You should print the key/value in the order that they appear in the array of hash table
			Order: array, list
		Format: see example
		If ht is NULL, don’t print anything


##### 6. >>> del ht

	Write a function that deletes a hash table.

		Prototype: void hash_table_delete(hash_table_t *ht);
			where ht is the hash table



