void _ZN6uu_fmt9parasplit9ParaWords12create_words17hc7811e7c94ca3f17E(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
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
    _ZN97__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_I_GT__GT_11spec_extend17h6e3e89d9b96b900dE
              (param_1,&local_e8);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if ((*(char *)(lVar2 + 0x48) == '\0') && (*(char *)(lVar2 + 0x49) == '\0')) {
    if (*(long *)(lVar1 + 0x10) != 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x60);
      uVar4 = *(undefined8 *)(*(long *)(lVar1 + 8) + 8);
      uVar6 = *(undefined8 *)(*(long *)(lVar1 + 8) + 0x10);
      auVar7 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                         (uVar5,uVar4,uVar6);
      if (auVar7._0_8_ != 0) {
LAB_001ba455:
        _ZN6uu_fmt9parasplit9WordSplit3new17h78514cc4bb6fc660E
                  (local_58,lVar2,auVar7._0_8_,auVar7._8_8_);
        _ZN97__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_I_GT__GT_11spec_extend17h41916ca398d3ca71E
                  (param_1,local_58);
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
          _ZN97__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_I_GT__GT_11spec_extend17h6367ef051ef2e384E
                    (param_1,&local_170);
        }
        return;
      }
      ppuVar3 = &PTR_s_src_uu_fmt_src_parasplit_rs_002266f8;
      goto LAB_001ba53f;
    }
  }
  else {
    if (*(long *)(lVar1 + 0x10) == 0) {
      ppuVar3 = &PTR_s_src_uu_fmt_src_parasplit_rs_00226710;
      goto LAB_001ba52e;
    }
    uVar5 = *(undefined8 *)(lVar1 + 0x50);
    uVar4 = *(undefined8 *)(*(long *)(lVar1 + 8) + 8);
    uVar6 = *(undefined8 *)(*(long *)(lVar1 + 8) + 0x10);
    auVar7 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                       (uVar5,uVar4,uVar6);
    if (auVar7._0_8_ != 0) goto LAB_001ba455;
    ppuVar3 = &PTR_s_src_uu_fmt_src_parasplit_rs_00226728;
LAB_001ba53f:
    _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE(uVar4,uVar6,uVar5,uVar6,ppuVar3);
  }
  ppuVar3 = &PTR_s_src_uu_fmt_src_parasplit_rs_002266e0;
LAB_001ba52e:
                    /* WARNING: Subroutine does not return */
  _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(0,0,ppuVar3);
}