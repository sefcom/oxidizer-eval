void _ZN21ruff_python_formatter10expression19expr_number_literal17normalize_integer17h77508505660cbd2cE
               (undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  int extraout_EDX;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [12];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_80 = 0;
  uStack_78 = 1;
  local_70 = 0;
  uStack_60 = param_2 + param_3;
  local_58 = 0;
  local_68 = param_2;
  _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
            (&local_68);
  if (extraout_EDX != 0x30) goto LAB_0040bc68;
  auVar10 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                      (&local_68);
  uVar4 = auVar10._8_4_;
  if (uVar4 == 0x58) {
LAB_0040bba1:
    bVar2 = true;
  }
  else {
    if (uVar4 == 0x110000) goto LAB_0040bc68;
    if (uVar4 == 0x78) goto LAB_0040bba1;
    bVar2 = false;
  }
  if ((uVar4 - 0x42 < 0x17) && ((0x402001U >> (uVar4 - 0x42 & 0x1f) & 1) != 0)) {
                    /* try { // try from 0040bbc2 to 0040bc52 has its CatchHandler @ 0040bd3c */
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_80,0x30);
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_80,uVar4 | 0x20);
    lVar6 = auVar10._0_8_ + 1;
    if (!bVar2) {
      if (lVar6 == 0) goto LAB_0040bc68;
      goto LAB_0040bc2c;
    }
  }
  else {
    if (!bVar2) goto LAB_0040bc68;
    lVar6 = 0;
  }
  local_38 = local_58;
  local_48 = (undefined4)local_68;
  uStack_44 = local_68._4_4_;
  uStack_40 = (undefined4)uStack_60;
  uStack_3c = uStack_60._4_4_;
  local_50 = param_1;
  auVar8 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                     (&local_48);
  if (auVar8._8_4_ != 0x110000) {
    do {
      lVar5 = auVar8._0_8_;
      if (auVar8._8_4_ - 0x61 < 6) {
        auVar9 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                           (lVar6,lVar5,param_2,param_3);
        lVar3 = auVar9._0_8_;
        if (lVar3 == 0) {
          ppuVar7 = &PTR_s_crates_ruff_python_formatter_src_0067db00;
          goto LAB_0040bd1a;
        }
                    /* try { // try from 0040bcec to 0040bd0a has its CatchHandler @ 0040bd3a */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
                  (&local_80,lVar3,auVar9._8_8_ + lVar3);
        _ZN5alloc6string6String4push17h0ede46164189e411E(&local_80,auVar8._8_4_ & 0x47);
        lVar6 = lVar5 + 1;
      }
      auVar8 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                         (&local_48);
    } while (auVar8._8_4_ != 0x110000);
  }
  param_1 = local_50;
  if (lVar6 != 0) {
LAB_0040bc2c:
    auVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                       (lVar6,param_2,param_3);
    lVar5 = auVar8._0_8_;
    if (lVar5 != 0) {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
                (&local_80,lVar5,auVar8._8_8_ + lVar5);
      param_1[2] = local_70;
      *param_1 = local_80;
      param_1[1] = uStack_78;
      return;
    }
    ppuVar7 = &PTR_s_crates_ruff_python_formatter_src_0067dae8;
    lVar5 = param_3;
LAB_0040bd1a:
                    /* try { // try from 0040bd1a to 0040bd2b has its CatchHandler @ 0040bd3c */
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
              (param_2,param_3,lVar6,lVar5,ppuVar7);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
LAB_0040bc68:
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = 0x8000000000000000;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdec1f9eb81adb7adE(&local_80);
  return;
}