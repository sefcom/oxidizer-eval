void _ZN5uu_du11StatPrinter12convert_size17he529e362fc7c1e00E
               (undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong local_10;
  ulong local_8;
  
  local_10 = param_3;
  if (*(long *)(param_2 + 0x20) == 0) {
    _ZN6uucore8features6format5human14human_readable17h9f8a5d008cf29026E(param_1,param_3,2);
    return;
  }
  if ((int)*(long *)(param_2 + 0x20) == 1) {
    _ZN6uucore8features6format5human14human_readable17h9f8a5d008cf29026E(param_1,param_3,1);
    return;
  }
  if (*(char *)(param_2 + 0x49) == '\0') {
    uVar1 = *(ulong *)(param_2 + 0x28);
    if (uVar1 == 0) {
      _ZN4core9panicking11panic_const23panic_const_div_by_zero17haded503194f0bf6eE
                (&PTR_DAT_00284618);
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
  _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h2f753f516b2c872eE(param_1,puVar4);
  return;
}