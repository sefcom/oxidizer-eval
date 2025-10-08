undefined  [16]
_ZN5uu_dd8progress10ProgUpdate15write_prog_line17h98858b211566047aE
          (ulong *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined auVar5 [16];
  code *pcVar6;
  undefined auVar7 [16];
  long lVar8;
  byte bVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined *local_178;
  undefined8 local_170;
  undefined8 **local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined **local_148;
  code *local_140;
  ulong *local_138;
  undefined *local_130;
  undefined8 *local_128;
  code *local_120;
  undefined **local_118;
  code *local_110;
  undefined **local_108;
  code *local_100;
  undefined **local_f8;
  code *local_f0;
  undefined **local_e8;
  code *local_e0;
  uint local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined *local_a8;
  ulong local_a0;
  undefined *local_98;
  ulong local_90;
  undefined local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_48;
  undefined8 local_40;
  
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  local_d4 = param_3;
  local_b8 = uVar2;
  local_b0 = uVar3;
  _ZN5uu_dd7numbers23to_magnitude_and_suffix17hda63ca50ad718accE(&local_78,uVar2,uVar3,1);
                    /* try { // try from 0018e800 to 0018e814 has its CatchHandler @ 0018edd0 */
  _ZN5uu_dd7numbers23to_magnitude_and_suffix17hda63ca50ad718accE(&local_60,uVar2,uVar3,0);
  uVar4 = *param_1;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar4;
  uVar1 = *(uint *)(param_1 + 1);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (ulong)uVar1 / 1000000;
  auVar7 = auVar11 * ZEXT816(1000) + auVar7;
  auVar11 = _ZN4core3cmp3Ord3max17haee459c21cd56eb4E(auVar7._0_8_,auVar7._8_8_);
  if (auVar11._0_8_ == 0 && auVar11._8_8_ == 0) {
                    /* try { // try from 0018edc1 to 0018edcd has its CatchHandler @ 0018ede9 */
    (*(code *)
      PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_00246c78)
              (&PTR_DAT_0023db00);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  auVar11 = (*(code *)PTR___udivti3_00246c58)(uVar2,uVar3,auVar11._0_8_);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auVar11._0_8_;
                    /* try { // try from 0018e870 to 0018e887 has its CatchHandler @ 0018ede9 */
  _ZN5uu_dd7numbers23to_magnitude_and_suffix17hda63ca50ad718accE
            (&local_48,SUB168(auVar5 * ZEXT816(1000),0),
             SUB168(auVar5 * ZEXT816(1000),8) + auVar11._8_8_ * 1000,1);
  auVar10._8_4_ = (int)(uVar4 >> 0x20);
  auVar10._0_8_ = uVar4;
  auVar10._12_4_ = _UNK_0011e234;
  local_a8 = &DAT_00121c2d;
  bVar9 = (byte)local_d4;
  if (bVar9 == 0) {
    local_a8 = (undefined *)0x1;
  }
  local_a0 = (ulong)(local_d4 & 0xff);
  local_98 = &DAT_00121c2c;
  if (bVar9 != 0) {
    local_98 = (undefined *)0x1;
  }
  local_90 = (ulong)(bVar9 ^ 1);
  local_d0 = 0;
  local_c8 = 1;
  local_c0 = 0;
  local_160 = CONCAT35(local_160._5_3_,0x200000000);
  local_178 = (undefined *)0x0;
  local_168 = (undefined ***)0x0;
                    /* try { // try from 0018e94e to 0018e958 has its CatchHandler @ 0018edee */
  (*(code *)
    PTR__ZN107__LT_uucore__features__extendedbigdecimal__ExtendedBigDecimal_u20_as_u20_core__convert__From_LT_f64_GT__GT_4from17h5c0de203e1930a2eE_00246c60
  )((double)(int)uVar1 / _s__0011e730 +
    (auVar10._8_8_ - _UNK_0011e1b8) + ((double)CONCAT44(_s__0011e230,(int)uVar4) - _DAT_0011e1b0),
    &local_148);
                    /* try { // try from 0018e959 to 0018e97d has its CatchHandler @ 0018edd5 */
  lVar8 = _ZN179__LT_uucore__features__format__num_format__Float_u20_as_u20_uucore__features__format__num_format__Formatter_LT__RF_uucore__features__extendedbigdecimal__ExtendedBigDecimal_GT__GT_3fmt17hdc90306913db6cd6E
                    (&local_178,&local_d0,&local_148);
  if (lVar8 == 0) {
    _ZN4core3ptr77drop_in_place_LT_uucore__features__extendedbigdecimal__ExtendedBigDecimal_GT_17hc8630fe00a9ef4b6E
              (local_148,local_140);
                    /* try { // try from 0018e9b7 to 0018ed4a has its CatchHandler @ 0018edee */
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_002466e8)
              (&local_148,local_c8,local_c0);
    local_88 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h69fd6910a96ed175E(&local_148);
    local_168 = &local_148;
    local_118 = &local_48;
    if (uVar2 == 1 && uVar3 == 0) {
      local_148 = &local_a8;
      local_140 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
      local_138 = &local_b8;
      local_130 = 
      PTR__ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hf75db8903b60bf5dE_00246c70
      ;
      local_128 = (undefined8 *)local_88;
      local_120 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
      local_110 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_108 = &local_98;
      local_100 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
      local_178 = &DAT_0023d990;
      local_170 = 5;
      local_158 = 0;
      local_160 = 5;
      lVar8 = (*(code *)
                PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_00246c50
              )(param_2,&local_178);
      if (lVar8 != 0) {
        auVar12 = (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00246c68
                  )(lVar8);
        goto LAB_0018ed55;
      }
    }
    else if (uVar3 < (uVar2 < 1000)) {
      local_148 = &local_a8;
      local_140 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
      local_138 = &local_b8;
      local_130 = 
      PTR__ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hf75db8903b60bf5dE_00246c70
      ;
      local_128 = (undefined8 *)local_88;
      local_120 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
      local_110 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_108 = &local_98;
      local_100 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
      local_178 = &DAT_0023d9e0;
      local_170 = 5;
      local_158 = 0;
      local_160 = 5;
      lVar8 = (*(code *)
                PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_00246c50
              )(param_2,&local_178);
      if (lVar8 != 0) {
        auVar12 = (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00246c68
                  )(lVar8);
        goto LAB_0018ed55;
      }
    }
    else {
      local_148 = &local_a8;
      if (uVar3 < (uVar2 < 0x400)) {
        local_140 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
        local_138 = &local_b8;
        local_130 = 
        PTR__ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hf75db8903b60bf5dE_00246c70
        ;
        local_128 = &local_78;
        local_120 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_118 = (undefined **)local_88;
        local_110 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
        local_100 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_f8 = &local_98;
        local_f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
        local_178 = &DAT_0023da30;
        local_170 = 6;
        local_158 = 0;
        local_160 = 6;
        local_108 = &local_48;
        lVar8 = (*(code *)
                  PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_00246c50
                )(param_2,&local_178);
        if (lVar8 != 0) {
          auVar12 = (*(code *)
                      PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00246c68
                    )(lVar8);
          goto LAB_0018ed55;
        }
      }
      else {
        local_140 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
        local_138 = &local_b8;
        local_130 = 
        PTR__ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hf75db8903b60bf5dE_00246c70
        ;
        local_128 = &local_78;
        local_120 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_118 = &local_60;
        local_110 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_108 = (undefined **)local_88;
        local_100 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
        local_f0 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_e8 = &local_98;
        local_e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
        local_178 = &DAT_0023da90;
        local_170 = 7;
        local_158 = 0;
        local_160 = 7;
        local_f8 = &local_48;
        lVar8 = (*(code *)
                  PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_00246c50
                )(param_2,&local_178);
        if (lVar8 != 0) {
          auVar12 = (*(code *)
                      PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00246c68
                    )(lVar8);
          goto LAB_0018ed55;
        }
      }
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar4;
    auVar12 = auVar12 << 0x40;
  }
  else {
    auVar12 = (*(code *)
                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00246c68
              )(lVar8);
    _ZN4core3ptr77drop_in_place_LT_uucore__features__extendedbigdecimal__ExtendedBigDecimal_GT_17hc8630fe00a9ef4b6E
              (local_148,local_140);
  }
LAB_0018ed55:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h270e478e73f6834bE
            (local_d0,local_c8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hf7ee706d4db893baE(local_48,local_40);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hf7ee706d4db893baE(local_60,local_58);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hf7ee706d4db893baE(local_78,local_70);
  return auVar12;
}