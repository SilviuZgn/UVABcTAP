def bubbleSort(array):
  for i in range(len(array)):
    for j in range(0, len(array) - i - 1):
        for k in range (1, len(array) -j - 1):
            if array[j] > array[k]:
                temp = array[j]
                array[j] = array[k]
                array[k] = temp


data = [1, 8, 6, -3, 10]

bubbleSort(data)

print('Sorted Array in Ascending Order:')
print(data)

