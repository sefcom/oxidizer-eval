undefined8
_ZN6uu_cat9write_end17heef5c1c4c44423b4E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined uStack_22;
  undefined uStack_21;
  
  if ((param_5 & 1) == 0) {
    if ((param_4 & 1) != 0) {
      uVar1 = _ZN6uu_cat16write_tab_to_end17h19b37e049af5d87cE();
      return uVar1;
    }
    auVar2 = _ZN6memchr4arch7generic6memchr21search_slice_with_raw17h8995b36c1f9a8d5dE
                       (param_2,param_3,&uStack_22,&uStack_21);
    if ((auVar2 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      uVar1 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h4762d2070cade9bdE
                        (param_1,param_2,param_3);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h7628d8a11a4ef90dE
                (uVar1,&PTR_s_src_uu_cat_src_cat_rs_001eac90);
    }
    else {
      uVar1 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hefdaf78919a7c5d0E
                        (0,auVar2._8_8_,param_2,param_3,&PTR_s_src_uu_cat_src_cat_rs_001eaca8);
      uVar1 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h4762d2070cade9bdE
                        (param_1,uVar1);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h7628d8a11a4ef90dE
                (uVar1,&PTR_s_src_uu_cat_src_cat_rs_001eacc0);
      param_3 = auVar2._8_8_;
    }
    return param_3;
  }
  if ((param_4 & 1) != 0) {
    uVar1 = _ZN6uu_cat21write_nonprint_to_end17h33db268fb6c16bcdE(param_2,param_3,param_1,"^I",2);
    return uVar1;
  }
  uVar1 = _ZN6uu_cat21write_nonprint_to_end17h33db268fb6c16bcdE(param_2,param_3,param_1,"\t",1);
  return uVar1;
}