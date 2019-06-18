import math


def addnum(num1, num2):
    return num1 + num2


def subnum(num1, num2):
    return num1 - num2


def multnum(num1, num2):
    return num1 * num2


def divinum(num1, num2):
    return num1 / num2


def modnum(num1, num2):
    return num1 % num2


def pownum(num1, num2):
    return pow(num1, num2)


def resultsin(num1):
    return math.sin(num1)


def resultcos(num1):
    return math.cos(num1)


while True:
    pass
    print '********************CALCULATOR*********************'
    print '1. Addition'
    print '2. Subtraction'
    print '3. Multiplication'
    print '4. Division'
    print '5. Modular Division'
    print '6. Raise x to the power of y'
    print '7. Sine(x)'
    print '8. Cosine(x)'
    print '9 - Quit'
    print '***************************************************'
    s = raw_input('Enter a selection please: ')
    try:
        selection = float(s)
    except:
        print "ERROR: please make a selection 1-9"
        continue

    if selection == 1:
        while True:
            a = raw_input('Enter first number: ')
            try:
                x = float(a)
                break
            except:
                print "ERROR: please enter a number"
                continue
        while True:
            b = raw_input('Enter second number: ')
            try:
                y = float(b)
                break
            except:
                print "ERROR: please enter a number"
                continue

        result = addnum(x, y)
        print '%r + %r = %r' % (x, y, result)

    elif selection == 2:
        while True:
            a = raw_input('Enter first number: ')
            try:
                x = float(a)
                break
            except:
                print "ERROR: please enter a number"
                continue
        while True:
            b = raw_input('Enter second number: ')
            try:
                y = float(b)
                break
            except:
                print "ERROR: please enter a number"
                continue

        result = subnum(x, y)
        print '%r - %r = %r' % (x, y, result)

    elif selection == 3:
        while True:
            a = raw_input('Enter first number: ')
            try:
                x = float(a)
                break
            except:
                print "ERROR: please enter a number"
                continue
        while True:
            b = raw_input('Enter second number: ')
            try:
                y = float(b)
                break
            except:
                print "ERROR: please enter a number"
                continue

        result = multnum(x, y)
        print '%r * %r = %r' % (x, y, result)

    elif selection == 4:
        while True:
            a = raw_input('Enter first number: ')
            try:
                x = float(a)
                break
            except:
                print "ERROR: please enter a number"
                continue
        while True:
            b = raw_input('Enter second number: ')
            try:
                y = float(b)
                break
            except:
                print "ERROR: please enter a number"
                continue

        result = divinum(x, y)
        print '%r / %r = %r' % (x, y, result)

    elif selection == 5:
        while True:
            a = raw_input('Enter first number: ')
            try:
                x = float(a)
                break
            except:
                print "ERROR: please enter a number"
                continue
        while True:
            b = raw_input('Enter second number: ')
            try:
                y = float(b)
                break
            except:
                print "ERROR: please enter a number"
                continue

        result = modnum(x, y)
        print '%r %% %r = %r' % (x, y, result)

    elif selection == 6:
        while True:
            a = raw_input('Enter first number: ')
            try:
                x = float(a)
                break
            except:
                print "ERROR: please enter a number"
                continue
        while True:
            b = raw_input('Enter second number: ')
            try:
                y = float(b)
                break
            except:
                print "ERROR: please enter a number"
                continue

        result = pownum(x, y)
        print '%r ^ %r = %r' % (x, y, result)

    elif selection == 7:
        while True:
            a = raw_input('Enter first number: ')
            try:
                x = float(a)
                break
            except:
                print "ERROR: please enter a number"
                continue

        result = resultsin(x)
        print 'sin(%r) = %r' % (x, result)

    elif selection == 8:
        while True:
            a = raw_input('Enter first number: ')
            try:
                x = float(a)
                break
            except:
                print "ERROR: please enter a number"
                continue

        result = resultcos(x)
        print 'cos(%r) = %r' % (x, result)

    elif selection == 9:
        break
    else:
        print "ERROR: please make a selection 1-9"

exit(1)
