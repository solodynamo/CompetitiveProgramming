lengthOfNeedle = input();
needle = raw_input();
haystack = raw_input();
counter = haystack.find(needle);

while(counter > 0 ):
    print counter
    counter = haystack.find(needle, counter+1);
