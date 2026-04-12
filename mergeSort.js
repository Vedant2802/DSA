function mergeSort(arr, l, r) {
  if (l == r) {
    return arr;
  }

  let m = Math.floor((r + l) / 2);

  mergeSort(arr, l, m);
  mergeSort(arr, m + 1, r);

  merge(arr, l, m, r);

  return arr;
}

// the two subarrays are [l .... m] and [m+1 .... r]

function merge(arr, l, m, r) {
  let length1 = m - l + 1;
  let length2 = r - m;

  // create temp arrays

  let L = new Array(length1);
  let R = new Array(length2);

  // copy the sorted Left and Right halves in the temporary arrays

  for (let i = 0; i < length1; i++) {
    L[i] = arr[l + i];
  }

  for (let j = 0; j < length2; j++) {
    R[j] = arr[m + 1 + j];
  }

  // Initial indexes of left and right subarrays
  let i = 0; // index for left
  let j = 0; // index for right
  let k = l; // Initial index of merged subarray array

  while (i < length1 && j < length2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  // One of the halfs will have elements remaining
  while (i < length1) {
    arr[k] = L[i];
    i++;
    k++;
  }
  while (j < length2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}
