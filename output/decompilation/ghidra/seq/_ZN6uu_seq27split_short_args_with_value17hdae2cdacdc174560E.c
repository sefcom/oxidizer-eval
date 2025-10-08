void _ZN6uu_seq27split_short_args_with_value17hdae2cdacdc174560E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulong local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_90 = 0;
  local_88 = 8;
  local_80 = 0;
  local_98 = param_1;
  local_78 = param_2;
  local_70 = param_3;
  do {
                    /* try { // try from 0016ae41 to 0016ae4f has its CatchHandler @ 0016af8c */
    while ((_ZN104__LT_core__iter__adapters__cloned__Cloned_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hbe531c7145f633bdE
                      (&local_68,&local_78), uVar3 = local_58, uVar2 = local_60, uVar1 = local_68,
           2 < local_58 &&
           (((cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h4d9821dd0efab10fE
                                (local_60,"-f"), cVar6 != '\0' ||
             (cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h4d9821dd0efab10fE
                                (uVar2,"-s"), cVar6 != '\0')) ||
            (cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h4d9821dd0efab10fE
                               (uVar2,"-t"), cVar6 != '\0'))))) {
      _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17hda5a3ca5c8bb6888E
                (&local_50,uVar2,uVar3);
      uVar5 = local_38;
      uVar4 = local_40;
                    /* try { // try from 0016aef3 to 0016af58 has its CatchHandler @ 0016afa1 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h8638b58448d95b8cE
                (&local_d0,local_50,local_48);
      local_a8 = local_c0;
      local_b8 = (undefined4)local_d0;
      uStack_b4 = local_d0._4_4_;
      uStack_b0 = (undefined4)uStack_c8;
      uStack_ac = uStack_c8._4_4_;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hd09925dbeb462d0fE
                (&local_90,&local_b8,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0021a448);
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h8638b58448d95b8cE
                (&local_d0,uVar4,uVar5);
      local_a8 = local_c0;
      local_b8 = (undefined4)local_d0;
      uStack_b4 = local_d0._4_4_;
      uStack_b0 = (undefined4)uStack_c8;
      uStack_ac = uStack_c8._4_4_;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hd09925dbeb462d0fE
                (&local_90,&local_b8,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0021a460);
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h47150904e9ede072E(uVar1,uVar2)
      ;
    }
    local_d0 = uVar1;
    uStack_c8 = uVar2;
    local_c0 = uVar3;
                    /* try { // try from 0016ae2f to 0016ae40 has its CatchHandler @ 0016af8a */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hd09925dbeb462d0fE
              (&local_90,&local_d0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0021a430);
  } while( true );
}