long _ZN9uu_base3211base_common11fast_encode26encode_in_chunks_to_buffer17h14c8a5bd648182a6E
               (undefined8 param_1,code *param_2,long param_3,ulong param_4,undefined8 param_5,
               ulong param_6,undefined8 param_7,long param_8)

{
  code *pcVar1;
  long lVar2;
  undefined auVar3 [16];
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  long local_70;
  undefined8 local_68;
  ulong local_60;
  undefined local_58 [16];
  long local_48;
  long local_40;
  
  local_c8 = param_3;
  if (param_4 == 0) {
LAB_00169e95:
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_12chunks_exact17h851c5b7066f706ddE
              (local_58,param_5,param_6,param_3,&PTR_s_src_uu_base32_src_base_common_rs_0020e1b8);
    while( true ) {
      auVar3 = _ZN98__LT_core__slice__iter__ChunksExact_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8c59ef229e894e03E
                         (local_58);
      lVar2 = auVar3._8_8_;
      if (auVar3._0_8_ == 0) {
        _ZN175__LT_alloc__collections__vec_deque__VecDeque_LT_T_C_A_GT__u20_as_u20_alloc__collections__vec_deque__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17he0a1ee24594fab2aE
                  (param_8,local_48,local_40 + local_48,
                   &PTR_s_src_uu_base32_src_base_common_rs_0020e1d0);
        return 0;
      }
      local_b0 = lVar2;
      if (lVar2 != local_c8) break;
      lVar2 = (*param_2)(param_1,auVar3._0_8_,lVar2,param_7);
      if (lVar2 != 0) {
        return lVar2;
      }
    }
    local_a8 = (undefined **)0x0;
    (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_00215428)
              (0,&local_b0,&local_c8,&local_a8,&PTR_s_src_uu_base32_src_base_common_rs_0020e1e8);
  }
  else if (param_4 <= param_6) {
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17hc6a248af15b664fbE
              (&local_78,param_5,param_6);
    local_c0 = local_68;
    _ZN175__LT_alloc__collections__vec_deque__VecDeque_LT_T_C_A_GT__u20_as_u20_alloc__collections__vec_deque__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17he0a1ee24594fab2aE
              (param_8,local_78,local_70 + local_78,&PTR_s_src_uu_base32_src_base_common_rs_0020e188
              );
    local_b8 = *(long *)(param_8 + 0x18);
    if (local_b8 != param_3) goto LAB_00169f89;
    auVar3 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_15make_contiguous17hf17d47ca8c7d0746E
                       (param_8);
    lVar2 = (*param_2)(param_1,auVar3._0_8_,auVar3._8_8_,param_7);
    if (lVar2 != 0) {
      return lVar2;
    }
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_8truncate17had30ab5ba989df72E(param_8);
    *(undefined8 *)(param_8 + 0x10) = 0;
    param_5 = local_c0;
    param_6 = local_60;
    goto LAB_00169e95;
  }
  local_a8 = &PTR_s_mid_>_len_0020da30;
  local_a0 = 1;
  local_98 = 8;
  local_90 = 0;
  uStack_88 = 0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00215130)
            (&local_a8,&PTR_s_src_uu_base32_src_base_common_rs_0020e170);
LAB_00169f89:
  local_a8 = (undefined **)0x0;
  (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_00215428)
            (0,&local_b8,&local_c8,&local_a8,&PTR_s_src_uu_base32_src_base_common_rs_0020e1a0);
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}