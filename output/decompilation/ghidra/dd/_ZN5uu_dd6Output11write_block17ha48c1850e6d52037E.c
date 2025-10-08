undefined  [16]
_ZN5uu_dd6Output11write_block17ha48c1850e6d52037E(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar5;
  undefined auVar6 [16];
  ulong local_38;
  ulong uVar4;
  
  puVar1 = 
  PTR__ZN46__LT_uu_dd__Dest_u20_as_u20_std__io__Write_GT_5write17h306764d99c319006E_00246d28;
  uVar5 = 0;
  do {
    while( true ) {
      auVar6 = (*(code *)puVar1)(param_1,param_2 + uVar5,param_3 - uVar5);
      uVar4 = auVar6._8_8_;
      if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
      cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(uVar4);
      if (cVar2 != '#') {
        uVar3 = 1;
        uVar5 = uVar4;
        goto LAB_00190d12;
      }
      local_38 = uVar4;
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h8fa75f22e705d35bE(&local_38);
    }
    uVar5 = uVar5 + uVar4;
  } while ((uVar5 < param_3) && (*(char *)(*(long *)(param_1 + 0x10) + 0x4d) != '\0'));
  uVar3 = 0;
LAB_00190d12:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar3;
  return auVar6;
}