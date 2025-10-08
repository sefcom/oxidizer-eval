void _ZN4just6parser6Parser26parse_string_literal_token17h0d1e77bec93423b0E
               (undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 uVar9;
  long extraout_RDX;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  byte local_200;
  char cStack_1ff;
  undefined2 uStack_1fe;
  undefined4 uStack_1fc;
  undefined2 uStack_1f8;
  undefined2 uStack_1f6;
  undefined4 uStack_1f4;
  undefined2 local_1f0;
  undefined2 uStack_1ee;
  undefined4 uStack_1ec;
  undefined2 uStack_1e8;
  undefined2 uStack_1e6;
  undefined4 uStack_1e4;
  undefined2 local_1e0;
  undefined2 uStack_1de;
  undefined4 uStack_1dc;
  undefined2 uStack_1d8;
  undefined2 uStack_1d6;
  undefined4 uStack_1d4;
  undefined2 local_1d0;
  undefined2 uStack_1ce;
  undefined4 uStack_1cc;
  undefined2 uStack_1c8;
  undefined6 uStack_1c6;
  undefined2 local_1c0;
  undefined6 uStack_1be;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  long local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  char local_150;
  undefined4 local_14f;
  undefined3 uStack_14b;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
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
  undefined local_d8 [4];
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined local_78 [4];
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  cVar8 = _ZN4just6parser6Parser7next_is17hc7c4171067e02951E(param_2,0x18);
  if (cVar8 != '\0') {
    _ZN4just6parser6Parser14expect_keyword17h29d7686c3c631ba9E(&local_200,param_2,0x1e);
    if ((char)uStack_1b8 != '%') {
      param_1[9] = CONCAT62(uStack_1be,local_1c0);
      param_1[10] = CONCAT44(uStack_1b4,uStack_1b8);
      param_1[7] = CONCAT44(uStack_1cc,CONCAT22(uStack_1ce,local_1d0));
      param_1[8] = CONCAT62(uStack_1c6,uStack_1c8);
      param_1[5] = CONCAT44(uStack_1dc,CONCAT22(uStack_1de,local_1e0));
      param_1[6] = CONCAT44(uStack_1d4,CONCAT22(uStack_1d6,uStack_1d8));
      param_1[3] = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,local_1f0));
      param_1[4] = CONCAT44(uStack_1e4,CONCAT22(uStack_1e6,uStack_1e8));
      param_1[1] = CONCAT44(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(cStack_1ff,local_200)));
      param_1[2] = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
      goto LAB_0037dd8d;
    }
  }
  _ZN4just6parser6Parser6expect17h35e1151927597ac7E(&local_200,param_2,0x21);
  local_128 = CONCAT22(uStack_1fe,CONCAT11(cStack_1ff,local_200));
  local_198 = CONCAT44(uStack_1fc,local_128);
  uStack_120 = CONCAT22(uStack_1f6,uStack_1f8);
  uStack_190 = CONCAT44(uStack_1f4,uStack_120);
  local_118 = CONCAT22(uStack_1ee,local_1f0);
  local_188 = CONCAT44(uStack_1ec,local_118);
  uStack_110 = CONCAT22(uStack_1e6,uStack_1e8);
  uStack_180 = CONCAT44(uStack_1e4,uStack_110);
  local_108 = CONCAT22(uStack_1de,local_1e0);
  local_178 = CONCAT44(uStack_1dc,local_108);
  uStack_100 = CONCAT22(uStack_1d6,uStack_1d8);
  uStack_170 = CONCAT44(uStack_1d4,uStack_100);
  local_f8 = CONCAT22(uStack_1ce,local_1d0);
  local_168 = CONCAT44(uStack_1cc,local_f8);
  uVar9 = CONCAT62(uStack_1c6,uStack_1c8);
  local_158 = CONCAT62(uStack_1be,local_1c0);
  if ((char)uStack_1b8 == '%') {
    uStack_160._0_4_ = (undefined4)uVar9;
    uStack_160._4_4_ = (undefined4)((uint6)uStack_1c6 >> 0x10);
    uStack_124 = uStack_1fc;
    uStack_11c = uStack_1f4;
    uStack_114 = uStack_1ec;
    uStack_10c = uStack_1e4;
    uStack_104 = uStack_1dc;
    uStack_fc = uStack_1d4;
    uStack_f4 = uStack_1cc;
    uStack_f0 = (undefined4)uStack_160;
    uStack_ec = uStack_160._4_4_;
    uStack_74 = uStack_1fc;
    uStack_6c = uStack_1f4;
    uStack_64 = uStack_1ec;
    uStack_5c = uStack_1e4;
    uStack_54 = uStack_1dc;
    uStack_4c = uStack_1d4;
    uStack_44 = uStack_1cc;
    uStack_40 = (undefined4)uStack_160;
    uStack_3c = uStack_160._4_4_;
    uStack_160 = uVar9;
    local_e8 = local_158;
    _ZN4just11string_kind10StringKind23from_string_or_backtick17h6eb193e734499b6aE
              (&local_200,&local_128);
    cVar4 = cStack_1ff;
    bVar3 = local_200;
    puVar2 = PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10;
    if ((char)uStack_1b8 == '%') {
      lVar1 = (ulong)local_200 * 2 + 1;
      auVar10 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(local_78);
      (*(code *)puVar2)(local_78);
      auVar11 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                          (lVar1,extraout_RDX - lVar1,auVar10._0_8_,auVar10._8_8_);
      if (auVar11._0_8_ == 0) {
        uVar9 = (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
                          (auVar10._0_8_,auVar10._8_8_,lVar1,extraout_RDX - lVar1,&PTR_DAT_005308e0)
        ;
                    /* catch() { ... } // from try @ 0037ddcb with catch @ 0037e13e */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_140);
        _Unwind_Resume(uVar9);
        return;
      }
      if ((bVar3 & 1) == 0) {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                  (&local_140,auVar11._0_8_);
        if (cVar4 == '\x01') goto LAB_0037ddbb;
LAB_0037dc37:
        local_208 = local_130;
        local_218 = local_140;
        uStack_214 = uStack_13c;
        uStack_210 = uStack_138;
        uStack_20c = uStack_134;
        if (cVar8 == '\0') {
          param_1[1] = CONCAT44(uStack_124,local_128);
          param_1[2] = CONCAT44(uStack_11c,uStack_120);
          param_1[3] = CONCAT44(uStack_114,local_118);
          param_1[4] = CONCAT44(uStack_10c,uStack_110);
          param_1[5] = CONCAT44(uStack_104,local_108);
          param_1[6] = CONCAT44(uStack_fc,uStack_100);
          param_1[7] = CONCAT44(uStack_f4,local_f8);
          param_1[8] = CONCAT44(uStack_ec,uStack_f0);
          param_1[9] = local_e8;
          param_1[10] = CONCAT44(uStack_13c,local_140);
          param_1[0xb] = CONCAT44(uStack_134,uStack_138);
          param_1[0xc] = local_130;
          *(undefined (*) [16])(param_1 + 0xd) = auVar11;
          *(byte *)(param_1 + 0xf) = bVar3;
          *(char *)((long)param_1 + 0x79) = cVar4;
          *(undefined *)((long)param_1 + 0x7a) = 0;
          *param_1 = 0;
          return;
        }
      }
      else {
        (*(code *)PTR__ZN4just8unindent8unindent17h52c9ed21e4a911eaE_00566c60)();
        if (cVar4 != '\x01') goto LAB_0037dc37;
LAB_0037ddbb:
                    /* try { // try from 0037ddcb to 0037dddc has its CatchHandler @ 0037e13e */
        _ZN4just6parser6Parser11cook_string17hac60a0f07317bc6bE
                  (&local_200,&local_128,CONCAT44(uStack_134,uStack_138),local_130);
        if ((char)uStack_1b8 != '%') {
          *(undefined4 *)((long)param_1 + 0x54) = uStack_1b4;
          *(uint *)((long)param_1 + 0x51) = CONCAT13((undefined)uStack_1b4,uStack_1b8._1_3_);
          param_1[9] = CONCAT62(uStack_1be,local_1c0);
          param_1[7] = CONCAT44(uStack_1cc,CONCAT22(uStack_1ce,local_1d0));
          param_1[8] = CONCAT62(uStack_1c6,uStack_1c8);
          param_1[5] = CONCAT44(uStack_1dc,CONCAT22(uStack_1de,local_1e0));
          param_1[6] = CONCAT44(uStack_1d4,CONCAT22(uStack_1d6,uStack_1d8));
          param_1[3] = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,local_1f0));
          param_1[4] = CONCAT44(uStack_1e4,CONCAT22(uStack_1e6,uStack_1e8));
          *(uint *)(param_1 + 1) = CONCAT22(uStack_1fe,CONCAT11(cStack_1ff,local_200));
          *(undefined4 *)((long)param_1 + 0xc) = uStack_1fc;
          *(uint *)(param_1 + 2) = CONCAT22(uStack_1f6,uStack_1f8);
          *(undefined4 *)((long)param_1 + 0x14) = uStack_1f4;
          *(char *)(param_1 + 10) = (char)uStack_1b8;
          *param_1 = 1;
          goto LAB_0037e113;
        }
        local_208 = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,local_1f0));
        local_218 = CONCAT22(uStack_1fe,CONCAT11(cStack_1ff,local_200));
        uStack_210 = CONCAT22(uStack_1f6,uStack_1f8);
        uStack_214 = uStack_1fc;
        uStack_20c = uStack_1f4;
        if (cVar8 == '\0') {
          param_1[1] = CONCAT44(uStack_124,local_128);
          param_1[2] = CONCAT44(uStack_11c,uStack_120);
          param_1[3] = CONCAT44(uStack_114,local_118);
          param_1[4] = CONCAT44(uStack_10c,uStack_110);
          param_1[5] = CONCAT44(uStack_104,local_108);
          param_1[6] = CONCAT44(uStack_fc,uStack_100);
          param_1[7] = CONCAT44(uStack_f4,local_f8);
          param_1[8] = CONCAT44(uStack_ec,uStack_f0);
          param_1[9] = local_e8;
          *(undefined4 *)(param_1 + 10) = local_218;
          *(undefined4 *)((long)param_1 + 0x54) = uStack_1fc;
          *(undefined4 *)(param_1 + 0xb) = uStack_210;
          *(undefined4 *)((long)param_1 + 0x5c) = uStack_1f4;
          param_1[0xc] = local_208;
          *(undefined (*) [16])(param_1 + 0xd) = auVar11;
          *(byte *)(param_1 + 0xf) = bVar3;
          *(undefined2 *)((long)param_1 + 0x79) = 1;
          *param_1 = 0;
          goto LAB_0037e113;
        }
      }
                    /* try { // try from 0037de03 to 0037dfc0 has its CatchHandler @ 0037e143 */
      _ZN11shellexpand7strings5funcs17full_with_context17hb4629816e4775ea2E(local_d8,&local_218);
      uStack_1d8 = (undefined2)local_b8;
      uStack_1d6 = (undefined2)((uint)local_b8 >> 0x10);
      uStack_1d4 = uStack_b4;
      local_1d0 = (undefined2)uStack_b0;
      uStack_1ce = (undefined2)((uint)uStack_b0 >> 0x10);
      uStack_1cc = uStack_ac;
      uStack_1e8 = (undefined2)local_c8;
      uStack_1e6 = (undefined2)((uint)local_c8 >> 0x10);
      uStack_1e4 = uStack_c4;
      local_1e0 = (undefined2)uStack_c0;
      uStack_1de = (undefined2)((uint)uStack_c0 >> 0x10);
      uStack_1dc = uStack_bc;
      uStack_1f8 = local_d8._0_2_;
      uStack_1f6 = local_d8._2_2_;
      uStack_1f4 = uStack_d4;
      local_1f0 = (undefined2)uStack_d0;
      uStack_1ee = (undefined2)((uint)uStack_d0 >> 0x10);
      uStack_1ec = uStack_cc;
      local_200 = 0x33;
      cStack_1ff = '\0';
      uStack_1fe = 0;
      uStack_1fc = 0x80000000;
      _ZN4just5token5Token5error17h986494da066a4455E(&local_198,local_78,&local_200);
      local_a8 = uStack_180;
      uVar9 = local_a8;
      uStack_a0 = local_178;
      uVar5 = uStack_a0;
      local_98 = uStack_170;
      uVar6 = local_98;
      uStack_90 = local_168;
      uVar7 = uStack_90;
      local_88 = (undefined4)uStack_160;
      uStack_84 = uStack_160._4_4_;
      uStack_80 = (undefined4)local_158;
      uStack_7c = local_158._4_4_;
      if (local_150 == '%') {
        if (local_198 == -0x8000000000000000) {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                    (&local_200);
          local_198 = CONCAT44(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(cStack_1ff,local_200)));
          uStack_190 = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
          local_188 = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,local_1f0));
        }
        param_1[9] = local_e8;
        *(undefined4 *)(param_1 + 7) = local_f8;
        *(undefined4 *)((long)param_1 + 0x3c) = uStack_f4;
        *(undefined4 *)(param_1 + 8) = uStack_f0;
        *(undefined4 *)((long)param_1 + 0x44) = uStack_ec;
        *(undefined4 *)(param_1 + 5) = local_108;
        *(undefined4 *)((long)param_1 + 0x2c) = uStack_104;
        *(undefined4 *)(param_1 + 6) = uStack_100;
        *(undefined4 *)((long)param_1 + 0x34) = uStack_fc;
        *(undefined4 *)(param_1 + 3) = local_118;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_114;
        *(undefined4 *)(param_1 + 4) = uStack_110;
        *(undefined4 *)((long)param_1 + 0x24) = uStack_10c;
        *(undefined4 *)(param_1 + 1) = local_128;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_124;
        *(undefined4 *)(param_1 + 2) = uStack_120;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_11c;
        param_1[10] = local_198;
        param_1[0xb] = uStack_190;
        param_1[0xc] = local_188;
        *(undefined (*) [16])(param_1 + 0xd) = auVar11;
        *(byte *)(param_1 + 0xf) = bVar3;
        *(char *)((long)param_1 + 0x79) = cVar4;
        *(char *)((long)param_1 + 0x7a) = cVar8;
        *param_1 = 0;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_218);
      }
      else {
        local_a8._0_4_ = (undefined4)uStack_180;
        local_a8._4_4_ = (undefined4)((ulong)uStack_180 >> 0x20);
        uStack_a0._0_4_ = (undefined4)local_178;
        uStack_a0._4_4_ = (undefined4)((ulong)local_178 >> 0x20);
        local_98._0_4_ = (undefined4)uStack_170;
        local_98._4_4_ = (undefined4)((ulong)uStack_170 >> 0x20);
        uStack_90._0_4_ = (undefined4)local_168;
        uStack_90._4_4_ = (undefined4)((ulong)local_168 >> 0x20);
        *(undefined4 *)(param_1 + 8) = (undefined4)uStack_160;
        *(undefined4 *)((long)param_1 + 0x44) = uStack_160._4_4_;
        *(undefined4 *)(param_1 + 9) = (undefined4)local_158;
        *(undefined4 *)((long)param_1 + 0x4c) = local_158._4_4_;
        *(undefined4 *)(param_1 + 6) = (undefined4)local_98;
        *(undefined4 *)((long)param_1 + 0x34) = local_98._4_4_;
        *(undefined4 *)(param_1 + 7) = (undefined4)uStack_90;
        *(undefined4 *)((long)param_1 + 0x3c) = uStack_90._4_4_;
        *(undefined4 *)(param_1 + 4) = (undefined4)local_a8;
        *(undefined4 *)((long)param_1 + 0x24) = local_a8._4_4_;
        *(undefined4 *)(param_1 + 5) = (undefined4)uStack_a0;
        *(undefined4 *)((long)param_1 + 0x2c) = uStack_a0._4_4_;
        *(undefined4 *)((long)param_1 + 0x51) = local_14f;
        *(uint *)((long)param_1 + 0x54) = CONCAT31(uStack_14b,local_14f._3_1_);
        param_1[1] = local_198;
        param_1[2] = uStack_190;
        param_1[3] = local_188;
        *(char *)(param_1 + 10) = local_150;
        *param_1 = 1;
        local_a8 = uVar9;
        uStack_a0 = uVar5;
        local_98 = uVar6;
        uStack_90 = uVar7;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_218);
      }
      if (cVar4 != '\x01') {
        return;
      }
