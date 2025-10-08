long _ZN5uu_dd10calc_bsize17hdf3018661f9ee7c0E(ulong param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (*(code *)PTR__ZN3gcd10binary_u6417hd9114b804d0d9df6E_00246d58)();
  if (uVar2 != 0) {
    if ((uVar2 | param_1) >> 0x20 == 0) {
      param_1 = (param_1 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      param_1 = param_1 / uVar2;
    }
    return param_1 * param_2;
  }
  (*(code *)
    PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_00246c78)
            (&PTR_DAT_0023dee8);
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}