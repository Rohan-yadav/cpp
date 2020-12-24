Maps are the associative container, which facilitates to store the elements formed by a combination of key value and mapped value in a specific order. In a map container the data is internally always sorted with the help of its associated keys. The values in the map container are accessed by its unique keys.

map::operator[] is a reference operator. This operator is used to access the element in the container by its key.

If there is no key matching in the container, then the operator inserts a new element with that key and returns the reference of the mapped value. This operator works the same as the map::at(), the only difference is that at() throws an exception when the key is not present in the map container.

A Map is an associative container that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have same key values.

Functions for maps:

m::find() – Returns an iterator to the element with key value ‘b’ in the map if found, else returns the iterator to end.

m::erase() – Removes the key value from the map.

m:: equal_range() – Returns an iterator of pairs. The pair refers to the bounds of a range that includes all the elements in the container which have a key equivalent to key.

m insert() – To insert elements in the map container.

m size() – Returns the number of elements in the map container.

m count() – Returns the number of matches to element with key value ‘a’ or ‘f’ in the map.


