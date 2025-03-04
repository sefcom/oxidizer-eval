undefined  [16]
_ZN5uu_dd6Output11write_block17h75bb814762c2a847E(long param_1,long param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined auVar4 [16];
  ulong local_38;
  
  uVar2 = 0;
  do {
    while( true ) {
      auVar4 = _ZN46__LT_uu_dd__Dest_u20_as_u20_std__io__Write_GT_5write17h3271a02f9286a322E
                         (param_1,param_2 + uVar2,param_3 - uVar2);
      uVar3 = auVar4._8_8_;
      if (auVar4._0_8_ == 0) break;
      cVar1 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(uVar3);
      if (cVar1 != '#') goto LAB_001d7cc9;
      local_38 = uVar3;
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h9ee6c79b3338b78bE(&local_38);
    }
    uVar3 = uVar2 + uVar3;
  } while ((uVar3 < param_3) && (uVar2 = uVar3, *(char *)(*(long *)(param_1 + 0x10) + 0x4d) != '\0')
          );
LAB_001d7cc9:
  auVar4._8_8_ = uVar3;
  return auVar4;
}