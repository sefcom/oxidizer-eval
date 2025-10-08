undefined8
_ZN6uu_cat12write_to_end17hcdda846ae653fcc6E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_22;
  undefined local_21;
  
  auVar2 = _ZN6memchr4arch7generic6memchr21search_slice_with_raw17h8995b36c1f9a8d5dE
                     (param_1,param_2,&local_22,&local_21);
  if ((auVar2 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    uVar1 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h4762d2070cade9bdE
                      (param_3,param_1,param_2);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h7628d8a11a4ef90dE
              (uVar1,&PTR_s_src_uu_cat_src_cat_rs_001eac90);
  }
  else {
    uVar1 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hefdaf78919a7c5d0E
                      (0,auVar2._8_8_,param_1,param_2,&PTR_s_src_uu_cat_src_cat_rs_001eaca8);
    uVar1 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h4762d2070cade9bdE
                      (param_3,uVar1);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h7628d8a11a4ef90dE
              (uVar1,&PTR_s_src_uu_cat_src_cat_rs_001eacc0);
    param_2 = auVar2._8_8_;
  }
  return param_2;
}