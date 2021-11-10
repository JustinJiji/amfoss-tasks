test = int(input())
for i in range(test):
    num,maxDigit = map(int, input().split())
    array = list(map(float, input().strip().split()))
    array.sort()
    if maxDigit == 0:
        print(array[num-1])
    else:
        print(max(abs(array[0]),abs(array[num-1])))


