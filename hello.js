// To profile:
// time node ./hello.js

const g = () => {
  return 1;
}

const fun_ptr = g;

let i, j, ret = 0;
for (i = 0; i < 40; i++)
  for (j = 0; j < 1000000000; j++)
    ret += fun_ptr();
return ret;