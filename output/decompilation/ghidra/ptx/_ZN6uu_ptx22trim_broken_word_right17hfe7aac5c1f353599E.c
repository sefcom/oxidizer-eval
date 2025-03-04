ulong _ZN6uu_ptx22trim_broken_word_right17hfe7aac5c1f353599E
                (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  
  _ZN6uu_ptx20assert_str_integrity17h323fdd30696f5c71E(param_2,param_3,param_4);
  uVar5 = param_4;
  if ((param_3 != param_4) && (param_4 != param_2)) {
    uVar6 = param_4 - 1;
    if (param_2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                (uVar6,param_2,&PTR_s_src_uu_ptx_src_ptx_rs_003ede68);
    }
    uVar2 = *(uint *)(param_1 + -4 + param_4 * 4);
    if (((4 < uVar2 - 9) && (uVar2 != 0x20)) &&
       ((uVar2 < 0x80 ||
        (cVar3 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE(),
        cVar3 == '\0')))) {
      if (param_2 <= param_4) {
        ppuVar4 = &PTR_s_src_uu_ptx_src_ptx_rs_003ede80;
LAB_002b7404:
                    /* WARNING: Subroutine does not return */
        _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(param_4,param_2,ppuVar4);
      }
      uVar2 = *(uint *)(param_1 + param_4 * 4);
      if ((4 < uVar2 - 9) && (uVar2 != 0x20)) {
        if (uVar2 < 0x80) {
          if (param_4 <= param_3) {
            return param_4;
          }
        }
        else {
          cVar3 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE();
          if (param_4 <= param_3) {
            return param_4;
          }
          if (cVar3 != '\0') {
            return param_4;
          }
        }
        if (param_3 < uVar6) {
          uVar6 = param_3;
        }
        do {
          uVar1 = param_4 - 1;
          if (param_2 <= uVar1) {
            param_4 = param_4 - 1;
            ppuVar4 = &PTR_s_src_uu_ptx_src_ptx_rs_003ede98;
            goto LAB_002b7404;
          }
          uVar2 = *(uint *)(param_1 + uVar1 * 4);
          uVar5 = param_4;
        } while ((((0x20 < (ulong)uVar2) || ((0x100003e00U >> ((ulong)uVar2 & 0x3f) & 1) == 0)) &&
                 ((uVar2 < 0x80 ||
                  (cVar3 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE(),
                  cVar3 == '\0')))) && (uVar5 = uVar6, param_4 = uVar1, param_3 < uVar1));
      }
    }
  }
  return uVar5;
}