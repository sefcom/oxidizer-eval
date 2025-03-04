void _ZN6uu_fmt9parasplit9FileLines14compute_indent17hf6cb82fa5c657dd2E
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
  undefined auVar9 [16];
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_40 = param_4 + param_3;
  local_38 = 0;
  local_48 = param_3;
  auVar9 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                     (&local_48);
  if (auVar9._8_4_ == 0x110000) {
    uVar5 = 0;
    uVar3 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    do {
      uVar3 = auVar9._0_8_;
      uVar8 = auVar9._8_8_ & 0xffffffff;
      if (uVar3 == param_5) {
        uVar6 = uVar5;
      }
      uVar7 = auVar9._8_4_;
      if (uVar3 < param_5) {
LAB_001b9915:
        if (uVar7 != 9) goto LAB_001b98f0;
        uVar3 = *(ulong *)(param_2 + 0x40);
        if (uVar3 == 0) {
          _ZN4core9panicking11panic_const23panic_const_div_by_zero17haded503194f0bf6eE
                    (&PTR_s_src_uu_fmt_src_parasplit_rs_00226638);
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
        if (uVar7 != 0x20) {
          if (uVar7 - 9 < 5) goto LAB_001b9915;
          if ((uVar7 < 0x80) ||
             (cVar2 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE(uVar8),
             cVar2 == '\0')) goto LAB_001b998b;
        }
LAB_001b98f0:
        lVar4 = _ZN6uu_fmt9parasplit10char_width17h6ecf292e25e6b16bE(uVar8);
        uVar5 = uVar5 + lVar4;
      }
      auVar9 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                         (&local_48);
    } while (auVar9._8_4_ != 0x110000);
    uVar3 = 0;
  }
LAB_001b998b:
  *param_1 = uVar3;
  param_1[1] = uVar6;
  param_1[2] = uVar5;
  return;
}