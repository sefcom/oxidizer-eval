undefined  [16]
_ZN9uu_base3211base_common11fast_decode11fast_decode17h894b8dd38a833827E
          (undefined8 *param_1,undefined8 param_2,ulong param_3,long param_4,undefined param_5)

{
  code *pcVar1;
  undefined auVar2 [16];
  char cVar3;
  undefined uVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined8 local_1f8;
  undefined8 local_1f0;
  ulong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  ulong local_1c0;
  undefined8 local_1b8;
  undefined **local_1b0;
  ulong local_1a8;
  long local_1a0;
  undefined8 local_198;
  undefined local_190 [8];
  undefined8 local_188;
  long local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  char local_130 [256];
  
  local_198 = param_2;
  auVar10 = (**(code **)(param_4 + 0x18))(param_3);
  local_1a8 = param_3;
  local_1a0 = param_4;
  lVar5 = (**(code **)(param_4 + 0x38))(param_3);
  uVar9 = lVar5 * 0x400;
  if (uVar9 == 0) {
    (*(code *)PTR__ZN4core9panicking5panic17h8c3a660c3523e4a4E_0024de58)
              ("assertion failed: decode_in_chunks_of_size > 0",0x2e,
               &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00246cc0);
  }
  else {
    (*(code *)
      PTR__ZN9uu_base3211base_common11fast_decode17alphabet_to_table17h5796dc70b852cfc7E_0024df90)
              (local_130,auVar10._0_8_,auVar10._8_8_,param_5);
    _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17hef424161f497c89eE
              (local_190);
    if (local_180 != 0) {
      local_1f8 = 0;
      local_1f0 = 1;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1d8 = 1;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c0 = 1;
      local_1b8 = 0;
      local_150 = *param_1;
      local_158 = param_1[1];
      local_1b0 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00246d58;
      do {
        while( true ) {
                    /* try { // try from 001795ba to 001795f5 has its CatchHandler @ 001798d3 */
          auVar10 = _ZN3std2io5impls70__LT_impl_u20_std__io__Read_u20_for_u20_alloc__boxed__Box_LT_R_GT__GT_4read17h47ae2d6432a5f7b4E
                              (local_150,local_158,local_188,local_180);
          lVar5 = auVar10._8_8_;
          if (auVar10._0_8_ != 0) {
            uVar4 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(lVar5);
                    /* try { // try from 00179747 to 0017978f has its CatchHandler @ 001798b5 */
            (*(code *)PTR__ZN9uu_base3211base_common17format_read_error17h8e4fcbf99236ba5fE_0024de50
            )(&local_148,uVar4);
            local_160 = 1;
            local_178 = CONCAT44(uStack_144,local_148);
            uStack_170 = CONCAT44(uStack_13c,uStack_140);
            local_168 = local_138;
            uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h24c3b22d1586a670E(&local_178);
                    /* try { // try from 00179790 to 001797ec has its CatchHandler @ 001798d1 */
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h4172b98dff79a5a1E(lVar5);
            auVar10._8_8_ =
                 &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h01c4bfd7282bced1E_00246dc0
            ;
            auVar10._0_8_ = uVar7;
            goto LAB_001797f3;
          }
          if (lVar5 == 0) {
            auVar10 = (**(code **)(local_1a0 + 0x20))(local_1a8,local_1f0,local_1e8,&local_1e0);
            if (auVar10._0_8_ == 0) {
              lVar5 = (*(code *)
                        PTR__ZN9uu_base3211base_common11fast_decode15write_to_output17h32257a8eb7dfc8a1E_0024dfa0
                      )(&local_1e0,&local_198,&DAT_00246cf0);
              if (lVar5 == 0) {
                    /* try { // try from 00179831 to 0017983a has its CatchHandler @ 001798c7 */
                _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h4668a2ded45dd356E
                          (&local_1c8);
                    /* try { // try from 0017983b to 00179844 has its CatchHandler @ 001798c2 */
                _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h4668a2ded45dd356E
                          (&local_1e0);
                    /* try { // try from 00179845 to 0017984c has its CatchHandler @ 001798cc */
                _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h4668a2ded45dd356E
                          (&local_1f8);
                _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h4668a2ded45dd356E
                          (local_190);
                auVar2._8_8_ = 0;
                auVar2._0_8_ = param_3;
                return auVar2 << 0x40;
              }
              auVar10 = (*(code *)
                          PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE_0024de48
                        )(lVar5);
            }
            goto LAB_001797f3;
          }
          auVar11 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hc824ce28ebfb8e30E
                              (lVar5,local_188,local_180);
          lVar5 = auVar11._0_8_;
          param_3 = lVar5 + auVar11._8_8_;
          local_178 = lVar5;
          uStack_170 = param_3;
          cVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17hbce8a63a9619d87cE
                            (&local_178,local_130);
          if (cVar3 != '\0') {
            local_1b8 = 0;
            local_178 = lVar5;
            uStack_170 = param_3;
            pbVar6 = (byte *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h984abb6bfeaeb974E
                                       (&local_178);
            if (pbVar6 == (byte *)0x0) {
              auVar11._8_8_ = 0;
              auVar11._0_8_ = local_1c0;
            }
            else {
              do {
                if (local_130[*pbVar6] != '\0') {
                    /* try { // try from 0017967a to 00179684 has its CatchHandler @ 001798d5 */
                  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h034f14c94017e4c6E(&local_1c8,*pbVar6);
                }
                pbVar6 = (byte *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h984abb6bfeaeb974E
                                           (&local_178);
                auVar11._8_8_ = local_1b8;
                auVar11._0_8_ = local_1c0;
              } while (pbVar6 != (byte *)0x0);
            }
          }
          uVar8 = auVar11._8_8_;
          lVar5 = auVar11._0_8_;
          if (uVar8 < uVar9 - local_1e8) break;
          auVar10 = (*(code *)
                      PTR__ZN9uu_base3211base_common11fast_decode26decode_in_chunks_to_buffer17h65f2050a33e778c1E_0024df98
                    )(local_1a8,local_1a0,uVar9,uVar9 - local_1e8,lVar5,uVar8,&local_1e0,&local_1f8)
          ;
          if (auVar10._0_8_ != 0) goto LAB_001797f3;
          if (uVar9 <= local_1e8) goto LAB_00179868;
          lVar5 = (*(code *)
                    PTR__ZN9uu_base3211base_common11fast_decode15write_to_output17h32257a8eb7dfc8a1E_0024dfa0
                  )(&local_1e0,&local_198,&DAT_00246cf0);
          if (lVar5 != 0) {
                    /* try { // try from 0017972e to 00179736 has its CatchHandler @ 001798d1 */
            auVar10 = (*(code *)
                        PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE_0024de48
                      )(lVar5);
LAB_001797f3:
                    /* try { // try from 001797f3 to 001797fc has its CatchHandler @ 001798c7 */
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h4668a2ded45dd356E
                      (&local_1c8);
                    /* try { // try from 001797fd to 00179806 has its CatchHandler @ 001798c2 */
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h4668a2ded45dd356E
                      (&local_1e0);
                    /* try { // try from 00179807 to 0017980e has its CatchHandler @ 001798cc */
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h4668a2ded45dd356E
                      (&local_1f8);
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h4668a2ded45dd356E
                      (local_190);
            return auVar10;
          }
        }
                    /* try { // try from 001796aa to 00179724 has its CatchHandler @ 001798d3 */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h92ffd1ad14137507E
                  (&local_1f8,lVar5,uVar8 + lVar5);
      } while (local_1e8 < uVar9);
      local_1b0 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00246d70;
LAB_00179868:
                    /* try { // try from 00179868 to 0017987e has its CatchHandler @ 001798d1 */
      (*(code *)PTR__ZN4core9panicking5panic17h8c3a660c3523e4a4E_0024de58)
                ("assertion failed: leftover_buffer.len() < decode_in_chunks_of_size",0x42,local_1b0
                );
      goto LAB_001798b3;
    }
  }
                    /* try { // try from 0017989a to 001798b2 has its CatchHandler @ 001798cc */
  (*(code *)PTR__ZN4core9panicking5panic17h8c3a660c3523e4a4E_0024de58)
            ("assertion failed: !input_buffer.is_empty()",0x2a,
             &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00246cd8);
LAB_001798b3:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}