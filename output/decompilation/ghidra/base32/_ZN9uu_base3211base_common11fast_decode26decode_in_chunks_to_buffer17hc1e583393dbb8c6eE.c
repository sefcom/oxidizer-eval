long _ZN9uu_base3211base_common11fast_decode26decode_in_chunks_to_buffer17hc1e583393dbb8c6eE
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
LAB_0016a86e:
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_12chunks_exact17h851c5b7066f706ddE
              (local_58,param_5,param_6,param_3,&PTR_s_src_uu_base32_src_base_common_rs_0020e350);
    while( true ) {
      auVar3 = _ZN98__LT_core__slice__iter__ChunksExact_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8c59ef229e894e03E
                         (local_58);
      lVar2 = auVar3._8_8_;
      if (auVar3._0_8_ == 0) {
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1493bff208258dcbE
                  (param_8,local_48,local_40 + local_48);
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
              (0,&local_b0,&local_c8,&local_a8,&PTR_s_src_uu_base32_src_base_common_rs_0020e368);
  }
  else if (param_4 <= param_6) {
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17hc6a248af15b664fbE
              (&local_78,param_5,param_6);
    local_c0 = local_68;
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1493bff208258dcbE
              (param_8,local_78,local_70 + local_78);
    local_b8 = *(long *)(param_8 + 0x10);
    if (local_b8 != param_3) goto LAB_0016a952;
    lVar2 = (*param_2)(param_1,*(undefined8 *)(param_8 + 8),param_3,param_7);
    if (lVar2 != 0) {
      return lVar2;
    }
    *(undefined8 *)(param_8 + 0x10) = 0;
    param_5 = local_c0;
    param_6 = local_60;
    goto LAB_0016a86e;
  }
  local_a8 = &PTR_s_mid_>_len_0020da30;
  local_a0 = 1;
  local_98 = 8;
  local_90 = 0;
  uStack_88 = 0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00215130)
            (&local_a8,&PTR_s_src_uu_base32_src_base_common_rs_0020e320);
LAB_0016a952:
  local_a8 = (undefined **)0x0;
  (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_00215428)
            (0,&local_b8,&local_c8,&local_a8,&PTR_s_src_uu_base32_src_base_common_rs_0020e338);
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}