ulong _ZN2rg8haystack8Haystack11is_explicit17h64cc0399f7646269E(long *param_1)

{
  ulong uVar1;
  
  if (*param_1 == 0) {
    return 1;
  }
  if (param_1[4] != 0) {
    return 0;
  }
  uVar1 = _ZN2rg8haystack8Haystack6is_dir17hd6f752fd2c8f0e5cE();
  return uVar1 ^ 1;
}