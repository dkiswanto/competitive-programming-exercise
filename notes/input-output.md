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

// infinite case but get a breakpoint (ex:0)
while (cin >> x, x != 0) {
    // code
}

```
``` python3
# Python 3
import sys
try:
    for line in sys.stdin: # sys.stdin.readlines() must press ctrl+d to output
        data = line.strip() # data is <class'str'>

        # code here

except KeyboardInterrupt: # except EOF Error

    # screen output often waits until it receives a newline before displaying anything.
    # flush() makes sure it all gets written *right now*.

    sys.stdout.flush()
    pass
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
printf("%.2f", x); // ouptut 123.46
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
