mod = long("1298074214633706835075030044377087");

testCases = input();
outputs = [1] * int(testCases);
counter = 0;

while(counter <  testCases) :
    ip = input();
    ans = ((2 ** (ip+1))-1) % mod;
    outputs[counter] = ans;
    counter = counter + 1;

counter = 0
while(counter < testCases):
    print(outputs[counter]);
    counter = counter+1;
