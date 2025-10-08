undefined8 *
_ZN7uu_sort13FieldSelector5parse17hd62b608cdcbb6258E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined4 uStack_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined3 uStack_1b8;
  undefined uStack_1b5;
  uint auStack_1b0 [2];
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  uint uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  byte bStack_160;
  undefined4 uStack_15f;
  undefined3 uStack_15b;
  undefined uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined7 local_a0;
  char cStack_99;
  long local_98 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  puVar7 = (undefined8 *)0x2c;
  local_e0 = param_2;
  local_d8 = param_4;
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_68,0x2c,param_2,param_3);
  local_78 = 0;
  local_38 = 1;
  local_70 = param_3;
  lVar4 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17hcedf3ecbc5351d30E(&local_78);
  if (lVar4 != 0) {
    _ZN7uu_sort13FieldSelector17split_key_options17h52f8e7164abbfd25E(&local_d0,lVar4);
    plVar1 = plStack_b8;
    puVar7 = local_c0;
    uVar2 = uStack_c8;
    uVar5 = local_d0;
    lVar4 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17hcedf3ecbc5351d30E(&local_78);
    if (lVar4 == 0) {
      local_98[0] = 0;
    }
    else {
      _ZN7uu_sort13FieldSelector17split_key_options17h52f8e7164abbfd25E(local_98,lVar4);
    }
    if ((plVar1 == (long *)0x0) &&
       ((local_98[0] == 0 ||
        (cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf24dc1420a1402d1E
                           (local_88,local_80,1,0), cVar3 != '\0')))) {
      local_100 = uVar5;
      local_f8 = uVar2;
      local_f0 = &local_d8;
      local_e8 = local_98;
      _ZN7uu_sort13FieldSelector5parse28__u7b__u7b_closure_u7d__u7d_17h169e2419223beb2bE
                (&local_d0,&local_100);
    }
    else {
      local_100 = uVar5;
      local_f8 = uVar2;
      local_f0 = puVar7;
      local_e8 = plVar1;
      _ZN7uu_sort13FieldSelector18parse_with_options17h698e7c19784cfaadE
                (&local_d0,&local_100,local_98);
    }
    if (cStack_99 == '\x02') {
      uVar5 = _ZN7uu_sort13FieldSelector5parse28__u7b__u7b_closure_u7d__u7d_17h36e4ea784e6f9a09E
                        (local_e0,param_3,&local_d0);
      *param_1 = uVar5;
      param_1[1] = &
                   PTR__ZN4core3ptr39drop_in_place_LT_uu_sort__SortError_GT_17h960567f9640cae93E_0028c448
      ;
      *(undefined *)((long)param_1 + 0x37) = 2;
    }
    else {
      param_1[6] = CONCAT17(cStack_99,local_a0);
      param_1[4] = local_b0;
      param_1[5] = uStack_a8;
      param_1[2] = local_c0;
      param_1[3] = plStack_b8;
      *param_1 = local_d0;
      param_1[1] = uStack_c8;
    }
    return param_1;
  }
  ppuVar8 = &PTR_s_src_uu_sort_src_sort_rs_0028d080;
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00296f50)();
  plVar1 = (long *)puVar7[2];
  puStack_120 = param_1;
  uStack_118 = param_3;
  _ZN7uu_sort11KeyPosition3new17ha77a31f4c9c6cdf9E
            (auStack_1b0,*puVar7,puVar7[1],1,*(undefined *)(*plVar1 + 0x7d));
  uStack_190 = uStack_1a8;
  uStack_18c = uStack_1a4;
  uStack_188 = uStack_1a0;
  uStack_184 = uStack_19c;
  puVar6 = (undefined8 *)CONCAT44(uStack_194,uStack_198);
  if (auStack_1b0[0] == 1) {
    ppuVar8[2] = (undefined *)puVar6;
    *ppuVar8 = (undefined *)CONCAT44(uStack_1a4,uStack_1a8);
    ppuVar8[1] = (undefined *)CONCAT44(uStack_19c,uStack_1a0);
LAB_001d33c4:
    *(undefined *)((long)ppuVar8 + 0x37) = 2;
  }
  else {
    lVar4 = *(long *)puVar7[3];
    if (lVar4 == 0) {
      uStack_198._0_1_ = 2;
    }
    else {
      _ZN7uu_sort11KeyPosition3new17ha77a31f4c9c6cdf9E
                (auStack_1b0,lVar4,((long *)puVar7[3])[1],0,*(undefined *)(*plVar1 + 0x7d));
      uStack_150 = (undefined *)CONCAT44(uStack_1a4,uStack_1a8);
      uStack_148 = (undefined *)CONCAT44(uStack_19c,uStack_1a0);
      puVar6 = (undefined8 *)(ulong)(byte)uStack_198;
      uStack_1b8 = (undefined3)((uint)uStack_198 >> 8);
      uStack_1b5 = (undefined)uStack_194;
      uStack_1bc = uStack_194 >> 8;
      uStack_1c0 = CONCAT13(uStack_1b5,uStack_1b8);
      if ((auStack_1b0[0] & 1) != 0) {
        uStack_1c8 = CONCAT13(uStack_1b5,uStack_1b8);
        *ppuVar8 = uStack_150;
        ppuVar8[1] = uStack_148;
        *(undefined4 *)((long)ppuVar8 + 0x11) = uStack_1c8;
        *(uint *)((long)ppuVar8 + 0x14) = uStack_194;
        *(byte *)(ppuVar8 + 2) = (byte)uStack_198;
        goto LAB_001d33c4;
      }
    }
    uStack_170 = (undefined4)uStack_150;
    uStack_16c = uStack_150._4_4_;
    uStack_168 = (undefined4)uStack_148;
    uStack_164 = uStack_148._4_4_;
    uStack_15f = uStack_1c0;
    _uStack_15b = CONCAT13(uStack_158,(undefined3)uStack_1bc);
    lVar4 = *plVar1;
    bStack_160 = (byte)uStack_198;
    puVar6 = (undefined8 *)
             (*(code *)PTR__ZN7uu_sort13FieldSelector3new17h5b970f0569e874f9E_00296f28)
                       (ppuVar8,&uStack_190,&uStack_170,
                        (ulong)*(uint *)(lVar4 + 0x98) << 0x28 | (ulong)*(uint *)(lVar4 + 0x7d) |
                        (ulong)*(byte *)(lVar4 + 0x82) << 0x20);
  }
  return puVar6;
}