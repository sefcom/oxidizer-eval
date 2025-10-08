undefined  [16]
_ZN9uu_base3211base_common11fast_decode11fast_decode17h4656aa0145473fc1E
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
          long param_6,undefined param_7)

{
  code *pcVar1;
  undefined auVar2 [16];
  byte *pbVar3;
  char cVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined8 local_1f0;
  undefined8 local_1e8;
  ulong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  code *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  long local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  char local_130 [256];
  
  local_1a0 = param_3;
  local_170 = param_1;
  auVar15 = (**(code **)(param_6 + 0x18))(param_5);
  local_190 = param_5;
  lVar5 = (**(code **)(param_6 + 0x38))(param_5);
  uVar12 = lVar5 * 0x400;
  if (uVar12 == 0) {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_00215390)
              ("assertion failed: decode_in_chunks_of_size > 0",0x2e,
               &PTR_s_src_uu_base32_src_base_common_rs_0020e380);
  }
  else {
    _ZN9uu_base3211base_common11fast_decode17alphabet_to_table17h35e8b72e3b4f91eeE
              (local_130,auVar15._0_8_,auVar15._8_8_,param_7);
    _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h78859eff97be190cE
              (&local_188,&PTR_s_src_uu_base32_src_base_common_rs_0020e398);
    if (local_178 != 0) {
      local_1f0 = 0;
      local_1e8 = 1;
      local_1e0 = 0;
      local_1d8 = 0;
      local_1d0 = 1;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1b8 = &DAT_00000001;
      local_1b0 = 0;
      pcVar1 = *(code **)(param_2 + 0x18);
      local_198 = *(code **)(param_6 + 0x20);
      local_1a8 = *(undefined8 *)(param_4 + 0x38);
      while( true ) {
        while( true ) {
          lVar5 = local_178;
          uVar10 = local_180;
                    /* try { // try from 0016aabd to 0016ab0d has its CatchHandler @ 0016adf3 */
          auVar15 = (*pcVar1)(local_170,local_180,local_178);
          uVar7 = local_1e8;
          lVar8 = auVar15._8_8_;
          if ((auVar15 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
          cVar4 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(lVar8);
          if (cVar4 != '#') {
                    /* try { // try from 0016aca4 to 0016acec has its CatchHandler @ 0016adde */
            (*(code *)PTR__ZN9uu_base3211base_common17format_read_error17hcbecd7cf3e00f2c7E_00215228
            )(&local_148,cVar4);
            local_150 = 1;
            local_168 = (byte *)CONCAT44(uStack_144,local_148);
            uStack_160 = (byte *)CONCAT44(uStack_13c,uStack_140);
            local_158 = local_138;
            uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h338aae5a226963c6E(&local_168);
                    /* try { // try from 0016aced to 0016ada7 has its CatchHandler @ 0016adfa */
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h0226906460f1314cE(lVar8);
            auVar15._8_8_ =
                 &
                 PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h080af14acde6290bE_0020de08
            ;
            auVar15._0_8_ = uVar7;
            uVar10 = local_180;
            goto LAB_0016ad04;
          }
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h0226906460f1314cE(lVar8);
        }
        if (lVar8 == 0) break;
        auVar16 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hf9b979076e597cf4E
                            (lVar8,uVar10,lVar5,&PTR_s_src_uu_base32_src_base_common_rs_0020e3c8);
        lVar5 = auVar16._8_8_;
        pbVar14 = auVar16._0_8_;
        pbVar13 = pbVar14 + lVar5;
        local_168 = pbVar14;
        uStack_160 = pbVar13;
        cVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17hf50be5f8119f76afE
                          (&local_168,local_130);
        if (cVar4 != '\0') {
          local_1b0 = 0;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = local_1b8;
          if (pbVar14 != (byte *)0x0 && lVar5 != 0) {
            pbVar3 = pbVar14 + (lVar5 != 0);
            do {
              pbVar6 = pbVar3;
              if (local_130[*pbVar14] != '\0') {
                    /* try { // try from 0016ab81 to 0016ab90 has its CatchHandler @ 0016adf1 */
                _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hbb7f4b0d6baf1c53E
                          (&local_1c0,*pbVar14,&PTR_s_src_uu_base32_src_base_common_rs_0020e410);
              }
              auVar2._8_8_ = local_1b0;
              auVar2._0_8_ = local_1b8;
              auVar16._8_8_ = local_1b0;
              auVar16._0_8_ = local_1b8;
            } while ((pbVar6 != (byte *)0x0) &&
                    (pbVar3 = pbVar6 + (pbVar6 != pbVar13), pbVar14 = pbVar6, auVar16 = auVar2,
                    pbVar6 != pbVar13));
          }
        }
        uVar11 = auVar16._8_8_;
        lVar5 = auVar16._0_8_;
        if (uVar11 < uVar12 - local_1e0) {
                    /* try { // try from 0016abc7 to 0016ac3e has its CatchHandler @ 0016adf3 */
          _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1493bff208258dcbE
                    (&local_1f0,lVar5,lVar5 + uVar11);
          if (uVar12 <= local_1e0) {
            ppuVar9 = &PTR_s_src_uu_base32_src_base_common_rs_0020e3f8;
LAB_0016ad96:
            (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_00215390)
                      ("assertion failed: leftover_buffer.len() < decode_in_chunks_of_size",0x42,
                       ppuVar9);
            goto LAB_0016addc;
          }
        }
        else {
          auVar15 = _ZN9uu_base3211base_common11fast_decode26decode_in_chunks_to_buffer17hc1e583393dbb8c6eE
                              (local_190,local_198,uVar12,uVar12 - local_1e0,lVar5,uVar11,&local_1d8
                               ,&local_1f0);
          if (auVar15._0_8_ != 0) goto LAB_0016ad04;
          if (uVar12 <= local_1e0) {
            ppuVar9 = &PTR_s_src_uu_base32_src_base_common_rs_0020e3e0;
            goto LAB_0016ad96;
          }
          lVar5 = _ZN9uu_base3211base_common11fast_decode15write_to_output17h0fa366ee67423464E
                            (&local_1d8,local_1a0,local_1a8);
          if (lVar5 != 0) {
                    /* try { // try from 0016ac48 to 0016ac9b has its CatchHandler @ 0016adfa */
            auVar15 = (*(code *)
                        PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00215220
                      )(lVar5);
LAB_0016ad04:
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h7e5b3a09ccb0df01E
                      (local_1c0,local_1b8);
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h7e5b3a09ccb0df01E
                      (local_1d8,local_1d0);
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h7e5b3a09ccb0df01E
                      (local_1f0,local_1e8);
LAB_0016ad31:
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h7e5b3a09ccb0df01E
                      (local_188,uVar10);
            return auVar15;
          }
        }
      }
      auVar15 = (*local_198)(local_190,local_1e8,local_1e0,&local_1d8);
      if (auVar15._0_8_ != 0) goto LAB_0016ad04;
      lVar5 = _ZN9uu_base3211base_common11fast_decode15write_to_output17h0fa366ee67423464E
                        (&local_1d8,local_1a0,local_1a8);
      if (lVar5 != 0) {
        auVar15 = (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00215220
                  )(lVar5);
        goto LAB_0016ad04;
      }
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h7e5b3a09ccb0df01E
                (local_1c0,local_1b8);
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h7e5b3a09ccb0df01E
                (local_1d8,local_1d0);
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h7e5b3a09ccb0df01E
                (local_1f0,uVar7);
      auVar15 = ZEXT816(0);
      goto LAB_0016ad31;
    }
  }
                    /* try { // try from 0016adc3 to 0016addb has its CatchHandler @ 0016adf5 */
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_00215390)
            ("assertion failed: !input_buffer.is_empty()",0x2a,
             &PTR_s_src_uu_base32_src_base_common_rs_0020e3b0);
LAB_0016addc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}