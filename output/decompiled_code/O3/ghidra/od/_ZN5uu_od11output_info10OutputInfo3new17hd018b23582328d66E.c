long __rustcall
uu_od::output_info::OutputInfo::new
          (long param_1,ulong param_2,long param_3,long param_4,undefined param_5)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_38;
  
  lVar3 = param_3 + param_4 * 0x28;
  uVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::fold
                    (param_3,lVar3);
  local_38 = uVar2;
  lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::fold
                    (param_3,lVar3,&local_38);
  if (uVar2 != 0) {
    if ((uVar2 | param_2) >> 0x20 == 0) {
      uVar4 = (param_2 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      uVar4 = param_2 / uVar2;
    }
    create_spaced_formatter_info(param_1,param_3,param_4,uVar2);
    *(ulong *)(param_1 + 0x18) = param_2;
    *(ulong *)(param_1 + 0x20) = uVar4 * lVar3;
    *(ulong *)(param_1 + 0x28) = local_38;
    *(undefined *)(param_1 + 0x30) = param_5;
    return param_1;
  }
  core::panicking::panic_const::panic_const_div_by_zero(&DAT_00241590);
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}