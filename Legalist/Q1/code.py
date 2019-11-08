def balanced(string):
    length = len(string)
    if length == 1:
        return True
    i = 1
    while string[i] == string[i - 1] and i < length:
        i = i + 1
    
    j = i
    
    while j < length:
        itr = 0
        while j + itr < length and string[j] == string[j + itr] and itr < i:
            itr = itr + 1
            if j + itr < length and string[j] == string[ j + itr] and itr == i:
                return False
        if itr != i:
            return False
        
        j = j + i
    
    return True

def main():
    assert balanced("xxxyyyzzz") == True
    assert balanced("pqq") == False
    assert balanced("yyyxxx") == True
    assert balanced("x") == True
    
if __name__ == "__main__":
    main() 
