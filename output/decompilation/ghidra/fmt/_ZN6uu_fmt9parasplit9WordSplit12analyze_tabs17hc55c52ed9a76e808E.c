void _ZN6uu_fmt9parasplit9WordSplit12analyze_tabs17hc55c52ed9a76e808E
               (long *param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined auVar8 [16];
  ulong local_58;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_40 = param_4 + param_3;
  local_38 = 0;
  lVar5 = 0;
  lVar7 = 1;
  local_48 = param_3;
LAB_001ba659:
  uVar6 = 0;
LAB_001ba668:
  do {
    auVar8 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                       (&local_48);
    uVar4 = auVar8._8_4_;
    if (uVar4 == 0x20) goto LAB_001ba665;
    if (uVar4 == 0x110000) {
      lVar7 = 0;
LAB_001ba6f7:
      *param_1 = lVar5;
      param_1[1] = local_58;
      param_1[2] = uVar6;
      param_1[3] = lVar7;
      param_1[4] = auVar8._0_8_;
      return;
    }
    if (4 < uVar4 - 9) {
      if ((uVar4 < 0x80) ||
         (cVar3 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE
                            (auVar8._8_8_ & 0xffffffff), cVar3 == '\0')) goto LAB_001ba6f7;
LAB_001ba665:
      uVar6 = uVar6 + 1;
      goto LAB_001ba668;
    }
    if (uVar4 != 9) goto LAB_001ba665;
    if (lVar5 == 0) break;
    uVar1 = *(ulong *)(param_2 + 0x40);
    if (uVar1 == 0) {
      _ZN4core9panicking11panic_const23panic_const_div_by_zero17haded503194f0bf6eE
                (&PTR_s_src_uu_fmt_src_parasplit_rs_00226758);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((uVar6 | uVar1) >> 0x20 == 0) {
      uVar6 = (uVar6 & 0xffffffff) / (uVar1 & 0xffffffff);
    }
    else {
      uVar6 = uVar6 / uVar1;
    }
    uVar6 = (uVar6 + 1) * uVar1;
    lVar5 = 1;
  } while( true );
  lVar5 = 1;
  local_58 = uVar6;
  goto LAB_001ba659;
}