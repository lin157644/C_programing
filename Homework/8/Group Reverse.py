g = int(input())
s = input()
for i in range(1, g+1):
    for j in range( int(len(s)/g) ):
        print( s[ int(i*len(s)/g) - j - 1 ], end="")