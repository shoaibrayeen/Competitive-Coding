def solve(row,col):
    for i in range(0,len(row)):
        col.sort(reverse = True)
        temp = row[i]
        if temp > len(col):
            return False
        if temp != 0:
            for j in range(0,temp):
                col[j] = col[j] - 1

    for i in range(0,len(col)):
        if col[i] != 0:
            return False

    return True

for t in range(int(input())):
    first = input()
    second = input().split(' ')
    third = input().split(' ')
    row = []
    col = []
    print(type(second))
    for i in range(len(second)):
        row.append(int(second[i]))
    for i in range(len(third)):
        col.append(int(third[i]))
    
    if solve(row,col) == True:
        print("YES\n")
    else:
        print("NO\n")
