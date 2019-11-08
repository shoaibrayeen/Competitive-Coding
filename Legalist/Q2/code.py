def advanced_sort(Node):
    Node.sort(reverse = True)
    length = len(Node)
    result = []
    i = 0
    while i < length:
        subsetList = []
        subsetList.append(Node[i])
        flag = True
        j = 1
        while i + j < length and Node[i] == Node[i + j]:
            subsetList.append(Node[i+1])
            flag = False
            i = i + 1
        i = i + 1
        result.append(subsetList)
        del(subsetList)
    return result

def main():
    assert advanced_sort([1,2,1,2]) == [[2,2], [1,1]]
    assert advanced_sort([3,2,1,2]) == [[3], [ 2,2 ], [1]]
    
if __name__ == "__main__":
    main() 
