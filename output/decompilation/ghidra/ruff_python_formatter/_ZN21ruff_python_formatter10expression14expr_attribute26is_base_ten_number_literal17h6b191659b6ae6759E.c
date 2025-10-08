ulong _ZN21ruff_python_formatter10expression14expr_attribute26is_base_ten_number_literal17h6b191659b6ae6759E
                (int *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  if (*param_1 == 0x15) {
    uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if (*(long *)(param_1 + 2) == 0) {
      auVar4 = _ZN14ruff_text_size5range122__LT_impl_u20_core__convert__From_LT_ruff_text_size__range__TextRange_GT__u20_for_u20_core__ops__range__Range_LT_T_GT__GT_4from17h5565193b43bb472cE
                         (param_1[8],param_1[9]);
      auVar5 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                         (auVar4._0_8_,auVar4._8_8_,param_2,param_3);
      pcVar2 = auVar5._0_8_;
      if (pcVar2 == (char *)0x0) {
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                  (param_2,param_3,auVar4._0_8_,auVar4._8_8_,
                   &PTR_s_crates_ruff_python_formatter_src_0067d828);
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      if (((1 < auVar5._8_8_) && (*pcVar2 == '0')) && ((byte)(pcVar2[1] + 0xbeU) < 0x37)) {
        uVar3 = 0x3fdffeffbfdffe >> (pcVar2[1] + 0xbeU & 0x3f);
      }
      goto LAB_004091a2;
    }
    if ((int)*(long *)(param_1 + 2) == 1) goto LAB_004091a2;
  }
  uVar3 = 0;
LAB_004091a2:
  return uVar3 & 0xffffff01;
}