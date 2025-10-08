void _ZN4just15argument_parser14ArgumentParser11parse_group17he9047b36eb965085E
               (char *param_1,long *param_2)

{
  code *pcVar1;
  undefined uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined auVar10 [16];
  undefined7 local_128;
  undefined4 uStack_121;
  undefined4 uStack_11d;
  undefined4 uStack_119;
  undefined4 uStack_115;
  undefined uStack_111;
  undefined7 uStack_110;
  undefined uStack_109;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined3 uStack_68;
  undefined4 uStack_65;
  undefined4 uStack_61;
  undefined4 uStack_5d;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar8 = param_2[3];
  if (uVar8 < (ulong)param_2[1]) {
    uVar4 = *(undefined8 *)(*param_2 + uVar8 * 0x10);
    uVar7 = *(undefined8 *)(*param_2 + 8 + uVar8 * 0x10);
    cVar3 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                      (0x3a,uVar4,uVar7);
    if (cVar3 == '\0') {
      auVar10 = _ZN4just15argument_parser14ArgumentParser4rest17hce89c867d88cb806E(param_2);
      _ZN4just15argument_parser14ArgumentParser14resolve_recipe17h7bff01a000980bc2E
                (&local_108,param_2[2],auVar10._0_8_,auVar10._8_8_);
      if ((char)local_108 != '8') goto LAB_00356437;
      uVar8 = uVar8 + local_e0;
      local_98 = uStack_100;
      uStack_94 = uStack_fc;
      uStack_90 = uStack_f8;
      uStack_8c = uStack_f4;
      local_88 = uStack_f0;
      param_2[3] = uVar8;
      lVar9 = uStack_e8;
    }
    else {
      uStack_70 = (undefined4)uVar7;
      uStack_6c = (undefined4)((ulong)uVar7 >> 0x20);
      local_78 = uVar4;
      (*(code *)
        PTR__ZN101__LT_just__module_path__ModulePath_u20_as_u20_core__convert__TryFrom_LT__RF__u5b__RF_str_u5d__GT__GT_8try_from17h48731c1f5c72278aE_00566a20
      )(&local_108,&local_78,1);
      uStack_110 = (undefined7)uStack_f0;
      uStack_109 = (undefined)((ulong)uStack_f0 >> 0x38);
      uStack_11d._1_3_ = (undefined3)uStack_fc;
      uStack_11d = CONCAT31(uStack_11d._1_3_,(char)((uint)uStack_100 >> 0x18));
      uVar2 = (undefined)((uint)uStack_fc >> 0x18);
      uStack_119._1_3_ = (undefined3)uStack_f8;
      uStack_119 = CONCAT31(uStack_119._1_3_,uVar2);
      uStack_115._1_3_ = (undefined3)uStack_f4;
      uStack_115 = CONCAT31(uStack_115._1_3_,(char)((uint)uStack_f8 >> 0x18));
      uStack_111 = (undefined)((uint)uStack_f4 >> 0x18);
      local_128 = (undefined7)CONCAT44(uStack_104,local_108);
      uStack_121._0_1_ = (undefined)((uint)uStack_104 >> 0x18);
      uStack_121 = CONCAT31((int3)uStack_100,(undefined)uStack_121);
                    /* try { // try from 003564b8 to 003564c1 has its CatchHandler @ 00356736 */
      _ZN4just15argument_parser14ArgumentParser14resolve_recipe17he6ebb1d5b0007439E
                (&local_108,param_2[2],CONCAT17(uVar2,CONCAT43(uStack_11d,(int3)uStack_100)),
                 CONCAT17(uStack_111,CONCAT43(uStack_115,uStack_119._1_3_)));
      if ((char)local_108 != '8') {
        uVar4 = CONCAT17((undefined)uStack_100,CONCAT43(uStack_104,local_108._1_3_));
        uStack_68 = (undefined3)((uint)uStack_f8 >> 8);
        uStack_65 = uStack_f4;
        uStack_61 = (undefined4)uStack_f0;
        uStack_5d = uStack_f0._4_4_;
        uStack_70 = (undefined4)CONCAT43(uStack_fc,uStack_100._1_3_);
        uStack_6c = (undefined4)
                    (CONCAT17((undefined)uStack_f8,CONCAT43(uStack_fc,uStack_100._1_3_)) >> 0x20);
        *(undefined8 *)(param_1 + 0x60) = local_a8;
        *(undefined8 *)(param_1 + 0x50) = local_b8;
        *(undefined8 *)(param_1 + 0x58) = uStack_b0;
        *(undefined8 *)(param_1 + 0x40) = local_c8;
        *(undefined8 *)(param_1 + 0x48) = uStack_c0;
        *(undefined4 *)(param_1 + 0x30) = local_d8;
        *(undefined4 *)(param_1 + 0x34) = uStack_d4;
        *(undefined4 *)(param_1 + 0x38) = uStack_d0;
        *(undefined4 *)(param_1 + 0x3c) = uStack_cc;
        *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_f4,uStack_f8);
        *(undefined8 *)(param_1 + 0x18) = uStack_f0;
        local_78._0_4_ = (undefined4)CONCAT43(uStack_104,local_108._1_3_);
        local_78._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
        *(undefined4 *)(param_1 + 1) = (undefined4)local_78;
        *(undefined4 *)(param_1 + 5) = local_78._4_4_;
        *(undefined4 *)(param_1 + 9) = uStack_70;
        *(undefined4 *)(param_1 + 0xd) = uStack_6c;
        *param_1 = (char)local_108;
        *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_e8;
        *(undefined4 *)(param_1 + 0x24) = uStack_e8._4_4_;
        *(undefined4 *)(param_1 + 0x28) = (undefined4)local_e0;
        *(undefined4 *)(param_1 + 0x2c) = local_e0._4_4_;
        local_78 = uVar4;
        _ZN4core3ptr50drop_in_place_LT_just__module_path__ModulePath_GT_17hf76cd48e801dbf16E
                  (&local_128);
        return;
      }
      local_98 = uStack_100;
      uStack_94 = uStack_fc;
      uStack_90 = uStack_f8;
      uStack_8c = uStack_f4;
      local_88 = uStack_f0;
      uVar8 = uVar8 + 1;
      param_2[3] = uVar8;
      _ZN4core3ptr50drop_in_place_LT_just__module_path__ModulePath_GT_17hf76cd48e801dbf16E
                (&local_128);
      lVar9 = uStack_e8;
    }
  }
  else {
    auVar10 = _ZN4just15argument_parser14ArgumentParser4rest17hce89c867d88cb806E(param_2);
    _ZN4just15argument_parser14ArgumentParser14resolve_recipe17h7bff01a000980bc2E
              (&local_108,param_2[2],auVar10._0_8_,auVar10._8_8_);
    if ((char)local_108 != '8') {
LAB_00356437:
      *(undefined8 *)(param_1 + 0x60) = local_a8;
      *(undefined8 *)(param_1 + 0x50) = local_b8;
      *(undefined8 *)(param_1 + 0x58) = uStack_b0;
      *(undefined8 *)(param_1 + 0x40) = local_c8;
      *(undefined8 *)(param_1 + 0x48) = uStack_c0;
      *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_d4,local_d8);
      *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_cc,uStack_d0);
      *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_f4,uStack_f8);
      *(undefined8 *)(param_1 + 0x18) = uStack_f0;
      *(ulong *)(param_1 + 1) = CONCAT17((char)uStack_100,CONCAT43(uStack_104,local_108._1_3_));
      *(ulong *)(param_1 + 9) = CONCAT17((undefined)uStack_f8,CONCAT43(uStack_fc,uStack_100._1_3_));
      *param_1 = (char)local_108;
      *(long *)(param_1 + 0x20) = uStack_e8;
      *(long *)(param_1 + 0x28) = local_e0;
      return;
    }
    uStack_121 = uStack_100;
    uStack_11d = uStack_fc;
    uStack_119 = uStack_f8;
    uStack_115 = uStack_f4;
    uStack_111 = (undefined)uStack_f0;
    uStack_110 = (undefined7)((ulong)uStack_f0 >> 8);
    uStack_68 = (undefined3)uStack_f0;
    uStack_65 = (undefined4)((ulong)uStack_f0 >> 0x18);
    uStack_61._0_1_ = (undefined)((ulong)uStack_f0 >> 0x38);
    local_78 = CONCAT44(uStack_fc,uStack_100);
    uStack_70 = uStack_f8;
    uStack_6c = uStack_f4;
    local_50 = local_e0;
    if (local_e0 != 0) {
      local_108 = 0;
      uStack_104 = 0;
                    /* try { // try from 00356711 to 00356733 has its CatchHandler @ 00356761 */
      (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_00566218)
                (0,&local_50,&DAT_001692d0,&local_108,&PTR_DAT_0052dab8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_88 = uStack_f0;
    local_98 = uStack_100;
    uStack_94 = uStack_fc;
    uStack_90 = uStack_f8;
    uStack_8c = uStack_f4;
    lVar9 = uStack_e8;
  }
                    /* try { // try from 003564fd to 00356617 has its CatchHandler @ 00356749 */
  auVar10 = _ZN4just15argument_parser14ArgumentParser4rest17hce89c867d88cb806E(param_2);
  uVar7 = auVar10._8_8_;
  local_a0 = auVar10._0_8_;
  _ZN4just6recipe15Recipe_LT_D_GT_14argument_range17hb6d51d234f252302E
            (&local_128,*(undefined8 *)(lVar9 + 0x50),*(undefined8 *)(lVar9 + 0x58));
  uVar4 = _ZN4just6recipe15Recipe_LT_D_GT_13max_arguments17h4d291109c050f382E
                    (*(undefined8 *)(lVar9 + 0x50),*(undefined8 *)(lVar9 + 0x58));
  lVar5 = _ZN4core3cmp3Ord3min17hb98d0a4c5ddf358dE(uVar7,uVar4);
  cVar3 = _ZN96__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_just__range_ext__RangeExt_LT_T_GT__GT_14range_contains17hff29ddceadc8cf0eE
                    (CONCAT17((undefined)uStack_121,local_128),
                     CONCAT17((undefined)uStack_119,CONCAT43(uStack_11d,uStack_121._1_3_)),lVar5);
  if (cVar3 == '\0') {
    auVar10 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(lVar9 + 0x90);
    local_58 = auVar10._8_8_;
    local_a0 = auVar10._0_8_;
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h01c1076a84aed2adE
              (&local_108,*(undefined8 *)(lVar9 + 0x50),*(undefined8 *)(lVar9 + 0x58));
    lVar5 = *(long *)(lVar9 + 0x50);
    lVar9 = *(long *)(lVar9 + 0x58);
    uVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17hca6170881fec0ef2E
                      (lVar5,lVar9 * 0xd0 + lVar5);
    uVar6 = _ZN4just6recipe15Recipe_LT_D_GT_13max_arguments17h4d291109c050f382E(lVar5,lVar9);
    *(undefined4 *)(param_1 + 0x30) = local_108;
    *(undefined4 *)(param_1 + 0x34) = uStack_104;
    *(undefined4 *)(param_1 + 0x38) = uStack_100;
    *(undefined4 *)(param_1 + 0x3c) = uStack_fc;
    *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_f4,uStack_f8);
    *param_1 = '\x01';
    *(undefined8 *)(param_1 + 8) = uVar7;
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    *(undefined8 *)(param_1 + 0x20) = local_a0;
    *(undefined8 *)(param_1 + 0x28) = local_58;
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h766f1f48926327acE
              (&local_98);
  }
  else {
    uVar4 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h6a42e857aad4d1cbE
                      (lVar5,local_a0,uVar7);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hb39d7af186885eb1E
              (&local_48,uVar4);
    param_2[3] = uVar8 + lVar5;
    *(undefined8 *)(param_1 + 8) = local_48;
    *(undefined8 *)(param_1 + 0x10) = uStack_40;
    *(undefined8 *)(param_1 + 0x18) = local_38;
    *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_94,local_98);
    *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(param_1 + 0x30) = local_88;
    *param_1 = '8';
  }
  return;
}