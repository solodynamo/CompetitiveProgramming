input1 = [1] * int(10);
input2 = [1] * int(10);
output1 = [1] * int(10);
output2 = [1] * int(10);
flag = 0;

def calculate(prey1 , prey2) :
    natalia = (prey1 - prey2)/2;
    klaudia = prey1 - natalia;
    return [natalia, klaudia]

while(flag < 10) :
    input1[flag] = input();
    input2[flag] = input();
    [output1[flag],output2[flag]] = calculate(input1[flag], input2[flag]);
    flag = flag+1;

flag = 0;
while(flag < 10) :
    print(output2[flag]);
    print(output1[flag]);
    flag = flag+1;
