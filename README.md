# Sample app to prove that JavaScript is faster than C

## How to benchmark C app

```
gcc -Wall -O3 hello.c -o hello
time ./hello
```

## How to benchmark JS app

```
time node ./hello.js
```

## Results

![benchmarking](profile-screenshot.png "Benchmarking screenshot")

- C, seconds: `38.154 total`
- JS, seconds: `37.332 total`

Tested on MacBook Pro (13-inch, M1, 2020), MacOS version 11.5 (20G71), 16 GB RAM
