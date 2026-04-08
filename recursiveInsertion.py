# def recursive_insert(arr):
#     n = len(arr)

#     if n <= 1:
#         return arr

#     sorted_array = recursive_insert(arr[:-1])

#     last_ele = arr[-1]

#     sorted_array.append(last_ele)

#     i = len(sorted_array) - 2

#     while i >= 0 and sorted_array[i] > last_ele:
#         sorted_array[i + 1] = sorted_array[i]
#         i -= 1

#     sorted_array[i + 1] = last_ele

#     return sorted_array


# print(recursive_insert([1,6,7,2]))



# swap based method
# def insertion_sort(arr):

#     for index in range(len(arr)):
#         j = index-1
#         while j >= 0 and arr[j+1] < arr[j]:
#             temp = arr[j+1]
#             arr[j+1] = arr[j]
#             arr[j] = temp
#             j -= 1
        
#     return arr

# print(insertion_sort([1,8,4,2]))

# classic version shift based insertion
# There is a misunderstanding in my imagination , i was thinking that while loops keeps on running

def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]          
        j = i - 1

        # Shift elements greater than key to the right
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
            print(arr , "after shift")
            # print(j)

        # Insert key at correct position
        arr[j + 1] = key
        print(arr , 'after adding key')
    return arr

insertion_sort([5,4,3,2,1])