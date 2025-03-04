ulong _ZN6uu_ptx21trim_broken_word_left17hd50f7f90ebb3c8c6E
                (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  char cVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _ZN6uu_ptx20assert_str_integrity17h323fdd30696f5c71E(param_2,param_3,param_4);
  uVar4 = param_3;
  if ((param_3 != 0) && (param_3 != param_4)) {
    if (param_2 <= param_3) {
      ppuVar3 = &PTR_s_src_uu_ptx_src_ptx_rs_003ede38;
LAB_002b72ba:
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(param_3,param_2,ppuVar3);
    }
    uVar1 = *(uint *)(param_1 + param_3 * 4);
    if ((((4 < uVar1 - 9) && (uVar1 != 0x20)) &&
        ((uVar1 < 0x80 ||
         (cVar2 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE(),
         cVar2 == '\0')))) &&
       ((uVar1 = *(uint *)(param_1 + -4 + param_3 * 4), 4 < uVar1 - 9 && (uVar1 != 0x20)))) {
      if (uVar1 < 0x80) {
        if (param_4 <= param_3) {
          return param_3;
        }
      }
      else {
        cVar2 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE();
        if (param_4 <= param_3) {
          return param_3;
        }
        if (cVar2 != '\0') {
          return param_3;
        }
      }
      uVar5 = param_3;
      uVar6 = param_3 + 1;
      if (param_3 + 1 < param_4) {
        uVar6 = param_4;
      }
      do {
        if (param_2 <= uVar5) {
          if (param_3 <= param_2) {
            param_3 = param_2;
          }
          ppuVar3 = &PTR_s_src_uu_ptx_src_ptx_rs_003ede50;
          goto LAB_002b72ba;
        }
        uVar1 = *(uint *)(param_1 + uVar5 * 4);
        uVar4 = uVar5;
      } while ((((0x20 < (ulong)uVar1) || ((0x100003e00U >> ((ulong)uVar1 & 0x3f) & 1) == 0)) &&
               ((uVar1 < 0x80 ||
                (cVar2 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE(),
                cVar2 == '\0')))) && (uVar5 = uVar5 + 1, uVar4 = uVar6, uVar5 < param_4));
    }
  }
  return uVar4;
}