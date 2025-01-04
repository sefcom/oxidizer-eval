long __rustcall uu_dd::calc_bsize(ulong param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = gcd::binary_usize();
  if (uVar2 != 0) {
    if ((uVar2 | param_1) >> 0x20 == 0) {
      param_1 = (param_1 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      param_1 = param_1 / uVar2;
    }
    return param_1 * param_2;
  }
  core::panicking::panic_const::panic_const_div_by_zero(&PTR_DAT_002611e8);
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}