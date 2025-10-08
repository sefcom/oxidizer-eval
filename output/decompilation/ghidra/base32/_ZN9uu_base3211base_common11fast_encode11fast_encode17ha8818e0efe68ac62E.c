undefined  [16]
_ZN9uu_base3211base_common11fast_encode11fast_encode17ha8818e0efe68ac62E
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
          long param_6,byte param_7,long param_8)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  code *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
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
  ulong uVar5;
  
  local_d8 = param_3;
  local_c8 = param_5;
  lVar3 = (**(code **)(param_6 + 0x30))(param_5);
  uVar7 = lVar3 * 0x400;
  if (uVar7 == 0) {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_00215390)
              ("assertion failed: encode_in_chunks_of_size > 0",0x2e,
               &PTR_s_src_uu_base32_src_base_common_rs_0020e248);
  }
  else {
    if ((param_7 & 1) == 0) {
      local_f8 = 0;
      local_f0 = 1;
      local_e8 = 0;
      local_e0 = 0x4c;
    }
    else if (param_8 == 0) {
      local_f8 = 0x8000000000000000;
    }
    else {
      local_f8 = 0;
      local_f0 = 1;
      local_e8 = 0;
      local_e0 = param_8;
    }
                    /* try { // try from 0016a272 to 0016a282 has its CatchHandler @ 0016a598 */
    _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h78859eff97be190cE
              (&local_a0,&PTR_s_src_uu_base32_src_base_common_rs_0020e260);
    if (local_90 != 0) {
      local_c0 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_b8 = 1;
      local_88 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_80 = 1;
      pcVar1 = *(code **)(param_2 + 0x18);
      local_d0 = *(code **)(param_6 + 0x28);
      param_7 = param_7 & param_8 == 0;
      uVar4 = *(undefined8 *)(param_4 + 0x38);
      do {
        while( true ) {
          while( true ) {
            lVar3 = local_90;
            uVar8 = local_98;
                    /* try { // try from 0016a30a to 0016a402 has its CatchHandler @ 0016a59d */
            auVar9 = (*pcVar1)(param_1,local_98,local_90);
            uVar5 = auVar9._8_8_;
            if ((auVar9 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
            cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(uVar5);
            if (cVar2 != '#') {
                    /* try { // try from 0016a47e to 0016a4c6 has its CatchHandler @ 0016a585 */
              (*(code *)
                PTR__ZN9uu_base3211base_common17format_read_error17hcbecd7cf3e00f2c7E_00215228)
                        (&local_48,cVar2);
              local_50 = 1;
              local_68 = local_48;
              uStack_64 = uStack_44;
              uStack_60 = uStack_40;
              uStack_5c = uStack_3c;
              local_58 = local_38;
              uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h338aae5a226963c6E(&local_68);
                    /* try { // try from 0016a4c7 to 0016a54e has its CatchHandler @ 0016a5a4 */
              _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h0226906460f1314cE(uVar5);
              auVar9._8_8_ = &
                             PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h080af14acde6290bE_0020de08
              ;
              auVar9._0_8_ = uVar4;
              uVar8 = local_98;
              goto LAB_0016a4de;
            }
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h0226906460f1314cE(uVar5);
          }
          if (uVar5 == 0) {
            auVar9 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_15make_contiguous17hf17d47ca8c7d0746E
                               (&local_c0);
            auVar9 = (*local_d0)(local_c8,auVar9._0_8_,auVar9._8_8_,&local_88);
            if (auVar9._0_8_ == 0) {
              lVar3 = _ZN9uu_base3211base_common11fast_encode15write_to_output17ha42615d27832fe86E
                                (&local_f8,&local_88,local_d8,uVar4,1,param_7);
              if (lVar3 == 0) {
                auVar9 = ZEXT816(0);
              }
              else {
                auVar9 = (*(code *)
                           PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00215220
                         )(lVar3);
              }
            }
            goto LAB_0016a4de;
          }
          auVar9 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hf9b979076e597cf4E
                             (uVar5,uVar8,lVar3,&PTR_s_src_uu_base32_src_base_common_rs_0020e290);
          lVar3 = auVar9._0_8_;
          if (uVar5 < uVar7 - uStack_a8) break;
          auVar9 = _ZN9uu_base3211base_common11fast_encode26encode_in_chunks_to_buffer17h14c8a5bd648182a6E
                             (local_c8,local_d0,uVar7,uVar7 - uStack_a8,lVar3,auVar9._8_8_,&local_88
                              ,&local_c0);
          if (auVar9._0_8_ != 0) goto LAB_0016a4de;
          if (uVar7 <= uStack_a8) {
            ppuVar6 = &PTR_s_src_uu_base32_src_base_common_rs_0020e2a8;
            goto LAB_0016a53d;
          }
          lVar3 = _ZN9uu_base3211base_common11fast_encode15write_to_output17ha42615d27832fe86E
                            (&local_f8,&local_88,local_d8,uVar4,0,param_7);
          if (lVar3 != 0) {
                    /* try { // try from 0016a40c to 0016a475 has its CatchHandler @ 0016a5a4 */
            auVar9 = (*(code *)
                       PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00215220
                     )(lVar3);
LAB_0016a4de:
            _ZN4core3ptr70drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT_u8_GT__GT_17h17b31cfa219152d8E
                      (&local_88);
            _ZN4core3ptr70drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT_u8_GT__GT_17h17b31cfa219152d8E
                      (&local_c0);
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h7e5b3a09ccb0df01E
                      (local_a0,uVar8);
            _ZN4core3ptr98drop_in_place_LT_core__option__Option_LT_uu_base32__base_common__fast_encode__LineWrapping_GT__GT_17h53f970ba90049357E
                      (local_f8,local_f0);
            return auVar9;
          }
        }
        _ZN175__LT_alloc__collections__vec_deque__VecDeque_LT_T_C_A_GT__u20_as_u20_alloc__collections__vec_deque__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17he0a1ee24594fab2aE
                  (&local_c0,lVar3,lVar3 + auVar9._8_8_,
                   &PTR_s_src_uu_base32_src_base_common_rs_0020e2c0);
      } while (uStack_a8 < uVar7);
      ppuVar6 = &PTR_s_src_uu_base32_src_base_common_rs_0020e2d8;
LAB_0016a53d:
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_00215390)
                ("assertion failed: leftover_buffer.len() < encode_in_chunks_of_size",0x42,ppuVar6);
      goto LAB_0016a583;
    }
  }
                    /* try { // try from 0016a56a to 0016a582 has its CatchHandler @ 0016a59f */
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_00215390)
            ("assertion failed: !input_buffer.is_empty()",0x2a,
             &PTR_s_src_uu_base32_src_base_common_rs_0020e278);
LAB_0016a583:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}