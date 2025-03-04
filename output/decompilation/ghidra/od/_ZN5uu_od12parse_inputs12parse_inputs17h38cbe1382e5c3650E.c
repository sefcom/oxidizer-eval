undefined4 *
_ZN5uu_od12parse_inputs12parse_inputs17h38cbe1382e5c3650E
          (undefined4 *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined local_60 [8];
  undefined8 *local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  (**(code **)(param_3 + 0x18))(local_60);
  pcVar1 = *(code **)(param_3 + 0x20);
                    /* try { // try from 001d2c40 to 001d2cf3 has its CatchHandler @ 001d2ddf */
  cVar4 = (*pcVar1)(param_2,&PTR_s_traditional_00241e48,1);
  if (cVar4 != '\0') {
    _ZN5uu_od12parse_inputs24parse_inputs_traditional17h2788ba0cc89acb8cE(param_1,local_58,local_50)
    ;
    goto LAB_001d2d0d;
  }
  if ((local_50 - 1U < 2) &&
     (cVar4 = (*pcVar1)(param_2,&PTR_s_address_radixread_bytesskip_byte_00241e58,6), cVar4 == '\0'))
  {
    lVar6 = local_50 + -1;
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                (lVar6,0,&PTR_s_src_uu_od_src_parse_inputs_rs_00241eb8);
    }
    _ZN5uu_od12parse_inputs20parse_offset_operand17h71d36fc2ef6ee229E
              (&local_30,local_58[lVar6 * 2],local_58[lVar6 * 2 + 1]);
    if (local_30 == 0) {
      if (local_50 == 1) {
        uVar2 = *local_58;
        uVar3 = local_58[1];
        local_48 = 0;
        uVar5 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2b,&local_48);
                    /* try { // try from 001d2d54 to 001d2dde has its CatchHandler @ 001d2ddf */
        cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h0450dff97e96928eE
                          (uVar2,uVar3,uVar5,1);
        if (cVar4 == '\0') goto LAB_001d2d88;
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha029c3acdf37c34fE
                  (&local_48,"-",1);
      }
      else {
LAB_001d2d88:
        if (local_50 != 2) goto LAB_001d2cca;
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha029c3acdf37c34fE
                  (&local_48,*local_58,local_58[1]);
      }
      *(undefined8 *)(param_1 + 4) = local_38;
      *param_1 = local_48;
      param_1[1] = uStack_44;
      param_1[2] = uStack_40;
      param_1[3] = uStack_3c;
      *(undefined8 *)(param_1 + 6) = local_28;
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_001d2d0d;
    }
  }
LAB_001d2cca:
  if (local_50 == 0) {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hef5220248dbc45bbE(local_60);
  }
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hff0e80f7eaa39b66E
            (&local_48,local_58,local_58 + local_50 * 2);
  *(undefined8 *)(param_1 + 4) = local_38;
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  *(undefined8 *)(param_1 + 8) = 2;
LAB_001d2d0d:
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h74e9455f611cd62bE(local_60);
  return param_1;
}