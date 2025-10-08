undefined8 *
_ZN5uu_tr9operation8Sequence20solve_set_characters17hf591f1b89257870fE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,byte param_6,byte param_7,byte param_8)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  long *plVar11;
  long *plVar12;
  undefined auVar13 [16];
  long *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  long *local_160;
  undefined local_151;
  long *local_150;
  long *local_148;
  ulong local_140;
  long *local_138;
  long *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  long *local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long *local_e8;
  ulong local_e0;
  long local_d8 [3];
  undefined8 local_c0;
  long *local_b0;
  long *local_a8;
  long local_a0;
  undefined8 local_98 [2];
  undefined8 local_88;
  long *local_78;
  long *local_70;
  long local_68;
  long *local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_40;
  
  _ZN5uu_tr9operation8Sequence8from_str17h4181ffdd5168ac11E(&local_188);
  plVar2 = local_178;
  if ((int)local_188 != 0xc) {
    *(int *)(param_1 + 1) = (int)local_188;
    *(undefined4 *)((long)param_1 + 0xc) = local_188._4_4_;
    param_1[2] = uStack_180;
    param_1[3] = local_178;
    param_1[4] = CONCAT44(uStack_16c,local_170);
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  local_108 = uStack_180;
  plVar12 = local_178 + CONCAT44(uStack_16c,local_170) * 2;
  lVar6 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h3ae9e0df8fd0afdeE
                    (local_178,plVar12);
  if (lVar6 == 0) {
                    /* try { // try from 00170a4c to 00170a5b has its CatchHandler @ 00171008 */
    _ZN5uu_tr9operation8Sequence8from_str17h4181ffdd5168ac11E(&local_188,param_4,param_5);
    plVar3 = local_178;
    if ((int)local_188 == 0xc) {
      local_138 = uStack_180;
      plVar11 = local_178 + CONCAT44(uStack_16c,local_170) * 2;
      local_190 = local_178;
      uVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h3ae9e0df8fd0afdeE
                        (local_178,plVar11);
      if (uVar7 < 2) {
        if (param_8 != 0) {
          local_188 = plVar3;
          uStack_180 = plVar11;
          cVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h78da172df07bdda7E
                            (&local_188);
          if (cVar4 != '\0') {
            *(undefined4 *)(param_1 + 1) = 6;
            goto LAB_00170a9b;
          }
        }
        local_188 = plVar2;
        local_178 = (long *)0x0;
        uStack_168 = 0;
                    /* try { // try from 00170b4e to 00170b5f has its CatchHandler @ 00170ffc */
        uStack_180 = plVar12;
        _ZN4core4iter6traits8iterator8Iterator7collect17hdf6c0e97b7534283E(&local_128,&local_188);
        if (param_6 != 0) {
          local_148 = (long *)CONCAT53(local_148._3_5_,0xff0000);
                    /* try { // try from 00170b76 to 00170c38 has its CatchHandler @ 00171001 */
          local_150 = (long *)&local_128;
          _ZN4core4iter6traits8iterator8Iterator7collect17h33eaaef4d8a943acE(&local_188,&local_150);
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hd84321348a921e7bE
                    (CONCAT44(uStack_124,local_128),CONCAT44(uStack_11c,uStack_120));
          local_118 = local_178;
          local_128 = (int)local_188;
          uStack_124 = local_188._4_4_;
          uStack_120 = (undefined4)uStack_180;
          uStack_11c = uStack_180._4_4_;
        }
        local_100 = local_118;
        local_60 = plVar3;
        local_50 = 0;
        local_40 = 0;
        local_58 = plVar11;
        plVar8 = (long *)_ZN4core4iter8adapters7flatten26FlattenCompat_LT_I_C_U_GT_9iter_fold17hbc4b3051cd2622ebE
                                   (&local_60);
        local_d8[0] = 0;
        if (plVar8 <= local_100) {
          local_d8[0] = (long)local_100 - (long)plVar8;
        }
        local_188 = plVar3;
        local_178 = local_d8;
        uStack_180 = plVar11;
        _ZN4core4iter6traits8iterator8Iterator7collect17h494a9bd301803bcaE(&local_150,&local_188);
        _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_clap_builder__util__id__Id_GT__GT_17hc196a6e0e0492a55E
                  (local_138,plVar3);
        plVar3 = local_148;
        local_138 = local_150;
        local_e0 = local_140;
        local_130 = local_148 + local_140 * 2;
        local_190 = local_148;
        local_150 = local_148;
        local_140 = 0;
        local_148 = local_130;
        auVar13 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h58e9c59f58a776f0E
                            (&local_150);
        if (auVar13._8_8_ != 0) {
          do {
            if (*auVar13._8_8_ == '\x04') {
              if (auVar13._0_8_ == 0) {
                lVar6 = 0;
              }
              else {
                local_b0 = plVar3;
                local_a8 = local_130;
                local_d8[1] = 0;
                local_c0 = 0;
                local_a0 = auVar13._0_8_;
                    /* try { // try from 00170d07 to 00170d0e has its CatchHandler @ 00170ffa */
                lVar6 = _ZN4core4iter8adapters7flatten26FlattenCompat_LT_I_C_U_GT_9iter_fold17h691c31dfb5941d63E
                                  (local_d8 + 1);
              }
              local_188 = plVar2;
              local_178 = (long *)0x0;
              uStack_180 = plVar12;
              do {
                do {
                  auVar13 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h58e9c59f58a776f0E
                                      (&local_188);
                  if (auVar13._8_8_ == (char *)0x0) {
                    *(undefined4 *)(param_1 + 1) = 7;
                    *param_1 = 0x8000000000000000;
                    goto LAB_00170e82;
                  }
                } while (*auVar13._8_8_ != '\x04');
                if (auVar13._0_8_ == 0) {
                  lVar9 = 0;
                }
                else {
                  local_78 = plVar2;
                  local_98[0] = 0;
                  local_88 = 0;
                    /* try { // try from 00170d7e to 00170d8a has its CatchHandler @ 0017100d */
                  local_70 = plVar12;
                  local_68 = auVar13._0_8_;
                  lVar9 = _ZN4core4iter8adapters7flatten26FlattenCompat_LT_I_C_U_GT_9iter_fold17h691c31dfb5941d63E
                                    (local_98);
                }
              } while (lVar9 != lVar6);
            }
            auVar13 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h58e9c59f58a776f0E
                                (&local_150);
          } while (auVar13._8_8_ != 0);
        }
        local_188 = plVar3;
        uStack_180 = local_130;
        local_178 = (long *)0x0;
        uStack_168 = 0;
                    /* try { // try from 00170dcd to 00170dde has its CatchHandler @ 00171001 */
        _ZN4core4iter6traits8iterator8Iterator7collect17hdf6c0e97b7534283E(&local_f8,&local_188);
        plVar3 = local_e8;
        uVar1 = CONCAT44(uStack_ec,uStack_f0);
                    /* try { // try from 00170def to 00170dfe has its CatchHandler @ 00170fe5 */
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h7552a5668a592e56E
                  (&local_150,uVar1,local_e8);
        if (1 < local_140) {
          local_110 = local_148;
          if (local_140 < 0x15) {
            _ZN4core5slice4sort6shared9smallsort25insertion_sort_shift_left17h2bc1249c7cc2cafaE
                      (local_148,local_140,1);
          }
          else {
                    /* try { // try from 00170fb6 to 00170fc8 has its CatchHandler @ 00170fce */
            (*(code *)PTR__ZN4core5slice4sort8unstable7ipnsort17h256cb113d496b33eE_00205430)
                      (local_148,local_140,&local_151);
          }
        }
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_8dedup_by17hb373246bfc5e7da5E(&local_150);
        local_188 = plVar2;
        uStack_180 = plVar12;
        bVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h5c4ddfbfb7bba7c1E
                          (&local_188);
        if (((param_8 & bVar5 & param_6) == 0) ||
           ((uVar10 = 9, local_140 < 2 && (plVar3 <= local_100)))) {
          if ((plVar3 < local_118 && param_7 == 0) &&
             ((local_130 + -2 != (long *)0x0 && local_e0 != 0 &&
              (*(char *)(local_130 + -2) == '\x04')))) {
            uVar10 = 8;
            if ((*(char *)((long)local_130 + -0xf) == '\n') ||
               (*(char *)((long)local_130 + -0xf) == '\x06')) goto LAB_00170e52;
          }
          if ((param_7 & plVar3 <= local_118) != 0) {
            local_118 = plVar3;
          }
          local_178 = local_118;
          local_188 = (long *)CONCAT44(uStack_124,local_128);
          uStack_180 = (long *)CONCAT44(uStack_11c,uStack_120);
          local_160 = local_e8;
          local_170 = local_f8;
          uStack_16c = uStack_f4;
          uStack_168 = CONCAT44(uStack_ec,uStack_f0);
          param_1[4] = uStack_168;
          param_1[5] = local_e8;
          param_1[2] = local_118;
          param_1[3] = CONCAT44(uStack_f4,local_f8);
          *(undefined4 *)param_1 = local_128;
          *(undefined4 *)((long)param_1 + 4) = uStack_124;
          *(undefined4 *)(param_1 + 1) = uStack_120;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_11c;
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hd84321348a921e7bE
                    (local_150,local_148);
        }
        else {
LAB_00170e52:
          *(undefined4 *)(param_1 + 1) = uVar10;
          *param_1 = 0x8000000000000000;
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hd84321348a921e7bE
                    (local_150,local_148);
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hd84321348a921e7bE
                    (CONCAT44(uStack_f4,local_f8),uVar1);
LAB_00170e82:
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hd84321348a921e7bE
                    (CONCAT44(uStack_124,local_128),CONCAT44(uStack_11c,uStack_120));
        }
      }
      else {
        *(undefined4 *)(param_1 + 1) = 2;
LAB_00170a9b:
        *param_1 = 0x8000000000000000;
      }
      _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_clap_builder__util__id__Id_GT__GT_17hc196a6e0e0492a55E
                (local_138,local_190);
      goto LAB_00170ad9;
    }
    *(int *)(param_1 + 1) = (int)local_188;
    *(undefined4 *)((long)param_1 + 0xc) = local_188._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_180;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_180._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)local_178;
    *(undefined4 *)((long)param_1 + 0x1c) = local_178._4_4_;
    param_1[4] = CONCAT44(uStack_16c,local_170);
  }
  else {
    *(undefined4 *)(param_1 + 1) = 3;
  }
  *param_1 = 0x8000000000000000;
LAB_00170ad9:
  _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_clap_builder__util__id__Id_GT__GT_17hc196a6e0e0492a55E
            (local_108,plVar2);
  return param_1;
}