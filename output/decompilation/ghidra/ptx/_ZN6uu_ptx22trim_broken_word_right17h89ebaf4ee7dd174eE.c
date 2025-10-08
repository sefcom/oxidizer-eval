ulong _ZN6uu_ptx22trim_broken_word_right17h89ebaf4ee7dd174eE
                (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  
  _ZN6uu_ptx20assert_str_integrity17h53447a84469126dbE(param_2,param_3,param_4);
  uVar5 = param_4;
  if (param_4 != param_2 && param_3 != param_4) {
    uVar6 = param_4 - 1;
    if (param_2 <= uVar6) {
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0037fef0)
                (uVar6,param_2,&PTR_s_src_uu_ptx_src_ptx_rs_00351958);
LAB_0022c4f8:
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0037fef0)
                (param_4,param_2,&PTR_s_src_uu_ptx_src_ptx_rs_00351970);
LAB_0022c50b:
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0037fef0)
                (param_4 - 1,param_2,&PTR_s_src_uu_ptx_src_ptx_rs_00351988);
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    uVar2 = *(uint *)(param_1 + -4 + param_4 * 4);
    if (((4 < uVar2 - 9) && (uVar2 != 0x20)) &&
       ((uVar2 < 0x80 ||
        (cVar4 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE(),
        cVar4 == '\0')))) {
      if (param_2 <= param_4) goto LAB_0022c4f8;
      uVar2 = *(uint *)(param_1 + param_4 * 4);
      if ((4 < uVar2 - 9) && (uVar2 != 0x20)) {
        if (uVar2 < 0x80) {
          if (param_4 <= param_3) {
            return param_4;
          }
        }
        else {
          cVar4 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE();
          if (param_4 <= param_3 || cVar4 != '\0') {
            return param_4;
          }
        }
        if (param_3 < uVar6) {
          uVar6 = param_3;
        }
        do {
          uVar1 = param_4 - 1;
          if (param_2 <= uVar1) goto LAB_0022c50b;
          uVar2 = *(uint *)(param_1 + uVar1 * 4);
          uVar5 = param_4;
        } while ((((0x20 < (ulong)uVar2) || ((0x100003e00U >> ((ulong)uVar2 & 0x3f) & 1) == 0)) &&
                 ((uVar2 < 0x80 ||
                  (cVar4 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE(),
                  cVar4 == '\0')))) && (uVar5 = uVar6, param_4 = uVar1, param_3 < uVar1));
      }
    }
  }
  return uVar5;
}