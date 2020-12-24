Maps are the associative container, which facilitates to store the elements formed by a combination of key value and mapped value in a specific order. In a map container the data is internally always sorted with the help of its associated keys. The values in the map container are accessed by its unique keys.

map::operator[] is a reference operator. This operator is used to access the element in the container by its key.

If there is no key matching in the container, then the operator inserts a new element with that key and returns the reference of the mapped value. This operator works the same as the map::at(), the only difference is that at() throws an exception when the key is not present in the map container.
