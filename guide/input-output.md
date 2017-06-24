## Input

### String Based
* Input : ``` Hello this is string with space! ```
``` c++
string text;
getline(cin, text, '\n');
cout << text << endl;
```

### Infinite Case
``` c++
// c++
int x;
while (cin >> x) {
    // code
}
```
``` python3
# Python 3
import sys
for line in sys.stdin.readlines():
    data = line.strip()
    // code
    // data is <class'str'>
    // press ctrl+d to finish input
```
``` java
// java
import java.util.Scanner;

Scanner scan = new Scanner(System.in);
while (scan.hasNext()){
    int num = scan.next();
    // code
}

```


## Output
### Precision (Point)
``` c++
// #include <iomanip>
// fixed identifier from import
cout << fixed << setprecision(2) << OUTPUT_VAR_DOUBLE << "\n";
```
or 
``` c++
// import #include <stdio.h>
double x = 123.45678
printf("%.2f\n", x); // ouptut 123.46
```

## IO Redirection
* input.txt // test case code
* output.txt // empty file, filled with program
```
$ g++ program.cpp -o program
$ ./program < input.txt // for read case from file
$ ./program > output.txt // save output to file
$ ./program < input.txt > output.txt // read from & save to files
```

or at the program
```
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
```
