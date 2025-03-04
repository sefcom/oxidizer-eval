long _ZN9uu_base3211base_common11fast_decode26decode_in_chunks_to_buffer17h65f2050a33e778c1E
               (undefined8 param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
               ulong param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  code *pcVar2;
  undefined auVar3 [16];
  long local_a8;
  long local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined local_58 [16];
  long local_48;
  long local_40;
  
  if (param_4 == 0) {
    pcVar2 = *(code **)(param_2 + 0x20);
    local_98 = param_5;
    local_90 = param_6;
  }
  else {
    if (param_6 < param_4) {
      local_88 = &PTR_DAT_00249b48;
      local_80 = 1;
      local_78 = 8;
      local_70 = 0;
      uStack_68 = 0;
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E
                (&local_88,&PTR_s_src_uu_base32_src_base_common_rs_00249b88);
    }
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17he6f6165f889f215dE
              (&local_a8,param_5,param_6);
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h6a1402b86cdf1413E
              (param_8,local_a8,local_a0 + local_a8);
    if (*(long *)(param_8 + 0x10) != param_3) {
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking5panic17h8c3a660c3523e4a4E
                (&DAT_00119e87,0x43,&PTR_s_src_uu_base32_src_base_common_rs_00249ba0);
    }
    pcVar2 = *(code **)(param_2 + 0x20);
    lVar1 = (*pcVar2)(param_1,*(undefined8 *)(param_8 + 8),param_3,param_7);
    if (lVar1 != 0) {
      return lVar1;
    }
    *(undefined8 *)(param_8 + 0x10) = 0;
  }
  _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_12chunks_exact17hc443a03f678429ffE
            (local_58,local_98,local_90,param_3);
  while( true ) {
    auVar3 = _ZN98__LT_core__slice__iter__ChunksExact_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdcf811b65d811e47E
                       (local_58);
    if (auVar3._0_8_ == 0) {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h6a1402b86cdf1413E
                (param_8,local_48,local_40 + local_48);
      return 0;
    }
    if (auVar3._8_8_ != param_3) break;
    lVar1 = (*pcVar2)(param_1,auVar3._0_8_,param_3,param_7);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  _ZN4core9panicking5panic17h8c3a660c3523e4a4E
            (&DAT_00119eca,0x36,&PTR_s_src_uu_base32_src_base_common_rs_00249bd0);
}