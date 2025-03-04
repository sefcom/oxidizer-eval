long _ZN5uu_dd10calc_bsize17h13ab530ab475ef72E(ulong param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = _ZN3gcd12binary_usize17hd3a68b124c884425E();
  if (uVar2 != 0) {
    if ((uVar2 | param_1) >> 0x20 == 0) {
      param_1 = (param_1 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      param_1 = param_1 / uVar2;
    }
    return param_1 * param_2;
  }
  _ZN4core9panicking11panic_const23panic_const_div_by_zero17haded503194f0bf6eE(&PTR_DAT_002611e8);
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}