undefined  [16]
_ZN9uu_base3211base_common11fast_encode11fast_encode17he2f2c369f4c434ffE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
          long param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar7;
  undefined auVar8 [16];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined **local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined local_c0 [8];
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulong uVar6;
  
  local_d8 = param_3;
  local_d0 = param_4;
  local_c8 = param_2;
  lVar4 = (**(code **)(param_4 + 0x30))(param_3);
  uVar7 = lVar4 * 0x400;
  if (uVar7 == 0) {
    (*(code *)PTR__ZN4core9panicking5panic17h8c3a660c3523e4a4E_0024de58)
              ("assertion failed: encode_in_chunks_of_size > 0",0x2e,
               &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00246860);
  }
  else {
    if (param_5 == 0) {
      local_100 = 0;
      local_f8 = 1;
      local_f0 = 0;
      local_e8 = 0x4c;
    }
    else if (param_6 == 0) {
      local_100 = 0x8000000000000000;
    }
    else {
      local_100 = 0;
      local_f8 = 1;
      local_f0 = 0;
      local_e8 = param_6;
    }
                    /* try { // try from 00173e9d to 00173ea6 has its CatchHandler @ 001741a0 */
    _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17hef424161f497c89eE
              (local_c0);
    if (local_b0 != 0) {
      local_a8 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a0 = 1;
      local_88 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_80 = 1;
      uVar5 = *param_1;
      uVar1 = param_1[1];
      local_e0 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_002468f8;
      do {
        while( true ) {
                    /* try { // try from 00173f1a to 00173fdd has its CatchHandler @ 001741a7 */
          auVar8 = _ZN3std2io5impls70__LT_impl_u20_std__io__Read_u20_for_u20_alloc__boxed__Box_LT_R_GT__GT_4read17h47ae2d6432a5f7b4E
                             (uVar5,uVar1,local_b8,local_b0);
          uVar6 = auVar8._8_8_;
          if (auVar8._0_8_ != 0) {
            uVar3 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(uVar6);
                    /* try { // try from 00173ffd to 00174045 has its CatchHandler @ 00174189 */
            (*(code *)PTR__ZN9uu_base3211base_common17format_read_error17h8e4fcbf99236ba5fE_0024de50
            )(&local_48,uVar3);
            local_50 = 1;
            local_68 = local_48;
            uStack_64 = uStack_44;
            uStack_60 = uStack_40;
            uStack_5c = uStack_3c;
            local_58 = local_38;
            uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h24c3b22d1586a670E(&local_68);
                    /* try { // try from 00174046 to 001740b6 has its CatchHandler @ 001741a5 */
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h4172b98dff79a5a1E(uVar6);
            auVar8._8_8_ = &
                           PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h01c4bfd7282bced1E_00246960
            ;
            auVar8._0_8_ = uVar5;
            goto LAB_001740bd;
          }
          if (uVar6 == 0) {
            auVar8 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_15make_contiguous17h31f2209311368518E
                               (&local_a8);
            auVar8 = (**(code **)(local_d0 + 0x28))(local_d8,auVar8._0_8_,auVar8._8_8_,&local_88);
            if (auVar8._0_8_ == 0) {
              lVar4 = (*(code *)
                        PTR__ZN9uu_base3211base_common11fast_encode15write_to_output17h5f7916e193db6f77E_0024de40
                      )(&local_100,&local_88,&local_c8,&DAT_00246890,1);
              if (lVar4 == 0) {
                    /* try { // try from 00174100 to 0017410c has its CatchHandler @ 00174196 */
                _ZN4core3ptr70drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT_u8_GT__GT_17h874bc9c36ea52246E
                          (&local_88);
                    /* try { // try from 0017410d to 00174116 has its CatchHandler @ 0017419b */
                _ZN4core3ptr70drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT_u8_GT__GT_17h874bc9c36ea52246E
                          (&local_a8);
                    /* try { // try from 00174117 to 00174120 has its CatchHandler @ 001741a0 */
                _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h4668a2ded45dd356E
                          (local_c0);
                _ZN4core3ptr98drop_in_place_LT_core__option__Option_LT_uu_base32__base_common__fast_encode__LineWrapping_GT__GT_17h4fb2dff8abbfc10aE
                          (&local_100);
                return ZEXT816(0);
              }
              auVar8 = (*(code *)
                         PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE_0024de48
                       )(lVar4);
            }
            goto LAB_001740bd;
          }
          auVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hc824ce28ebfb8e30E
                             (uVar6,local_b8,local_b0);
          lVar4 = auVar8._0_8_;
          if (uVar6 < uVar7 - uStack_90) break;
          auVar8 = (*(code *)
                     PTR__ZN9uu_base3211base_common11fast_encode26encode_in_chunks_to_buffer17h2c86eb655e89e74fE_0024de38
                   )(local_d8,local_d0,uVar7,uVar7 - uStack_90,lVar4,auVar8._8_8_,&local_88,
                     &local_a8);
          if (auVar8._0_8_ != 0) goto LAB_001740bd;
          if (uVar7 <= uStack_90) goto LAB_0017413c;
          lVar4 = (*(code *)
                    PTR__ZN9uu_base3211base_common11fast_encode15write_to_output17h5f7916e193db6f77E_0024de40
                  )(&local_100,&local_88,&local_c8,&DAT_00246890,0);
          if (lVar4 != 0) {
                    /* try { // try from 00173fe7 to 00173fef has its CatchHandler @ 001741a5 */
            auVar8 = (*(code *)
                       PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE_0024de48
                     )(lVar4);
LAB_001740bd:
                    /* try { // try from 001740bd to 001740c9 has its CatchHandler @ 00174196 */
            _ZN4core3ptr70drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT_u8_GT__GT_17h874bc9c36ea52246E
                      (&local_88);
                    /* try { // try from 001740ca to 001740d3 has its CatchHandler @ 0017419b */
            _ZN4core3ptr70drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT_u8_GT__GT_17h874bc9c36ea52246E
                      (&local_a8);
                    /* try { // try from 001740d4 to 001740dd has its CatchHandler @ 001741a0 */
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h4668a2ded45dd356E
                      (local_c0);
            _ZN4core3ptr98drop_in_place_LT_core__option__Option_LT_uu_base32__base_common__fast_encode__LineWrapping_GT__GT_17h4fb2dff8abbfc10aE
                      (&local_100);
            return auVar8;
          }
        }
        _ZN175__LT_alloc__collections__vec_deque__VecDeque_LT_T_C_A_GT__u20_as_u20_alloc__collections__vec_deque__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h253d70056d378ecdE
                  (&local_a8,lVar4,lVar4 + auVar8._8_8_);
      } while (uStack_90 < uVar7);
      local_e0 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00246910;
LAB_0017413c:
                    /* try { // try from 0017413c to 00174152 has its CatchHandler @ 001741a5 */
      (*(code *)PTR__ZN4core9panicking5panic17h8c3a660c3523e4a4E_0024de58)
                ("assertion failed: leftover_buffer.len() < encode_in_chunks_of_size",0x42,local_e0)
      ;
      goto LAB_00174187;
    }
  }
                    /* try { // try from 0017416e to 00174186 has its CatchHandler @ 0017419b */
  (*(code *)PTR__ZN4core9panicking5panic17h8c3a660c3523e4a4E_0024de58)
            ("assertion failed: !input_buffer.is_empty()",0x2a,
             &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00246878);
LAB_00174187:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}