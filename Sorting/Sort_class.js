class Sort {
  constructor(arr) {
    this.arr = arr;
  }

  insertionSort() {
    let length = this.arr.length;

    for (let i = 1; i < length; i++) {
      let curr = this.arr[i]; // store the ele being shifted
      let j = i - 1;

      while (j >= 0 && this.arr[j] > curr) {
        this.arr[j + 1] = this.arr[j]; // shift
        j--;
      }

      this.arr[j + 1] = curr; // insert
    }

    return this.arr;
  }
}

let arr = [8, 7, 6, 5, 4, 3, 2];
let sortedClass = new Sort(arr);
let sortedArray = sortedClass.insertionSort();
console.log(sortedArray);
