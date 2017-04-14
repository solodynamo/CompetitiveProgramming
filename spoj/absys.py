for i in range(int(input())):
    line = input().split()
    for item in line:
        if "machula" in item:
            pos = line.index(item)
    if pos == 0:
        line[2], line[4] = int(line[2]), int(line[4])
        print("{} + {} = {}".format(line[4] - line [2], line[2], line[4]))
    elif pos == 2:
        line[0], line[4] = int(line[0]), int(line[4])
        print("{} + {} = {}".format(line[0], line[4] - line[0], line[4]))
    else:
        line[0], line[2] = int(line[0]), int(line[2])
        print("{} + {} = {}".format(line[0], line[2], line[0] + line[2]))
