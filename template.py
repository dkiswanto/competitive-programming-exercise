import sys

# Infinite Case
try:
    for line in sys.stdin:
        data = line.strip()
        # code here

except KeyboardInterrupt: # except EOF Error
    sys.stdout.flush()

# Input standard
x, y, z = map(int, input().split())

print("{}-{}-{}".format(x,y,z))