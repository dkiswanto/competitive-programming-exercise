## C++ Usage

#### [Compile]
- Compfest7: g++ [source.cpp] -O2 -s -static -lm -std=c++11 -o [executable];

#### [Range Variable]
- int (2^32) = 32 bit / 4 bytes, 2 Billion -> 2.147.483.648
- long (2^64) = 64 bit /8 bytes - 9.223.372.036.854.775.807
- float -> precision 7

#### [std::String in C++ 11]
- http://www.cplusplus.com/reference/string/string/
- get length of char size / length
- max_size() string == 9223372036854775807
- find() return size_t (int position)
- mystring.find('c') -> return position index;
- mystring.substr(3,4); //return substring from index 3 and has length 4
- mystring.erase(2,1); // erase string from index 2, with 1 character

#### [STD Algorithm]
- std::transform(v.begin(), v.end(), v.begin(), function) -> will change each element based on function
- std::find(begin,end,elm_search) -> return iterator, check found or not by using (it != end)
- std::reverse(begin,end) -> reverse a container / string
- std::lower_bound(arr.begin(), arr.end(), x) -> search in sorted array (binary search)
- std::stoi(string) -> to convert string to integer, stod -> to double
- std::for_each(begin, end, function) -> iterate all element and process it in function
- std:max_element(begin, end) -> return iterator, *it for elemen, distance(begin, it) -> for position

#### [Vector C++]
- vector can be set initial value = vector<int> v(10, 5); // size 10, initial value 5
- searching using find();

#### [Set C++]
- All Element are distinct (count() function return 0 / 1, available or not)
- maintains the order of the elements (automatically ordered)
- using unordered_set (more faster), not necessary to maintain order data.
- using multiset if you want multiple instances of an element. multiset.count(elm) -> can return > 1
- lower_bound(x) returns an iterator to the smallest element in the set whose value is at least “x”
- upper_bound(x) returns an iterator to the smallest element in the set whose value is larger than “x”

#### [Map C++]
- Key-value data structure
- Automatically Ordered by Key

#### [Array Primitive]
- Sort Example sort(array, array + 3); // 3 == size array
- Reset Array : memset(arr, 0, sizeof(arr));

#### [Bitset]
- bitset<10> s(string("0010011010")); // from right to left
- values of a bitset can be efficiently manipulated using bit operators, & (AND), | (OR), ^ (XOR)

#### [Pair & Tuple]
- pair<int, int>, pair only has 2 attribute, 'first' and 'second' just like map.
- TODO ADD TUPLE DOCUMENTATION