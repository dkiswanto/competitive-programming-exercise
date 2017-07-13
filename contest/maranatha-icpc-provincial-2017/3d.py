import sys

# Counting Permutation using Python 3

def fact(n):
    temp = 1
    for i in range(1,n+1):
        temp = temp * i
    return temp

try:
    for line in sys.stdin:
        data = line.strip()
        x, y, z = map(int, data.split())

        res = fact(x+y+z) // (fact(x) * fact(y) * fact(z))
        print(res)

except KeyboardInterrupt: # except EOF Error
    sys.stdout.flush()
    pass


# show all constraint answer (1,14)
# for x in range(1,15):
#     for y in range(1,15):
#         for z in range(1,15):
#             res = fact(x+y+z) // (fact(x) * fact(y) * fact(z))
#             print("{} {} {} - {}".format(x,y,z,res))
