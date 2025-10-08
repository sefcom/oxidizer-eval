ulong _ZN4just9attribute9Attribute12discriminant17habfb87751dacf735E(long param_1)

{
  ulong uVar1;
  
  uVar1 = 0x10;
  if (param_1 + 0x7fffffffffffffffU < 0x14) {
    uVar1 = param_1 + 0x7fffffffffffffffU & 0xffffffff;
  }
  return uVar1;
}