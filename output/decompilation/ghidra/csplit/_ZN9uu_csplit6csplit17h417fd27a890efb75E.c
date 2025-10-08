void _ZN9uu_csplit6csplit17h417fd27a890efb75E
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  long local_1a8;
  undefined local_1a0 [8];
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long lStack_160;
  long lStack_158;
  long local_150;
  long local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long lStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined uStack_b0;
  undefined7 uStack_af;
  undefined8 local_a8 [4];
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  undefined local_50 [8];
  long local_48;
  long local_40;
  long local_38;
  
  lStack_f0 = *param_5;
  lStack_e8 = param_5[1];
  uStack_e0 = *(undefined4 *)(param_5 + 2);
  uStack_dc = *(undefined4 *)((long)param_5 + 0x14);
  uStack_d8 = *(undefined4 *)(param_5 + 3);
  uStack_d4 = *(undefined4 *)((long)param_5 + 0x1c);
  local_d0 = *(undefined4 *)(param_5 + 4);
  uStack_cc = *(undefined4 *)((long)param_5 + 0x24);
  uStack_c8 = *(undefined4 *)(param_5 + 5);
  uStack_c4 = *(undefined4 *)((long)param_5 + 0x2c);
  local_c0 = 0;
  local_108 = 0;
  lStack_100 = 8;
  local_f8 = 0;
  local_b8 = 1;
  uStack_b0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a8[0] = 0x8000000000000000;
  local_70 = 0;
                    /* try { // try from 002188f1 to 00218958 has its CatchHandler @ 00218c6d */
  local_88 = param_2;
  (*(code *)PTR__ZN9uu_csplit8patterns12get_patterns17hcf6c39a45494ab6bE_003711c8)
            (&local_168,param_3,param_4);
  local_1c8 = lStack_160;
  lVar4 = local_1c8;
  uStack_1c0 = lStack_158;
  lVar3 = uStack_1c0;
  local_1b8 = local_150;
  local_1c8._0_4_ = (int)lStack_160;
  local_1c8._4_4_ = (undefined4)((ulong)lStack_160 >> 0x20);
  uStack_1c0._0_4_ = (undefined4)lStack_158;
  uStack_1c0._4_4_ = (undefined4)((ulong)lStack_158 >> 0x20);
  local_1c8 = lVar4;
  uStack_1c0 = lVar3;
  if (local_168 == 0xd) {
    local_68 = (int)local_1c8;
    uStack_64 = local_1c8._4_4_;
    uStack_60 = (undefined4)uStack_1c0;
    uStack_5c = uStack_1c0._4_4_;
    local_58 = local_150;
    _ZN9uu_csplit9do_csplit17hec3c9aa463c4540aE(&local_1c8,local_a8,&local_68,&local_108);
    if ((int)local_1c8 == 0xd) {
      uStack_b0 = 1;
                    /* try { // try from 00218967 to 002189d9 has its CatchHandler @ 00218c58 */
      _ZN92__LT_uu_csplit__InputSplitter_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9e28d1a528fdaefbE
                (local_1a0,&local_108);
      if (local_198 != -0x7fffffffffffffff) {
                    /* try { // try from 00218a05 to 00218a12 has its CatchHandler @ 00218c49 */
        lVar4 = (*(code *)PTR__ZN9uu_csplit11SplitWriter10new_writer17hee41ac5ef27e0855E_003711d8)
                          (local_a8);
        if (lVar4 == 0) {
          if (local_198 == -0x8000000000000000) {
            *param_1 = 0xc;
            param_1[1] = local_190;
            param_1[2] = local_188;
            bVar1 = true;
          }
          else {
            local_168 = local_198;
            lStack_160 = local_190;
            lStack_158 = local_188;
                    /* try { // try from 00218a60 to 00218a73 has its CatchHandler @ 00218c1a */
            lVar4 = (*(code *)PTR__ZN9uu_csplit11SplitWriter7writeln17h71cbc4937ea20739E_003711b8)
                              (local_a8,local_190,local_188);
            if (lVar4 == 0) {
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE
                        (&local_168);
              puVar2 = PTR__ZN9uu_csplit11SplitWriter7writeln17h71cbc4937ea20739E_003711b8;
              uStack_110 = CONCAT71(uStack_af,uStack_b0);
              local_118 = local_b8;
              local_128 = CONCAT44(uStack_c4,uStack_c8);
              uStack_120 = local_c0;
              uStack_140 = CONCAT44(uStack_dc,uStack_e0);
              local_138 = CONCAT44(uStack_d4,uStack_d8);
              uStack_130 = CONCAT44(uStack_cc,local_d0);
              local_148 = lStack_e8;
              lStack_158 = local_f8;
              local_150 = lStack_f0;
              local_168 = local_108;
              lStack_160 = lStack_100;
              while( true ) {
                    /* try { // try from 00218b11 to 00218b1d has its CatchHandler @ 00218c38 */
                _ZN92__LT_uu_csplit__InputSplitter_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9e28d1a528fdaefbE
                          (local_50,&local_168);
                if (local_48 == -0x7fffffffffffffff) break;
                if (local_48 == -0x8000000000000000) {
                  *param_1 = 0xc;
                  param_1[1] = local_40;
                  param_1[2] = local_38;
LAB_00218bce:
                    /* try { // try from 00218bce to 00218bd7 has its CatchHandler @ 00218c13 */
                  _ZN4core3ptr354drop_in_place_LT_uu_csplit__InputSplitter_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__map__Map_LT_uu_csplit__LinesWithNewlines_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT__C_uu_csplit__csplit_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT____u7b__u7b_closure_u7d__u7d__GT__GT__GT__GT_17hc956bfe01568e5b0E
                            (&local_168);
                  bVar1 = false;
                  goto LAB_00218bda;
                }
                local_180 = local_48;
                local_178 = local_40;
                local_170 = local_38;
                    /* try { // try from 00218b4f to 00218b54 has its CatchHandler @ 00218c29 */
                lVar4 = (*(code *)puVar2)(local_a8);
                if (lVar4 != 0) {
                  *param_1 = 0;
                  param_1[1] = lVar4;
                  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE
                            (&local_180);
                  goto LAB_00218bce;
                }
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE
                          (&local_180);
              }
                    /* try { // try from 00218b66 to 00218b7d has its CatchHandler @ 00218c13 */
              _ZN4core3ptr354drop_in_place_LT_uu_csplit__InputSplitter_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__map__Map_LT_uu_csplit__LinesWithNewlines_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT__C_uu_csplit__csplit_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT____u7b__u7b_closure_u7d__u7d__GT__GT__GT__GT_17hc956bfe01568e5b0E
                        (&local_168);
              (*(code *)PTR__ZN9uu_csplit11SplitWriter12finish_split17h02c3d655ecbf09e8E_003711c0)
                        (local_a8);
              bVar1 = false;
              goto LAB_00218b80;
            }
            *param_1 = 0;
            param_1[1] = lVar4;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(&local_168)
            ;
            bVar1 = true;
          }
        }
        else {
          *param_1 = 0;
          param_1[1] = lVar4;
          bVar1 = true;
                    /* try { // try from 00218a26 to 00218a2f has its CatchHandler @ 00218c58 */
          _ZN4core3ptr133drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h30ae416c40f6b755E
                    (&local_198);
        }
LAB_00218bda:
                    /* try { // try from 00218bda to 00218be1 has its CatchHandler @ 00218c6d */
        _ZN4core3ptr96drop_in_place_LT_core__result__Result_LT__LP__RP__C_uu_csplit__csplit_error__CsplitError_GT__GT_17h75a87585a3eed1deE
                  (&local_1c8);
        goto LAB_00218be2;
      }
      bVar1 = true;
      _ZN4core3ptr177drop_in_place_LT_core__option__Option_LT__LP_usize_C_core__result__Result_LT_alloc__string__String_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__RP__GT__GT_17hd170b8d8dcb5eaffE
                (local_1a0);
    }
    else {
      bVar1 = true;
      if (*(char *)(param_2 + 0x60) == '\0') {
        lVar4 = (*(code *)
                  PTR__ZN9uu_csplit11SplitWriter17delete_all_splits17h4111e5a3ffbeea82E_003711d0)
                          (local_a8);
        if (lVar4 != 0) {
          *param_1 = 0;
          param_1[1] = lVar4;
          bVar1 = true;
          goto LAB_00218bda;
        }
      }
    }
LAB_00218b80:
    param_1[4] = local_1a8;
    *(undefined4 *)(param_1 + 2) = (undefined4)local_1b8;
    *(undefined4 *)((long)param_1 + 0x14) = local_1b8._4_4_;
    *(undefined4 *)(param_1 + 3) = uStack_1b0;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_1ac;
    *(int *)param_1 = (int)local_1c8;
    *(undefined4 *)((long)param_1 + 4) = local_1c8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1c0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_1c0._4_4_;
                    /* try { // try from 00218b99 to 00218ba5 has its CatchHandler @ 00218c68 */
    _ZN4core3ptr43drop_in_place_LT_uu_csplit__SplitWriter_GT_17h25e2ee6cb1aed68dE(local_a8);
  }
  else {
    param_1[3] = local_150;
    *(int *)(param_1 + 1) = (int)local_1c8;
    *(undefined4 *)((long)param_1 + 0xc) = local_1c8._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_1c0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_1c0._4_4_;
    *param_1 = local_168;
    param_1[4] = local_148;
    bVar1 = true;
LAB_00218be2:
                    /* try { // try from 00218be2 to 00218bee has its CatchHandler @ 00218c68 */
    _ZN4core3ptr43drop_in_place_LT_uu_csplit__SplitWriter_GT_17h25e2ee6cb1aed68dE(local_a8);
  }
  if (bVar1) {
    _ZN4core3ptr354drop_in_place_LT_uu_csplit__InputSplitter_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__map__Map_LT_uu_csplit__LinesWithNewlines_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT__C_uu_csplit__csplit_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT____u7b__u7b_closure_u7d__u7d__GT__GT__GT__GT_17hc956bfe01568e5b0E
              (&local_108);
  }
  return;
}