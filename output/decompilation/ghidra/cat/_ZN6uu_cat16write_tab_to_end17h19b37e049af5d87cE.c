long _ZN6uu_cat16write_tab_to_end17h19b37e049af5d87cE(long param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined auVar6 [16];
  long local_40;
  long local_38;
  
  local_38 = param_1 + param_2;
  local_40 = param_1;
  auVar6 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17h8cb300f68696631dE
                     (&local_40);
  uVar4 = auVar6._8_8_;
  if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    lVar3 = param_1;
    do {
      uVar2 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hefdaf78919a7c5d0E
                        (0,uVar4,lVar3,param_2,&PTR_s_src_uu_cat_src_cat_rs_001eacf0);
      uVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h4762d2070cade9bdE
                        (param_3,uVar2);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h7628d8a11a4ef90dE
                (uVar2,&PTR_s_src_uu_cat_src_cat_rs_001ead08);
      if (param_2 <= uVar4) {
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001f2210)
                  (uVar4,param_2,&PTR_s_src_uu_cat_src_cat_rs_001ead20);
        pcVar1 = (code *)swi(3);
        lVar5 = (*pcVar1)();
        return lVar5;
      }
      if (*(char *)(lVar3 + uVar4) != '\t') {
        return lVar5 + uVar4;
      }
      uVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h4762d2070cade9bdE
                        (param_3,"^I",2);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h7628d8a11a4ef90dE
                (uVar2,&PTR_s_src_uu_cat_src_cat_rs_001ead38);
      param_1 = uVar4 + lVar3 + 1;
      lVar5 = lVar5 + uVar4 + 1;
      local_38 = lVar3 + param_2;
      param_2 = param_2 - (uVar4 + 1);
      local_40 = param_1;
      auVar6 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17h8cb300f68696631dE
                         ();
      uVar4 = auVar6._8_8_;
      lVar3 = param_1;
    } while ((auVar6 & (undefined  [16])0x1) != (undefined  [16])0x0);
  }
  uVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h4762d2070cade9bdE
                    (param_3,param_1,param_2);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h7628d8a11a4ef90dE
            (uVar2,&PTR_s_src_uu_cat_src_cat_rs_001eacd8);
  return lVar5 + param_2;
}