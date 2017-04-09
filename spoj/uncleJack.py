#one cd can be given in 3 ways

while 1:
    nephew ,cd = raw_input().split(' ');
    if nephew == "0" and cd == "0":
        break;
    else :
        print (int(nephew) ** int(cd));
