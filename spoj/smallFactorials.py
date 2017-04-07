testCases = input();
inputs = [1] * int(testCases);
outputs = [1] * int(testCases);
flag = 0;


def calculate(prey):
    facto = 1;
    while(prey > 0):
        facto = facto* prey;
        prey = prey -1;
    return facto;



while(flag < testCases) :
    inputs[flag] = input();
    outputs[flag] = calculate(inputs[flag]);
    flag = flag+1;

flag = 0;
while(flag < testCases) :
    print(outputs[flag]);
    flag = flag+1;
