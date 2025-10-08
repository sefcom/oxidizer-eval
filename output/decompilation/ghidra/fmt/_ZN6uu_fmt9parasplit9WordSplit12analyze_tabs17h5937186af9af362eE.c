void _ZN6uu_fmt9parasplit9WordSplit12analyze_tabs17h5937186af9af362eE
               (long *param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined auVar9 [16];
  ulong local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_40 = param_4 + param_3;
  local_38 = 0;
  lVar7 = 0;
  local_48 = param_3;
LAB_001638b1:
  uVar8 = 0;
  auVar9 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                     (&local_48);
  iVar5 = auVar9._8_4_;
  do {
    if (iVar5 != 0x20) goto LAB_001638e5;
LAB_001638d5:
    do {
      do {
        uVar8 = uVar8 + 1;
        auVar9 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                           (&local_48);
      } while (auVar9._8_4_ == 0x20);
LAB_001638e5:
      uVar6 = auVar9._8_4_;
      if (uVar6 == 0x110000) {
        lVar4 = 0;
LAB_0016397f:
        *param_1 = lVar7;
        param_1[1] = local_50;
        param_1[2] = uVar8;
        param_1[3] = lVar4;
        param_1[4] = auVar9._0_8_;
        return;
      }
      if (4 < uVar6 - 9) {
        if ((uVar6 < 0x80) ||
           (cVar3 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE
                              (auVar9._8_8_ & 0xffffffff), cVar3 == '\0')) {
          lVar4 = 1;
          goto LAB_0016397f;
        }
        goto LAB_001638d5;
      }
    } while (uVar6 != 9);
    if (lVar7 == 0) break;
    uVar1 = *(ulong *)(param_2 + 0x40);
    if (uVar1 == 0) {
      (*(code *)
        PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_001f7090)
                (&PTR_s_src_uu_fmt_src_parasplit_rs_001f05f8);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((uVar8 | uVar1) >> 0x20 == 0) {
      uVar8 = (uVar8 & 0xffffffff) / (uVar1 & 0xffffffff);
    }
    else {
      uVar8 = uVar8 / uVar1;
    }
    uVar8 = (uVar8 + 1) * uVar1;
    lVar7 = 1;
    auVar9 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                       (&local_48);
    iVar5 = auVar9._8_4_;
  } while( true );
  lVar7 = 1;
  local_50 = uVar8;
  goto LAB_001638b1;
}