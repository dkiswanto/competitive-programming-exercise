## Math Cheatsheet

[Faktor Bilangan]
* Faktor suatu bilangan bulat N adalah bilangan-bilangan bulat positif yang habis membagi N.
* Ex : 20 % 5 == 0, berarti 5 adalah faktor dari 20.

[Bilangan Prima]
* Constraint pencarian dari bilangan prima suatu angka N adalah dari 1 s.d sqrt(N)
- Membangkitkan Bil Prima Effisien : Sieve of Erathostenes.

[Math Tricks]
-  n! % k (apabila overflow gunakan sifat modulo)
- a/b mod n == (a x b**-1) mod n

[Subset]
- subsets of {0, 1, 2} are ; {null} , {0}, {1}, {2}, {0, 1}, {0, 2}, {1, 2} and {0, 1, 2}

[Graph]
- Graph consist nodes/vertex, and edges
- a different connected graphs are called components
- nodes are neighbors/ adjacent if there is an edge between them, degree is the number of adjacent
+ Graph Representation
    - Adjacency list ( array of vector ) benefit easy to process
    - Adjacency matrix, representation cannot be used if the graph is large.
    - Edge list, want to process edge only, not nodes
