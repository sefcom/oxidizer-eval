ulong _ZN6uu_cat16write_tab_to_end17h72aa057f554663f6E
                (long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined auVar4 [16];
  long local_48;
  long local_40;
  long local_38;
  
  local_38 = param_1 + param_2;
  local_40 = param_1;
  auVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17h12b9f0a59c842de9E
                     (&local_40);
  uVar2 = auVar4._8_8_;
  if (auVar4._0_8_ != 0) {
    local_48 = 0;
    lVar3 = param_1;
    do {
      uVar1 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2183ab5a6b7a9c40E
                        (uVar2,lVar3,param_2,&PTR_s_src_uu_cat_src_cat_rs_002187d8);
      uVar1 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                        (param_3,uVar1);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0fc6b3beec18547fE
                (uVar1,&PTR_s_src_uu_cat_src_cat_rs_002187f0);
      if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                  (uVar2,param_2,&PTR_s_src_uu_cat_src_cat_rs_00218808);
      }
      if (*(char *)(lVar3 + uVar2) != '\t') {
        return local_48 + uVar2;
      }
      uVar1 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                        (param_3,"^I",2);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0fc6b3beec18547fE
                (uVar1,&PTR_s_src_uu_cat_src_cat_rs_00218820);
      param_1 = lVar3 + uVar2 + 1;
      local_48 = local_48 + uVar2 + 1;
      local_38 = lVar3 + param_2;
      param_2 = param_2 - (uVar2 + 1);
      local_40 = param_1;
      auVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17h12b9f0a59c842de9E
                         (&local_40);
      uVar2 = auVar4._8_8_;
      lVar3 = param_1;
    } while (auVar4._0_8_ != 0);
  }
  uVar1 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                    (param_3,param_1,param_2);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0fc6b3beec18547fE
            (uVar1,&PTR_s_src_uu_cat_src_cat_rs_002187c0);
  return param_2;
}