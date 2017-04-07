testCases = input();
flag = 0 ;

inputs = [1] * int(testCases);
outputs = [1] * int(testCases);

def calculate(prey):
    power = 1;
    zeroes = 0;
    while(5**power <= prey):
        zeroes = prey/(5**power) + zeroes;
        power = power+1;
    return zeroes;

while(flag < testCases) :
    inputs[flag] = input();
    outputs[flag] = calculate(inputs[flag]);
    flag = flag+1;

flag = 0;
while(flag < testCases) :
    print(outputs[flag]);
    flag = flag+1;
