void _ZN4just10subcommand10Subcommand4init17h51bb79e7c581e91dE(undefined *param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined7 uStack_a8;
  undefined uStack_a1;
  undefined7 uStack_a0;
  undefined uStack_99;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 *local_30;
  undefined *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _ZN4just6search6Search4init17haedd07c032121962E
            (&local_b8,param_2 + 0x108,*(undefined8 *)(param_2 + 0x20),
             *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x80),
             *(undefined8 *)(param_2 + 0x88));
  local_88 = CONCAT44(uStack_b4,local_b8);
  uStack_40 = uStack_98;
  uVar1 = uStack_40;
  uStack_50 = (undefined4)uStack_a8;
  uStack_4c = (undefined4)(CONCAT17(uStack_a1,uStack_a8) >> 0x20);
  local_48 = (undefined4)uStack_a0;
  uStack_44 = (undefined4)(CONCAT17(uStack_99,uStack_a0) >> 0x20);
  uStack_40._0_4_ = (undefined4)uStack_98;
  uStack_40._4_4_ = (undefined4)((ulong)uStack_98 >> 0x20);
  uStack_80 = uStack_b0;
  uStack_7c = uStack_ac;
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_70 = local_48;
  uStack_6c = uStack_44;
  uStack_68 = (undefined4)uStack_40;
  uStack_64 = uStack_40._4_4_;
  local_60 = local_90;
  uStack_40 = uVar1;
                    /* try { // try from 0038e5e7 to 0038e6de has its CatchHandler @ 0038e6f7 */
  cVar2 = (*(code *)PTR__ZN3std4path4Path7is_file17h6e28d87ff76ffc41E_00566aa0)
                    (CONCAT44(uStack_ac,uStack_b0),CONCAT44(uStack_4c,uStack_50));
  if (cVar2 == '\0') {
    lVar3 = _ZN3std2fs5write17h66888f812240dce5E(&local_88);
    local_b8 = (undefined4)lVar3;
    uStack_b4 = (undefined4)((ulong)lVar3 >> 0x20);
    if (lVar3 == 0) {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17ha63f2216ca348766E
                (&local_b8);
      if (*(char *)(param_2 + 0x1a7) != '\0') {
        local_20 = uStack_80;
        uStack_1c = uStack_7c;
        uStack_18 = uStack_78;
        uStack_14 = uStack_74;
        local_30 = &local_20;
        local_28 = 
        PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00566ad8
        ;
        local_b8 = 0x531158;
        uStack_b4 = 0;
        uStack_b0 = 2;
        uStack_ac = 0;
        uStack_98 = 0;
        uStack_a8 = SUB87(&local_30,0);
        uStack_a1 = (undefined)((ulong)&local_30 >> 0x38);
        uStack_a0 = 1;
        uStack_99 = 0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00565e48)(&local_b8);
      }
      *param_1 = 0x38;
      _ZN4core3ptr41drop_in_place_LT_just__search__Search_GT_17h18f5d3903328307eE(&local_88);
      return;
    }
    *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_74,uStack_78);
    *(undefined4 *)(param_1 + 0x10) = (undefined4)local_88;
    *(undefined4 *)(param_1 + 0x14) = local_88._4_4_;
    *(undefined4 *)(param_1 + 0x18) = uStack_80;
    *(undefined4 *)(param_1 + 0x1c) = uStack_7c;
    *param_1 = 0x37;
    *(long *)(param_1 + 8) = lVar3;
  }
  else {
    uStack_a1 = (undefined)uStack_78;
    uStack_a0 = (undefined7)(CONCAT44(uStack_74,uStack_78) >> 8);
    uStack_b4._3_1_ = (undefined)local_88;
    uStack_b0 = (undefined4)((ulong)local_88 >> 8);
    uStack_ac._0_3_ = (undefined3)((ulong)local_88 >> 0x28);
    uStack_ac._3_1_ = (undefined)uStack_80;
    uStack_a8 = (undefined7)(CONCAT44(uStack_7c,uStack_80) >> 8);
    *param_1 = 0x1c;
    *(undefined4 *)(param_1 + 1) = local_b8;
    *(undefined4 *)(param_1 + 5) = uStack_b4;
    *(undefined4 *)(param_1 + 9) = uStack_b0;
    *(undefined4 *)(param_1 + 0xd) = uStack_ac;
    *(ulong *)(param_1 + 0x10) = CONCAT71(uStack_a8,uStack_ac._3_1_);
    *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_a0,uStack_a1);
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_70);
  return;
}