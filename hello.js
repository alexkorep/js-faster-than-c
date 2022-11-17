const g = () => 1;
const f = () => 1;

let fun_ptr = g;

if (process.argv.length > 1) {
  fun_ptr = g;
} else {
  fun_ptr = f;
}

let i, j, ret = 0;
for (i = 0; i < 40; i++)
  for (j = 0; j < 1000000000; j++)
    ret += fun_ptr();
console.log(ret);
return ret;
