void __rustcall uu_du::StatPrinter::convert_size(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong local_10;
  ulong local_8;
  
  local_10 = param_3;
  if (*(long *)(param_2 + 0x20) == 0) {
    uucore::features::format::human::human_readable(param_1,param_3,2);
    return;
  }
  if ((int)*(long *)(param_2 + 0x20) == 1) {
    uucore::features::format::human::human_readable(param_1,param_3,1);
    return;
  }
  if (*(char *)(param_2 + 0x49) == '\0') {
    uVar1 = *(ulong *)(param_2 + 0x28);
    if (uVar1 == 0) {
      core::panicking::panic_const::panic_const_div_by_zero(&PTR_DAT_00284618);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_3 | uVar1) >> 0x20 == 0) {
      uVar3 = (param_3 & 0xffffffff) / (uVar1 & 0xffffffff);
      param_3 = (param_3 & 0xffffffff) % (uVar1 & 0xffffffff);
    }
    else {
      uVar3 = param_3 / uVar1;
      param_3 = param_3 % uVar1;
    }
    local_8 = (uVar3 + 1) - (ulong)(param_3 == 0);
    puVar4 = &local_8;
  }
  else {
    puVar4 = &local_10;
  }
  _<T_as_alloc::string::ToString>::to_string(param_1,puVar4);
  return;
}