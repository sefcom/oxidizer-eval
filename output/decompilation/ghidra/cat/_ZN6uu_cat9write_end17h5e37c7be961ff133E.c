long _ZN6uu_cat9write_end17h5e37c7be961ff133E
               (undefined8 param_1,long param_2,long param_3,char param_4,char param_5)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  long lStack_28;
  long lStack_20;
  
  if (param_5 != '\0') {
    if (param_4 == '\0') {
      pcVar2 = "\t";
      uVar3 = 1;
    }
    else {
      pcVar2 = "^I";
      uVar3 = 2;
    }
    lVar1 = _ZN6uu_cat21write_nonprint_to_end17h8a88ce313d35316bE
                      (param_2,param_3,param_1,pcVar2,uVar3);
    return lVar1;
  }
  if (param_4 != '\0') {
    lVar1 = _ZN6uu_cat16write_tab_to_end17h72aa057f554663f6E();
    return lVar1;
  }
  lStack_20 = param_2 + param_3;
  lStack_28 = param_2;
  auVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17h0aef01da5877f86aE
                     (&lStack_28);
  if (auVar4._0_8_ == 0) {
    uVar3 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                      (param_1,param_2,param_3);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0fc6b3beec18547fE
              (uVar3,&PTR_s_src_uu_cat_src_cat_rs_00218778);
  }
  else {
    uVar3 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2183ab5a6b7a9c40E
                      (auVar4._8_8_,param_2,param_3,&PTR_s_src_uu_cat_src_cat_rs_00218790);
    uVar3 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                      (param_1,uVar3);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0fc6b3beec18547fE
              (uVar3,&PTR_s_src_uu_cat_src_cat_rs_002187a8);
    param_3 = auVar4._8_8_;
  }
  return param_3;
}