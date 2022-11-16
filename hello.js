// To profile:
// time node ./hello.js

const g = () => {
  return 1;
}

const f = () => {
  return 1;
}

let fun_ptr = g;

if (process.argv.length > 2) {
  fun_ptr = g;
} else {
  fun_ptr = f;
}

let i, j, ret = 0;
for (i = 0; i < 40; i++)
  for (j = 0; j < 1000000000; j++)
    ret += fun_ptr();
return ret;