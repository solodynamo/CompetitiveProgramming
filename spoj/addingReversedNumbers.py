testCases = input();
input1 = [1] * int(testCases);
input2 = [1] * int(testCases);
outputs = [1] * int(testCases);
flag = 0;

def calculate(prey1, prey2):
    p1 = int(str(prey1[::-1]));
    p2 = int(str(prey2[::-1]));
    ans = str(p1+p2)[::-1];
    return ans


while(flag < testCases) :
    input1[flag], input2[flag]= raw_input().split();
    # input2[flag] = input();
    outputs[flag] = calculate(input1[flag], input2[flag]);
    flag = flag+1;

flag = 0;
while(flag < testCases) :
    print(outputs[flag].lstrip('0') );
    flag = flag+1;
