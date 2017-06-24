import sys
for line in sys.stdin.readlines():
    # data is <class'str'>
    # method strip remove '\n'
    data = line.strip()

    # use map to convert to variable int
    x, y = map(int, data.split())

    print(abs(x-y))