while True:
    no1, no2, no3 = [int(x) for x in raw_input().split()]
    if no1 == 0 and no2 == 0 and no3 == 0:
        break

    elif no2 - no1 == no3 - no2:
        print 'AP', no3 + (no2 - no1)

    elif no2/no1 == no3/no2:
        print 'GP', no3 * (no2/no1)
