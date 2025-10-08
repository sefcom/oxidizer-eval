void _ZN6uu_fmt9parasplit9FileLines14compute_indent17h06632d0fc188be5aE
               (ulong *param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  code *pcVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined auVar10 [16];
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_40 = param_4 + param_3;
  local_38 = 0;
  local_48 = param_3;
  auVar10 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                      (&local_48);
  if (auVar10._8_4_ == 0x110000) {
    uVar5 = 0;
    uVar3 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    do {
      uVar3 = auVar10._0_8_;
      uVar8 = auVar10._8_8_ & 0xffffffff;
      if (uVar3 == param_5) {
        uVar6 = uVar5;
      }
      uVar7 = auVar10._8_4_;
      if (uVar3 < param_5) {
LAB_00162be7:
        uVar9 = uVar8;
        if (uVar7 != 9) goto LAB_00162bc0;
        uVar3 = *(ulong *)(param_2 + 0x40);
        if (uVar3 == 0) {
          (*(code *)
            PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_001f7090
          )(&PTR_s_src_uu_fmt_src_parasplit_rs_001f04c0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((uVar5 | uVar3) >> 0x20 == 0) {
          uVar5 = (uVar5 & 0xffffffff) / (uVar3 & 0xffffffff);
        }
        else {
          uVar5 = uVar5 / uVar3;
        }
        uVar5 = (uVar5 + 1) * uVar3;
      }
      else {
        uVar9 = 0x20;
        if (uVar7 != 0x20) {
          if (uVar7 - 9 < 5) goto LAB_00162be7;
          if ((uVar7 < 0x80) ||
             (cVar2 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE(uVar8),
             uVar9 = uVar8, cVar2 == '\0')) goto LAB_00162c76;
        }
LAB_00162bc0:
        lVar4 = _ZN6uu_fmt9parasplit10char_width17h3a45ed9208a3863cE(uVar9);
        uVar5 = uVar5 + lVar4;
      }
      auVar10 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                          (&local_48);
    } while (auVar10._8_4_ != 0x110000);
    uVar3 = 0;
  }
LAB_00162c76:
  *param_1 = uVar3;
  param_1[1] = uVar6;
  param_1[2] = uVar5;
  return;
}