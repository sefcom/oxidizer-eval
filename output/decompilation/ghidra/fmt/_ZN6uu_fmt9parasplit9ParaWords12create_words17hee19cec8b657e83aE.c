void _ZN6uu_fmt9parasplit9ParaWords12create_words17hee19cec8b657e83aE(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 extraout_RDX;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined8 local_178;
  long local_170;
  long local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined local_120;
  undefined local_f0;
  long local_e8;
  long local_e0;
  undefined local_9f;
  undefined local_5f;
  undefined local_58 [48];
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0x68) != '\0') {
    local_e8 = *(long *)(lVar1 + 8);
    local_e0 = local_e8 + *(long *)(lVar1 + 0x10) * 0x18;
    local_9f = 2;
    local_5f = 2;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_16extend_desugared17h1f213722aaceb79aE(param_1,&local_e8);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if ((*(char *)(lVar2 + 0x48) == '\0') && (*(char *)(lVar2 + 0x49) != '\x01')) {
    if (*(long *)(lVar1 + 0x10) == 0) goto LAB_001637af;
    uVar7 = *(undefined8 *)(lVar1 + 0x60);
    uVar6 = *(undefined8 *)(*(long *)(lVar1 + 8) + 8);
    uVar5 = *(undefined8 *)(*(long *)(lVar1 + 8) + 0x10);
    auVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                       (uVar7,uVar6,uVar5);
    if (auVar8._0_8_ != 0) {
LAB_001636f0:
      _ZN6uu_fmt9parasplit9WordSplit3new17h0ffb4261eb0e58edE
                (local_58,lVar2,auVar8._0_8_,auVar8._8_8_);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_16extend_desugared17h8f7a02158fb7bf61E(param_1,local_58);
      lVar1 = *(long *)(param_1 + 0x20);
      if (1 < *(ulong *)(lVar1 + 0x10)) {
        local_178 = *(undefined8 *)(lVar1 + 0x60);
        local_158 = *(undefined8 *)(param_1 + 0x18);
        local_170 = *(long *)(lVar1 + 8);
        local_168 = local_170 + *(ulong *)(lVar1 + 0x10) * 0x18;
        local_160 = 1;
        local_120 = 2;
        local_f0 = 2;
        local_150 = (undefined *)&local_178;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_16extend_desugared17h46897b5c40727b65E(param_1,&local_170);
      }
      return;
    }
    ppuVar4 = &PTR_s_src_uu_fmt_src_parasplit_rs_001f0598;
LAB_0016378c:
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001f7098)
              (uVar6,uVar5,uVar7,uVar5,ppuVar4);
  }
  else if (*(long *)(lVar1 + 0x10) != 0) {
    uVar7 = *(undefined8 *)(lVar1 + 0x50);
    uVar6 = *(undefined8 *)(*(long *)(lVar1 + 8) + 8);
    uVar5 = *(undefined8 *)(*(long *)(lVar1 + 8) + 0x10);
    auVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                       (uVar7,uVar6,uVar5);
    if (auVar8._0_8_ != 0) goto LAB_001636f0;
    ppuVar4 = &PTR_s_src_uu_fmt_src_parasplit_rs_001f05c8;
    goto LAB_0016378c;
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001f6fb0)
            (0,0,&PTR_s_src_uu_fmt_src_parasplit_rs_001f05b0);
LAB_001637af:
  puVar3 = (undefined8 *)0x0;
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001f6fb0)
            (0,0,&PTR_s_src_uu_fmt_src_parasplit_rs_001f0580);
  _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h4cdf891c9f292a6fE
            (puVar3 + 2);
  *puVar3 = 0;
  puVar3[1] = extraout_RDX;
  *(undefined2 *)(puVar3 + 7) = 1;
  return;
}