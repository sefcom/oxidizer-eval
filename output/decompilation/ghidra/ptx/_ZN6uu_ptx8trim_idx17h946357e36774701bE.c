undefined  [16]
_ZN6uu_ptx8trim_idx17h946357e36774701bE(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined auVar8 [16];
  
  _ZN6uu_ptx20assert_str_integrity17h53447a84469126dbE(param_2,param_3,param_4);
  uVar5 = param_3;
  if (param_3 < param_4) {
    do {
      if (param_2 <= uVar5) {
        if (param_3 <= param_2) {
          param_3 = param_2;
        }
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0037fef0)
                  (param_3,param_2,&PTR_s_src_uu_ptx_src_ptx_rs_003519a0);
        uVar6 = uVar5;
        goto LAB_0022c609;
      }
      uVar1 = *(uint *)(param_1 + uVar5 * 4);
      if (((4 < uVar1 - 9) && (uVar1 != 0x20)) &&
         ((uVar1 < 0x80 ||
          (cVar3 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE(),
          cVar3 == '\0')))) goto LAB_0022c596;
      uVar5 = uVar5 + 1;
      uVar4 = param_4;
    } while (param_4 != uVar5);
  }
  else {
LAB_0022c596:
    uVar4 = uVar5;
    uVar6 = param_4;
    if (uVar5 < param_4) {
      do {
        uVar7 = uVar6 - 1;
        if (param_2 <= uVar7) {
LAB_0022c609:
          (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0037fef0)
                    (uVar6 - 1,param_2,&PTR_s_src_uu_ptx_src_ptx_rs_003519b8);
          pcVar2 = (code *)swi(3);
          auVar8 = (*pcVar2)();
          return auVar8;
        }
        uVar1 = *(uint *)(param_1 + uVar7 * 4);
      } while ((((uVar1 - 9 < 5) || (uVar1 == 0x20)) ||
               ((param_4 = uVar6, 0x7f < uVar1 &&
                (cVar3 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE(),
                cVar3 != '\0')))) && (param_4 = uVar5, uVar6 = uVar7, uVar5 < uVar7));
    }
  }
  auVar8._8_8_ = param_4;
  auVar8._0_8_ = uVar4;
  return auVar8;
}