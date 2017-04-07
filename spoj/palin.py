testCases = input();
flag = 0;
inputs = [1] * int(testCases);
while(flag < testCases) :
 inputs[flag] = input();
 flag = flag+1;

def nextPalindrome(num):
    length=len(str(num))
    oddDigits=(length%2!=0)
    leftHalf=getLeftHalf(num)
    middle=getMiddle(num)
    if oddDigits:
        increment=pow(10, length/2)
        newNum=int(leftHalf+middle+leftHalf[::-1])
    else:
        increment=int(1.1*pow(10, length/2))
        newNum=int(leftHalf+leftHalf[::-1])
    if newNum>num:
        return newNum
    if middle!='9':
        return newNum+increment
    else:
        return nextPalindrome(roundUp(num))

def getLeftHalf(num):
    return str(num)[:len(str(num))/2]

def getMiddle(num):
    return str(num)[(len(str(num))-1)/2]

def roundUp(num):
    length=len(str(num))
    increment=pow(10,((length/2)+1))
    return ((num/increment)+1)*increment

flag = 0;

while(flag < testCases) :
 ans = nextPalindrome(inputs[flag]);
 print(ans);
 flag = flag+1;
