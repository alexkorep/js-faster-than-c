# Sample app to prove that JavaScript is faster than C

## How to benchmark C app

```
gcc -Wall -O3 -flto hello.c -o hello
time ./hello
```

## How to benchmark JS app

```
time node ./hello.js
```

## Results

![benchmarking](profile-screenshot.png "Benchmarking screenshot")

- C, seconds: `37.762 total`
- JS, seconds: `36.996 total`

Tested on MacBook Air (13-inch, M1, 2020), MacOS version 12.6 (21G115), 8 GB RAM
Node.js v16.13.1
GCC Apple clang version 14.0.0 (clang-1400.0.29.102)
