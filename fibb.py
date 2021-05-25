#fibb returns the n'th number in the Fibonacci sequence
def fibb(number):
    if number < 0:
        print("Integer must be >= 0")
        return
        
    seq = [0,1]
    while len(seq) < number+1:
        index = len(seq)-1
        seq.append(seq[index-1] + seq[index])
    number += 2
    return seq[number]

i = input("Enter which number in the Fibonacci sequence you would like: ")
print("The number is " + str(fibb(int(i))))
