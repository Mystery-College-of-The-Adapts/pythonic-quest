def selection_sort(alist):
    n = len(alist)
    min = -1

    for i in range(n):

        min = i
        for j in range(i+1, n):
            if alist[j] < alist[min]:
                min = j

        alist[i], alist[min] = alist[min], alist[i]




alist = [0,4,1,5]

selection_sort(alist)

print alist