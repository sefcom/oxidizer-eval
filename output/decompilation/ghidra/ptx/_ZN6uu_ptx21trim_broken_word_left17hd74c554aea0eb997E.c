ulong _ZN6uu_ptx21trim_broken_word_left17hd74c554aea0eb997E
                (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong extraout_RDX;
  
  uVar7 = param_4;
  _ZN6uu_ptx20assert_str_integrity17h53447a84469126dbE(param_2,param_3,param_4);
  uVar8 = CONCAT71((int7)(uVar7 >> 8),param_3 == 0 || param_3 == param_4);
  uVar7 = param_3;
  if (param_3 != 0 && param_3 != param_4) {
    if (param_2 <= param_3) {
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0037fef0)
                (param_3,param_2,&PTR_s_src_uu_ptx_src_ptx_rs_00351928);
LAB_0022c3c6:
      if (param_3 <= param_2) {
        param_3 = param_2;
      }
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0037fef0)
                (param_3,param_2,&PTR_s_src_uu_ptx_src_ptx_rs_00351940);
      _ZN6uu_ptx20assert_str_integrity17h53447a84469126dbE(param_2,extraout_RDX,uVar8);
      uVar7 = uVar8;
      if (uVar8 != param_2 && extraout_RDX != uVar8) {
        uVar6 = uVar8 - 1;
        if (param_2 <= uVar6) {
          (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0037fef0)
                    (uVar6,param_2,&PTR_s_src_uu_ptx_src_ptx_rs_00351958);
LAB_0022c4f8:
          (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0037fef0)
                    (uVar8,param_2,&PTR_s_src_uu_ptx_src_ptx_rs_00351970);
LAB_0022c50b:
          (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0037fef0)
                    (uVar8 - 1,param_2,&PTR_s_src_uu_ptx_src_ptx_rs_00351988);
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return uVar7;
        }
        uVar5 = *(uint *)((param_3 - 4) + uVar8 * 4);
        if (((4 < uVar5 - 9) && (uVar5 != 0x20)) &&
           ((uVar5 < 0x80 ||
            (cVar3 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE(),
            cVar3 == '\0')))) {
          if (param_2 <= uVar8) goto LAB_0022c4f8;
          uVar5 = *(uint *)(param_3 + uVar8 * 4);
          if ((4 < uVar5 - 9) && (uVar5 != 0x20)) {
            if (uVar5 < 0x80) {
              if (uVar8 <= extraout_RDX) {
                return uVar8;
              }
            }
            else {
              cVar3 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE();
              if (uVar8 <= extraout_RDX || cVar3 != '\0') {
                return uVar8;
              }
            }
            if (extraout_RDX < uVar6) {
              uVar6 = extraout_RDX;
            }
            do {
              uVar1 = uVar8 - 1;
              if (param_2 <= uVar1) goto LAB_0022c50b;
              uVar5 = *(uint *)(param_3 + uVar1 * 4);
              uVar7 = uVar8;
            } while ((((0x20 < (ulong)uVar5) || ((0x100003e00U >> ((ulong)uVar5 & 0x3f) & 1) == 0))
                     && ((uVar5 < 0x80 ||
                         (cVar3 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE
                                            (), cVar3 == '\0')))) &&
                    (uVar7 = uVar6, uVar8 = uVar1, extraout_RDX < uVar1));
          }
        }
      }
      return uVar7;
    }
    uVar5 = *(uint *)(param_1 + param_3 * 4);
    if ((((4 < uVar5 - 9) && (uVar5 != 0x20)) &&
        ((uVar5 < 0x80 ||
         (cVar3 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE(),
         cVar3 == '\0')))) &&
       ((uVar5 = *(uint *)(param_1 + -4 + param_3 * 4), 4 < uVar5 - 9 && (uVar5 != 0x20)))) {
      if (uVar5 < 0x80) {
        if (param_4 <= param_3) {
          return param_3;
        }
      }
      else {
        bVar4 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE();
        bVar4 = param_4 <= param_3 | bVar4;
        uVar8 = CONCAT71((int7)(uVar8 >> 8),bVar4);
        if (bVar4 != 0) {
          return param_3;
        }
      }
      uVar6 = param_3;
      uVar7 = param_3 + 1;
      if (param_3 + 1 < param_4) {
        uVar7 = param_4;
      }
      do {
        if (param_2 <= uVar6) goto LAB_0022c3c6;
        uVar5 = *(uint *)(param_1 + uVar6 * 4);
        if (((ulong)uVar5 < 0x21) &&
           (uVar8 = 0x100003e00, (0x100003e00U >> ((ulong)uVar5 & 0x3f) & 1) != 0)) {
          return uVar6;
        }
        if (0x7f < uVar5) {
          uVar5 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE();
          uVar8 = (ulong)uVar5;
          if ((char)uVar5 != '\0') {
            return uVar6;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_4);
    }
  }
  return uVar7;
}