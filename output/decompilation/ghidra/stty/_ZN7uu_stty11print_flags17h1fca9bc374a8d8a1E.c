void _ZN7uu_stty11print_flags17h1fca9bc374a8d8a1E(long param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  undefined **local_88;
  undefined8 local_80;
  undefined4 **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 *local_58;
  code *local_50;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  bVar5 = false;
  lVar4 = 0;
  do {
    while( true ) {
      lVar4 = lVar4 + 0x20;
      while( true ) {
        local_40 = *(undefined4 *)(&UNK_001e2fa0 + lVar4);
        uStack_3c = *(undefined4 *)(&UNK_001e2fa4 + lVar4);
        uStack_38 = *(undefined4 *)((long)&PTR_s___001e2fa8 + lVar4);
        uStack_34 = *(undefined4 *)((long)&PTR_s___001e2fa8 + lVar4 + 4);
        if ((&UNK_001e2fb4)[lVar4] != '\0') break;
        lVar4 = lVar4 + 0x20;
        if (lVar4 == 0x1a0) goto LAB_00159294;
      }
      bVar1 = (&UNK_001e2fb5)[lVar4];
      iVar2 = *(int *)(&UNK_001e2f98 + lVar4);
      local_48 = param_1;
      bVar3 = _ZN70__LT_nix__sys__termios__InputFlags_u20_as_u20_uu_stty__TermiosFlag_GT_5is_in17h7a378cd8bdb34370E
                        (*(undefined4 *)(&UNK_001e2fb0 + lVar4),*(undefined4 *)(param_1 + 0x70),
                         iVar2,*(undefined4 *)(&UNK_001e2f9c + lVar4));
      if (iVar2 == 0) break;
      if ((bVar3 & (bVar1 ^ 1 | param_2)) == 0) goto LAB_001591e0;
LAB_00159230:
      local_58 = &local_40;
      local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb65652a1c6501a73E;
      local_88 = (undefined **)&DAT_001e3838;
      local_80 = 2;
      uStack_68 = 0;
      local_78 = &local_58;
      local_70 = 1;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eaf30)(&local_88);
      bVar5 = true;
      param_1 = local_48;
      if (lVar4 == 0x180) goto LAB_00159294;
    }
    if (((param_2 & 1) != 0) || (bVar1 != bVar3)) {
      if (bVar3 == 0) {
        local_88 = &PTR_s___001e3858;
        local_80 = 1;
        local_78 = (undefined4 **)0x8;
        local_70 = 0;
        uStack_68 = 0;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eaf30)(&local_88);
      }
      goto LAB_00159230;
    }
LAB_001591e0:
    param_1 = local_48;
  } while (lVar4 != 0x180);
LAB_00159294:
  if (bVar5) {
    local_88 = &PTR_s__001e2ac0;
    local_80 = 1;
    local_78 = (undefined4 **)0x8;
    local_70 = 0;
    uStack_68 = 0;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eaf30)(&local_88);
  }
  return;
}