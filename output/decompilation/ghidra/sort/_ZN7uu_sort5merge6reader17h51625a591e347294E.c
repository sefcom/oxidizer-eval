long _ZN7uu_sort5merge6reader17h51625a591e347294E
               (undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,undefined param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined local_1a9;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_1a8 = param_1;
  local_1a0 = param_4;
  _ZN89__LT_std__sync__mpsc__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8c1c43cf00029e13E
            (&local_b0,&local_1a8);
  if (CONCAT44(uStack_a4,local_a8) != -0x8000000000000000) {
    do {
      local_b8 = local_38;
      local_c8 = local_48;
      uStack_c0 = uStack_40;
      local_d8 = local_58;
      uStack_d0 = uStack_50;
      local_e8 = local_68;
      uStack_e0 = uStack_60;
      local_128 = local_a8;
      uStack_124 = uStack_a4;
      uStack_120 = uStack_a0;
      uStack_11c = uStack_9c;
      local_118 = local_98;
      uStack_114 = uStack_94;
      uStack_110 = uStack_90;
      uStack_10c = uStack_8c;
      local_108 = local_88;
      uStack_104 = uStack_84;
      uStack_100 = uStack_80;
      uStack_fc = uStack_7c;
      local_f8 = local_78;
      uStack_f4 = uStack_74;
      uStack_f0 = uStack_70;
      uStack_ec = uStack_6c;
      if (param_3 <= local_b0) {
                    /* try { // try from 0023298a to 00232999 has its CatchHandler @ 002329c5 */
                    /* WARNING: Subroutine does not return */
        _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                  (local_b0,param_3,&PTR_DAT_00300408);
      }
      if (*(int *)(param_2 + local_b0 * 0x48) == 3) {
        _ZN4core3ptr51drop_in_place_LT_uu_sort__chunks__RecycledChunk_GT_17h27a074d6bbea78e7E
                  (&local_128);
      }
      else {
        plVar1 = (long *)(param_2 + local_b0 * 0x48);
        uVar6 = _ZN81__LT_uu_sort__merge__PlainTmpMergeInput_u20_as_u20_uu_sort__merge__MergeInput_GT_7as_read17hc6f60a099c87a3aaE
                          (plVar1 + 2);
        _ZN7uu_sort6chunks4read17h83fa724a03d73d23E
                  (&local_198,plVar1,&local_a8,0,&local_1a9,plVar1 + 6,uVar6,&local_1a9,param_5,
                   local_1a0);
        if (local_198 != 0) {
          return local_198;
        }
        if ((char)uStack_190 == '\0') {
          lVar2 = *plVar1;
          *plVar1 = 3;
          if (lVar2 == 3) {
            uVar6 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_00300420);
                    /* catch() { ... } // from try @ 00232950 with catch @ 002329a7 */
            _ZN4core3ptr55drop_in_place_LT_uu_sort__merge__PlainTmpMergeInput_GT_17hbdd2ab16c964fb99E
                      (&local_148);
                    /* WARNING: Subroutine does not return */
            _Unwind_Resume(uVar6);
          }
          uStack_190 = plVar1[1];
          lVar3 = plVar1[2];
          lVar4 = plVar1[3];
          lVar5 = plVar1[4];
          local_170 = *(undefined4 *)(plVar1 + 5);
          uStack_16c = *(undefined4 *)((long)plVar1 + 0x2c);
          uStack_168 = *(undefined4 *)(plVar1 + 6);
          uStack_164 = *(undefined4 *)((long)plVar1 + 0x34);
          local_160 = *(undefined4 *)(plVar1 + 7);
          uStack_15c = *(undefined4 *)((long)plVar1 + 0x3c);
          uStack_158 = *(undefined4 *)(plVar1 + 8);
          uStack_154 = *(undefined4 *)((long)plVar1 + 0x44);
          uStack_188._0_4_ = (undefined4)lVar3;
          uStack_188._4_4_ = (undefined4)((ulong)lVar3 >> 0x20);
          local_180._0_4_ = (undefined4)lVar4;
          local_180._4_4_ = (undefined4)((ulong)lVar4 >> 0x20);
          uStack_178._0_4_ = (undefined4)lVar5;
          uStack_178._4_4_ = (undefined4)((ulong)lVar5 >> 0x20);
          local_138 = (undefined4)uStack_178;
          uStack_134 = uStack_178._4_4_;
          local_148 = (undefined4)uStack_188;
          uStack_144 = uStack_188._4_4_;
          uStack_140 = (undefined4)local_180;
          uStack_13c = local_180._4_4_;
                    /* try { // try from 00232946 to 0023294f has its CatchHandler @ 002329ac */
          local_198 = lVar2;
          uStack_188 = lVar3;
          local_180 = lVar4;
          uStack_178 = lVar5;
          uStack_130 = local_170;
          uStack_12c = uStack_16c;
          _ZN4core3ptr78drop_in_place_LT_std__sync__mpsc__SyncSender_LT_uu_sort__chunks__Chunk_GT__GT_17h65b4bf175f2f49afE
                    (&local_198);
                    /* try { // try from 00232950 to 00232959 has its CatchHandler @ 002329a7 */
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h026152d332835070E
                    (&uStack_168);
          uStack_188 = CONCAT44(uStack_134,local_138);
          local_180 = CONCAT44(uStack_12c,uStack_130);
          local_198 = CONCAT44(uStack_144,local_148);
          uStack_190 = CONCAT44(uStack_13c,uStack_140);
          _ZN81__LT_uu_sort__merge__PlainTmpMergeInput_u20_as_u20_uu_sort__merge__MergeInput_GT_16finished_reading17h15f37bc70ab25a56E
                    (&local_198);
        }
      }
      _ZN89__LT_std__sync__mpsc__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8c1c43cf00029e13E
                (&local_b0,&local_1a8);
    } while (CONCAT44(uStack_a4,local_a8) != -0x8000000000000000);
  }
  return 0;
}