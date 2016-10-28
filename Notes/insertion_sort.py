def insertion_sort(alist):
    """Performs insertion sort on a list of integers"""

    for i in range(1, len(alist)):
        j = i

        while j > 0 and alist[j] < alist[j-1]:
            alist[j], alist[j-1] = alist[j-1], alist[j]
            j = j - 1



alist = [0, 4, 1 ,10 , 5]

insertion_sort(alist)

print alist
