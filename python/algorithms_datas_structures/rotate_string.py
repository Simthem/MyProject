def rotate_string(str1, str2):

    if str1 == "" and str2 == "":
        return True;
    if len(str1) != len(str2):
        return False;
    for i in range(len(str2)):
        if str1[0] == str2[i]:
            temp = str2[i:len(str2)] + str2[0:i];
            if str1 == temp:
                return True;
        
    return False;
