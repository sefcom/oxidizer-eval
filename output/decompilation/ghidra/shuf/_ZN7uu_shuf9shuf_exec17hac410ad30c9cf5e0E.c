undefined  [16] _ZN7uu_shuf9shuf_exec17hac410ad30c9cf5e0E(long param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined8 unaff_R12;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined local_b8 [16];
  long local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  
  if (*param_2 == -0x8000000000000000) {
                    /* try { // try from 00171229 to 00171239 has its CatchHandler @ 00171603 */
    uVar5 = (*(code *)PTR__ZN3std2io5stdio6stdout17h077da66234850927E_0023be90)();
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h47aa554a48e45ddfE(uVar5);
    ppuVar7 = (undefined **)&DAT_00234ef8;
LAB_001712be:
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h2cd23da24bfb1765E
              (&local_60,0x2000,uVar5,ppuVar7);
    if (param_2[3] == -0x8000000000000000) {
                    /* try { // try from 001712e3 to 001712e8 has its CatchHandler @ 001715e3 */
      local_90 = (*(code *)PTR__ZN4rand4rngs6thread10thread_rng17hb51ef0c041e68525E_0023be98)();
      local_98 = 1;
      bVar3 = true;
      bVar2 = true;
      cVar4 = *(char *)(param_2 + 7);
joined_r0x001714b3:
      if (cVar4 == '\0') {
                    /* try { // try from 001714bd to 001714ca has its CatchHandler @ 001715c4 */
        local_b8 = (*(code *)
                     PTR__ZN77__LT_alloc__vec__Vec_LT__RF__u5b_u8_u5d__GT__u20_as_u20_uu_shuf__Shufable_GT_15partial_shuffle17h44688f65b4d991d5E_0023bec0
                   )(param_1,&local_98,param_2[6]);
        do {
                    /* try { // try from 001714f0 to 001714f7 has its CatchHandler @ 00171601 */
          auVar8 = _ZN104__LT_core__iter__adapters__copied__Copied_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc52c302a5b3cda84E
                             (local_b8);
          if (auVar8._0_8_ == 0) goto LAB_00171471;
                    /* try { // try from 00171501 to 00171567 has its CatchHandler @ 0017160e */
          uVar5 = _ZN54__LT__RF__u5b_u8_u5d__u20_as_u20_uu_shuf__Writable_GT_12write_all_to17hde169efa667ae96bE
                            (auVar8._0_8_,auVar8._8_8_,&local_60);
          auVar8 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h8348fd0bc33a1273E
                             (uVar5);
          if (auVar8._0_8_ != 0) break;
          local_78 = CONCAT31(local_78._1_3_,*(undefined *)((long)param_2 + 0x39));
          if ((ulong)(local_60 - local_50) < 2) {
            uVar5 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17ha5c718a139f25917E
                              (&local_60,&local_78,1);
          }
          else {
            *(undefined *)(local_58 + local_50) = *(undefined *)((long)param_2 + 0x39);
            local_50 = local_50 + 1;
            uVar5 = 0;
          }
          auVar8 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h9b8bd7b325589adcE
                             (uVar5);
        } while (auVar8._0_8_ == 0);
      }
      else {
        cVar4 = _ZN77__LT_alloc__vec__Vec_LT__RF__u5b_u8_u5d__GT__u20_as_u20_uu_shuf__Shufable_GT_8is_empty17h1f0a71404213f066E
                          (*(undefined8 *)(param_1 + 0x10));
        bVar2 = bVar3;
        if (cVar4 == '\0') {
          uVar1 = param_2[6];
          if (uVar1 != 0) {
            uVar6 = 0;
            do {
              uVar6 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17he44ce7238773bbb8E
                                (uVar6);
                    /* try { // try from 001713db to 001713e8 has its CatchHandler @ 001715e1 */
              auVar8 = (*(code *)
                         PTR__ZN77__LT_alloc__vec__Vec_LT__RF__u5b_u8_u5d__GT__u20_as_u20_uu_shuf__Shufable_GT_6choose17h3523e9548edb7615E_0023beb8
                       )(param_1,&local_98);
                    /* try { // try from 001713e9 to 0017145b has its CatchHandler @ 0017160c */
              uVar5 = _ZN54__LT__RF__u5b_u8_u5d__u20_as_u20_uu_shuf__Writable_GT_12write_all_to17hde169efa667ae96bE
                                (auVar8._0_8_,auVar8._8_8_,&local_60);
              auVar8 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h84611fd28ee95474E
                                 (uVar5);
              if (auVar8._0_8_ != 0) goto LAB_00171577;
              local_b8[0] = *(undefined *)((long)param_2 + 0x39);
              if ((ulong)(local_60 - local_50) < 2) {
                uVar5 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17ha5c718a139f25917E
                                  (&local_60,local_b8,1);
              }
              else {
                *(undefined *)(local_58 + local_50) = *(undefined *)((long)param_2 + 0x39);
                local_50 = local_50 + 1;
                uVar5 = 0;
              }
              auVar8 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h8a19c40d77640a40E
                                 (uVar5);
              if (auVar8._0_8_ != 0) goto LAB_00171577;
            } while (uVar6 < uVar1);
          }
LAB_00171471:
                    /* try { // try from 00171471 to 0017147e has its CatchHandler @ 001715e3 */
          _ZN4core3ptr40drop_in_place_LT_uu_shuf__WrappedRng_GT_17h54b6737fa54cf34dE(&local_98);
                    /* try { // try from 0017147f to 00171488 has its CatchHandler @ 00171603 */
          _ZN4core3ptr115drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17ha3b05e8de249092aE
                    (&local_60);
          uVar5 = 0;
          goto LAB_001715ac;
        }
                    /* try { // try from 00171314 to 0017134f has its CatchHandler @ 001715c4 */
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h118a158527e98cdcE
                  (&local_78,"no lines to repeat",0x12);
        local_a8 = local_68;
        local_b8._4_4_ = uStack_74;
        local_b8._0_4_ = local_78;
        local_b8._12_4_ = uStack_6c;
        local_b8._8_4_ = uStack_70;
        local_a0 = 1;
        uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1b07cb96cdbb794fE(local_b8);
        auVar8._8_8_ = &
                       PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hf8e643beb0ff60d5E_00234de0
        ;
        auVar8._0_8_ = uVar5;
      }
LAB_00171577:
                    /* try { // try from 00171577 to 00171580 has its CatchHandler @ 001715e3 */
      _ZN4core3ptr40drop_in_place_LT_uu_shuf__WrappedRng_GT_17h54b6737fa54cf34dE(&local_98);
    }
    else {
      local_a8 = param_2[5];
      local_b8._0_8_ = param_2[3];
      local_b8._8_8_ = param_2[4];
                    /* try { // try from 00171379 to 00171396 has its CatchHandler @ 001715ca */
      _ZN3std2fs4File4open17h1adc330ffb93a969E(&local_78,local_b8._8_8_);
      _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hb868c3ea7eaf226eE
                (&local_88,&local_78,local_b8);
      if (local_88 == 0) {
        local_94 = local_80;
        local_98 = 0;
                    /* try { // try from 001714a3 to 001714ac has its CatchHandler @ 001715e3 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h82574bbf4bf299f6E(local_b8);
        bVar3 = false;
        bVar2 = false;
        cVar4 = *(char *)(param_2 + 7);
        goto joined_r0x001714b3;
      }
      auVar8._12_4_ = uStack_7c;
      auVar8._8_4_ = local_80;
      auVar8._0_8_ = local_88;
                    /* try { // try from 001713ac to 001713b5 has its CatchHandler @ 001715e3 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h82574bbf4bf299f6E(local_b8);
      bVar2 = false;
    }
                    /* try { // try from 00171581 to 0017158a has its CatchHandler @ 00171603 */
    _ZN4core3ptr115drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17ha3b05e8de249092aE
              (&local_60);
  }
  else {
    local_a8 = param_2[2];
    local_b8._0_8_ = *param_2;
    local_b8._8_8_ = param_2[1];
                    /* try { // try from 00171259 to 00171276 has its CatchHandler @ 001715ec */
    _ZN3std2fs4File6create17hb8ccd5b0dd142e83E(&local_78,local_b8._8_8_);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hddbe3a5b2ee70831E
              (&local_88,&local_78,local_b8);
    if (local_88 == 0) {
                    /* try { // try from 0017129f to 001712a3 has its CatchHandler @ 001715ec */
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha833a196b0b969ecE(local_80);
                    /* try { // try from 001712aa to 001712cf has its CatchHandler @ 00171603 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h82574bbf4bf299f6E(local_b8);
      ppuVar7 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h7b66de550f035524E_00234f48;
      goto LAB_001712be;
    }
    auVar8._12_4_ = uStack_7c;
    auVar8._8_4_ = local_80;
    auVar8._0_8_ = local_88;
                    /* try { // try from 00171289 to 00171292 has its CatchHandler @ 00171603 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h82574bbf4bf299f6E(local_b8);
    bVar2 = true;
  }
  unaff_R12 = auVar8._8_8_;
  uVar5 = auVar8._0_8_;
  if ((bVar2) && (param_2[3] != -0x8000000000000000)) {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h82574bbf4bf299f6E(param_2 + 3);
  }
LAB_001715ac:
  auVar9._8_8_ = unaff_R12;
  auVar9._0_8_ = uVar5;
  return auVar9;
}