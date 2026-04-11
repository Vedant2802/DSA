
class Sort:
    def __init__(self, arr: list):
        self.value = arr
    
    def insertion_sort(self):
        arr = self.value
        n = len(arr)

        for i in range(n):
            j = i - 1

            while j >= 0 and arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                j -= 1
        
        return arr


array = [8,7,6,5,4,3,2]
sort_class = Sort(array)
sorted_array = sort_class.insertion_sort()
print(sorted_array)