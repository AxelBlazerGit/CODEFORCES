def check_pattern(string):
    length = len(string)
    if length < 3:
        return string == '11' or string == '14' or string== '1'
    if string[0] == '4':
        return False
    for i in range(length - 2):
        if string[i:i+3] not in ['111', '141', '114','144','411','441','414']:
            return False
    
    # If no invalid patterns found, return True
    return True
# input_string = input()
# result = 
print( "YES" if check_pattern(input()) else "NO")
