void _ZN7uu_more5Pager10draw_lines17h890a8f2ebbed6d60E(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_e8;
  undefined8 local_e0;
  ulong local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined **local_a8;
  undefined8 uStack_a0;
  long **local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_78;
  code *local_70;
  undefined local_68 [32];
  undefined local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_b8 = param_2;
  lVar2 = _ZN9crossterm7command18write_command_ansi17h0432cd0c76b6eef8E(param_2,4);
  if (lVar2 == 0) {
    lVar2 = _ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17h392d0be644ab70e9E
                      (local_b8);
  }
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h830102b0065460c6E(lVar2,&PTR_DAT_00262a58);
  *(undefined8 *)(param_1 + 0x38) = 0;
  local_e8 = 0;
  local_e0 = 8;
  local_d8 = 0;
  local_d0 = *(long *)(param_1 + 8);
  local_c8 = local_d0 + *(long *)(param_1 + 0x10) * 0x18;
  lVar2 = *(long *)(param_1 + 0x18);
  uVar6 = (ulong)*(ushort *)(param_1 + 0x40);
  local_c0 = lVar2;
  if (uVar6 != 0) {
    if (*(char *)(param_1 + 0x43) == '\0') {
      do {
        if (local_c0 == 0) {
          lVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7d914e41eb33abbbE
                            (&local_d0);
        }
        else {
          local_c0 = 0;
          lVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3nth17heaaa124de6da709eE
                            (&local_d0);
        }
        if (lVar2 == 0) goto LAB_001dd5c1;
                    /* try { // try from 001dd5ad to 001dd5b7 has its CatchHandler @ 001dd6db */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h5fd45dac51916011E(&local_e8,lVar2);
      } while (local_d8 < uVar6);
    }
    else {
      bVar1 = false;
      lVar5 = 0;
      do {
        if (local_c0 == 0) {
          lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7d914e41eb33abbbE
                            (&local_d0);
        }
        else {
          local_c0 = 0;
          lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3nth17heaaa124de6da709eE
                            (&local_d0);
        }
        if (lVar3 == 0) goto LAB_001dd5c1;
        if (*(long *)(lVar3 + 0x10) == 0) {
          if (bVar1) {
            lVar5 = lVar5 + 1;
            *(long *)(param_1 + 0x38) = lVar5;
            lVar2 = lVar2 + 1;
            *(long *)(param_1 + 0x18) = lVar2;
          }
          else {
            bVar1 = true;
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h5fd45dac51916011E(&local_e8,lVar3);
          }
        }
        else {
          if (bVar1) {
            bVar1 = false;
          }
                    /* try { // try from 001dd4dc to 001dd55d has its CatchHandler @ 001dd6dd */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h5fd45dac51916011E(&local_e8,lVar3);
        }
      } while (local_d8 < uVar6);
    }
  }
LAB_001dd5c9:
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17ha758e961b2d597f5E
            (local_68,&local_e8);
  lVar2 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd5c8297444801790E
                    (local_68);
  if (lVar2 != 0) {
    do {
      local_78 = &local_b0;
      local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h11343ef90598214fE;
      local_a8 = &PTR_DAT_00262a38;
      uStack_a0 = 2;
      local_88 = 0;
      local_90 = 1;
      local_b0 = lVar2;
      local_98 = &local_78;
                    /* try { // try from 001dd667 to 001dd671 has its CatchHandler @ 001dd6f9 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h94c131af24f37af4E(local_48,&local_a8);
      uStack_a0 = CONCAT44(uStack_3c,uStack_40);
      local_98 = (long **)local_38;
                    /* try { // try from 001dd691 to 001dd6a2 has its CatchHandler @ 001dd6ea */
      uVar4 = _ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17he47e3670e90f933eE
                        (local_b8,uStack_a0);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h830102b0065460c6E(uVar4,&PTR_DAT_00262a70);
                    /* try { // try from 001dd6a3 to 001dd6aa has its CatchHandler @ 001dd6f9 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1f03875085d5f083E(&local_a8);
      lVar2 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd5c8297444801790E
                        (local_68);
    } while (lVar2 != 0);
  }
  _ZN4core3ptr85drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_alloc__string__String_GT__GT_17h28fddf8dcd9d6d5fE
            (local_68);
  return;
LAB_001dd5c1:
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x30);
  goto LAB_001dd5c9;
}