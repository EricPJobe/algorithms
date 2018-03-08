var insertionSort = function(arr) {
    
    for(let pos=1; pos<arr.length; pos++) {
        let i = pos-1;
        let value = arr[pos];

        while(i<=0 && (arr[pos] > value)) {
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = value;
    }

    for(let j=0; j<arr.length; j++) {
        console.log({arr[j]);
    }
};

var arr = [3, 7, 4, 0, 8, 9];

insertionSort(arr);