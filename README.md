# Staline Sort

Welcome to my Staline sort C implementation !

## How it works

You iterate over the array, if an element isn't sorted then you remove it from the array.
But the problem is that you can often get an array with very few elements if the first integers are pretty big.
So I made a method to check the biggest possible resulting array in O(n²).
