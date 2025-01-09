ulong __rustcall uu_ls::get_block_size(uint param_1,long param_2,ulong param_3,char param_4)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_1 & 0xb000 | 0x4000) == 0x6000) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2 << 9;
  }
  if (param_4 != '\0') {
    return uVar2;
  }
  if (param_3 == 0) {
    core::panicking::panic_const::panic_const_div_by_zero(&PTR_DAT_00312670);
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  if ((uVar2 | param_3) >> 0x20 == 0) {
    return (uVar2 & 0xffffffff) / (param_3 & 0xffffffff);
  }
  return uVar2 / param_3;
}