LAB_0037e113:
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_140);
      return;
    }
    param_1[9] = CONCAT62(uStack_1be,local_1c0);
    *(ulong *)((long)param_1 + 0x3a) = CONCAT26(uStack_1c8,CONCAT42(uStack_1cc,uStack_1ce));
    *(ulong *)((long)param_1 + 0x42) = CONCAT26(local_1c0,uStack_1c6);
    *(ulong *)((long)param_1 + 0x2a) = CONCAT26(uStack_1d8,CONCAT42(uStack_1dc,uStack_1de));
    *(ulong *)((long)param_1 + 0x32) = CONCAT26(local_1d0,CONCAT42(uStack_1d4,uStack_1d6));
    *(ulong *)((long)param_1 + 0x1a) = CONCAT26(uStack_1e8,CONCAT42(uStack_1ec,uStack_1ee));
    *(ulong *)((long)param_1 + 0x22) = CONCAT26(local_1e0,CONCAT42(uStack_1e4,uStack_1e6));
    *(ulong *)((long)param_1 + 10) = CONCAT26(uStack_1f8,CONCAT42(uStack_1fc,uStack_1fe));
    *(ulong *)((long)param_1 + 0x12) = CONCAT26(local_1f0,CONCAT42(uStack_1f4,uStack_1f6));
    *(uint *)((long)param_1 + 0x51) = CONCAT13((undefined)uStack_1b4,uStack_1b8._1_3_);
    *(undefined4 *)((long)param_1 + 0x54) = uStack_1b4;
    *(byte *)(param_1 + 1) = local_200;
    *(char *)((long)param_1 + 9) = cStack_1ff;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x54) = uStack_1b4;
    *(uint *)((long)param_1 + 0x51) = CONCAT13((undefined)uStack_1b4,uStack_1b8._1_3_);
    param_1[9] = local_158;
    param_1[7] = local_168;
    param_1[8] = uVar9;
    param_1[5] = local_178;
    param_1[6] = uStack_170;
    param_1[3] = local_188;
    param_1[4] = uStack_180;
    param_1[1] = local_198;
    param_1[2] = uStack_190;
  }
  *(char *)(param_1 + 10) = (char)uStack_1b8;
LAB_0037dd8d:
  *param_1 = 1;
  return;
}