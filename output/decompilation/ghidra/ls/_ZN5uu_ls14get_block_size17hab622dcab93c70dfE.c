ulong _ZN5uu_ls14get_block_size17hab622dcab93c70dfE
                (uint param_1,long param_2,ulong param_3,char param_4)

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
    (*(code *)
      PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_0048fd38)
              (&PTR_s_src_uu_ls_src_ls_rs_00386cb8);
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  if ((uVar2 | param_3) >> 0x20 == 0) {
    return (uVar2 & 0xffffffff) / (param_3 & 0xffffffff);
  }
  return uVar2 / param_3;
}