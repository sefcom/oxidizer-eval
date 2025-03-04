undefined8 * _ZN9uu_expand7Options3new17h6622e02df3c5f858E(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined uVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined uVar7;
  undefined auVar8 [16];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined3 uStack_198;
  undefined4 uStack_195;
  undefined local_191;
  undefined7 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined uStack_158;
  undefined7 uStack_157;
  undefined uStack_150;
  undefined7 uStack_14f;
  long lStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined local_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
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
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hb1d755c6d452e1a4E
            (&local_168,param_2,&anon_b3080d5aab7317ae3a539a511968743d_32_llvm_17726817573235010998,
             4);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h87985dbbd5a93980E
            (&local_e8,&anon_b3080d5aab7317ae3a539a511968743d_32_llvm_17726817573235010998,4,
             &local_168);
  if (CONCAT44(uStack_e4,local_e8) == 0) {
    puVar6 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(8,8);
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,8);
    }
    *puVar6 = 8;
    _ZN5alloc5slice4hack8into_vec17hc80358b1381473c5E(&local_188,puVar6,1);
    uVar7 = 0;
  }
  else {
    local_78 = local_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    local_88 = local_c8;
    uStack_84 = uStack_c4;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    local_98 = local_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    local_a8 = local_e8;
    uStack_a4 = uStack_e4;
    uStack_a0 = uStack_e0;
    uStack_9c = uStack_dc;
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17ha117f13ef90b4767E
              (local_100,&local_a8);
                    /* try { // try from 001b1dcd to 001b1de1 has its CatchHandler @ 001b214b */
    _ZN5alloc3str17join_generic_copy17h7514b7f1927be4b5E
              (&local_1c8,local_f8,local_f0,&DAT_0011d0a9,1);
    local_108 = local_1b8;
    local_118 = local_1c8;
    uStack_114 = uStack_1c4;
    uStack_110 = uStack_1c0;
    uStack_10c = uStack_1bc;
                    /* try { // try from 001b1e03 to 001b1e0c has its CatchHandler @ 001b2139 */
    _ZN9uu_expand14tabstops_parse17h8e62973a242abc7fE(&local_168,CONCAT44(uStack_1bc,uStack_1c0));
    local_1a8 = (undefined4)CONCAT43(uStack_160._4_4_,uStack_160._1_3_);
    uStack_1a4 = (undefined4)
                 (CONCAT17(uStack_158,CONCAT43(uStack_160._4_4_,uStack_160._1_3_)) >> 0x20);
    uStack_1a0._0_4_ = (undefined4)uStack_157;
    uVar1 = (undefined4)uStack_1a0;
    uStack_1a0._4_4_ = CONCAT13(uStack_150,(int3)((uint7)uStack_157 >> 0x20));
    uStack_198 = (undefined3)uStack_14f;
    uStack_195 = (undefined4)((uint7)uStack_14f >> 0x18);
    local_191 = (undefined)lStack_148;
    uStack_190 = (undefined7)((ulong)lStack_148 >> 8);
    if (local_168 != 0) {
      param_1[5] = local_140;
      param_1[6] = uStack_138;
      param_1[3] = CONCAT44(uStack_195,CONCAT31(uStack_198,uStack_150));
      param_1[4] = lStack_148;
      *(undefined4 *)((long)param_1 + 9) = local_1a8;
      *(undefined4 *)((long)param_1 + 0xd) = uStack_1a4;
      *(undefined4 *)((long)param_1 + 0x11) = (undefined4)uStack_1a0;
      *(undefined4 *)((long)param_1 + 0x15) = uStack_1a0._4_4_;
      *(undefined *)(param_1 + 1) = (undefined)uStack_160;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001b1e62 to 001b1e6e has its CatchHandler @ 001b214b */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha7a8555218b598c1E(&local_118);
      _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h739ff71e9f88f60aE
                (local_100);
      return param_1;
    }
    uStack_1a0._0_3_ = (undefined3)uStack_157;
    local_188 = CONCAT31((undefined3)uStack_1a0,uStack_158);
    uStack_184 = (undefined4)((uint7)uStack_157 >> 0x18);
    uStack_180 = CONCAT31(uStack_198,uStack_150);
    uStack_17c = uStack_195;
    local_178 = lStack_148;
                    /* try { // try from 001b1ecb to 001b1ed7 has its CatchHandler @ 001b214b */
    uStack_1a0._0_4_ = uVar1;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha7a8555218b598c1E(&local_118);
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h739ff71e9f88f60aE(local_100)
    ;
    uVar7 = (undefined)uStack_160;
  }
  local_1b8 = local_178;
  local_1c8 = local_188;
  uStack_1c4 = uStack_184;
  uStack_1c0 = uStack_180;
  uStack_1bc = uStack_17c;
                    /* try { // try from 001b1ef8 to 001b1f74 has its CatchHandler @ 001b216c */
  uVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"initial",7);
  bVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"no-utf8",7);
  local_168 = CONCAT44(uStack_1bc,uStack_1c0);
  uStack_160 = local_168 + local_1b8 * 8;
  uStack_158 = 0;
  uStack_157 = 0;
  auVar8 = _ZN4core4iter6traits8iterator8Iterator6reduce17hbc40c7c3e90a5c5bE(&local_168);
  if (auVar8._0_8_ != 0) {
    _ZN5alloc3str21__LT_impl_u20_str_GT_6repeat17h44a69ba09e43960aE
              (&local_188,&DAT_0011d0ab,1,auVar8._8_8_);
                    /* try { // try from 001b1f75 to 001b2008 has its CatchHandler @ 001b215d */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hb1d755c6d452e1a4E
              (&local_168,param_2,"FILES",5);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h87985dbbd5a93980E
              (&local_e8,"FILES",5,&local_168);
    if (CONCAT44(uStack_e4,local_e8) == 0) {
      puVar4 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(8,0x18);
      if (puVar4 == (undefined4 *)0x0) {
                    /* try { // try from 001b211c to 001b212b has its CatchHandler @ 001b215d */
                    /* WARNING: Subroutine does not return */
        _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,0x18);
      }
                    /* try { // try from 001b2023 to 001b203b has its CatchHandler @ 001b212c */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8a3539b285686873E
                (&local_168,&DAT_0011d0aa,1);
      uStack_198 = (undefined3)CONCAT71(uStack_157,uStack_158);
      uStack_195 = (undefined4)((uint7)uStack_157 >> 0x10);
      local_191 = (undefined)((uint7)uStack_157 >> 0x30);
      local_1a8 = (undefined4)local_168;
      uStack_1a4 = local_168._4_4_;
      *(ulong *)(puVar4 + 4) = CONCAT71(uStack_157,uStack_158);
      *puVar4 = (undefined4)local_168;
      puVar4[1] = local_168._4_4_;
      *(long *)(puVar4 + 2) = uStack_160;
                    /* try { // try from 001b2058 to 001b2069 has its CatchHandler @ 001b215d */
      uStack_1a0 = uStack_160;
      _ZN5alloc5slice4hack8into_vec17h5cf9c57446dfe35fE(&local_1a8,puVar4,1);
    }
    else {
      local_38 = local_b8;
      uStack_34 = uStack_b4;
      uStack_30 = uStack_b0;
      uStack_2c = uStack_ac;
      local_48 = local_c8;
      uStack_44 = uStack_c4;
      uStack_40 = uStack_c0;
      uStack_3c = uStack_bc;
      local_58 = local_d8;
      uStack_54 = uStack_d4;
      uStack_50 = uStack_d0;
      uStack_4c = uStack_cc;
      local_68 = local_e8;
      uStack_64 = uStack_e4;
      uStack_60 = uStack_e0;
      uStack_5c = uStack_dc;
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h37edc664cc2afb29E
                (&local_1a8,&local_68);
    }
    uStack_158 = (undefined)uStack_198;
    uStack_157 = (undefined7)(CONCAT17(local_191,CONCAT43(uStack_195,uStack_198)) >> 8);
    uStack_150 = (undefined)local_1c8;
    uStack_14f = (undefined7)(CONCAT44(uStack_1c4,local_1c8) >> 8);
    param_1[8] = local_178;
    param_1[6] = CONCAT44(uStack_184,local_188);
    param_1[7] = CONCAT44(uStack_17c,uStack_180);
    *param_1 = CONCAT44(uStack_1a4,local_1a8);
    param_1[1] = uStack_1a0;
    param_1[4] = CONCAT44(uStack_1bc,uStack_1c0);
    param_1[5] = local_1b8;
    param_1[2] = CONCAT71(uStack_157,uStack_158);
    param_1[3] = CONCAT71(uStack_14f,uStack_150);
    *(undefined *)(param_1 + 9) = uVar2;
    *(byte *)((long)param_1 + 0x49) = bVar3 ^ 1;
    *(undefined *)((long)param_1 + 0x4a) = uVar7;
    return param_1;
  }
                    /* try { // try from 001b20fd to 001b2109 has its CatchHandler @ 001b216c */
  uVar5 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_0021cd80);
                    /* catch() { ... } // from try @ 001b2023 with catch @ 001b212c */
  _ZN72__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h5c0e019cee89ab6cE
            (param_2);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha7a8555218b598c1E(&local_188);
  _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17h9cac72b98b8e7a45E(&local_1c8);
  puVar6 = (undefined8 *)_Unwind_Resume(uVar5);
  return puVar6;
}