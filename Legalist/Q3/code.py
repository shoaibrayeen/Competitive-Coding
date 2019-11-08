def find_emailst(fileName):
    try:
        fIn = open(fileName, 'r')
    except IOError:
        print('Problem in opening the file');
        sys.exit()
    import re
    line = fIn.readline()
    result = []
    while(line != ''):
        allMatchesInALine = re.findall('[a-zA-Z0-9_.]+@[a-zA-Z0-9.]+', line) 
        line = fIn.readline()
        for i in range(len(allMatchesInALine)):
            result.append(allMatchesInALine[i])
    fIn.close()
    # sort() will sort the strings. 
    result.sort()
    allEmailsinLexicographicalOrder = ''
    for i in range(len(result)):
        allEmailsinLexicographicalOrder += result[i] + ','
    allEmailsinLexicographicalOrder = allEmailsinLexicographicalOrder[:-1]
    return allEmailsinLexicographicalOrder
def main():
    #Printing Emails
    print(find_emailst("input00.txt"))
    print('\n')
    print(find_emailst("input01.txt"))
    print('\n')
    print(find_emailst("input02.txt"))
    
    #calling using Assert
    assert find_emailst("input00.txt")
    assert find_emailst("input01.txt")
    assert find_emailst("input02.txt")
    
if __name__ == "__main__":
    main() 
