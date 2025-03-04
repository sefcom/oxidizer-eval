undefined  [16]
_ZN6uu_ptx8trim_idx17hb7cdb8e465fc0246E(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  
  _ZN6uu_ptx20assert_str_integrity17h323fdd30696f5c71E(param_2,param_3,param_4);
  uVar4 = param_3;
  if (param_3 < param_4) {
    do {
      if (param_2 <= uVar4) {
        if (param_3 <= param_2) {
          param_3 = param_2;
        }
                    /* WARNING: Subroutine does not return */
        _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                  (param_3,param_2,&PTR_s_src_uu_ptx_src_ptx_rs_003edeb0);
      }
      uVar1 = *(uint *)(param_1 + uVar4 * 4);
      if (((4 < uVar1 - 9) && (uVar1 != 0x20)) &&
         ((uVar1 < 0x80 ||
          (cVar2 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE(),
          cVar2 == '\0')))) goto LAB_002b7476;
      uVar4 = uVar4 + 1;
      uVar3 = param_4;
    } while (param_4 != uVar4);
  }
  else {
LAB_002b7476:
    uVar3 = uVar4;
    uVar5 = param_4;
    if (uVar4 < param_4) {
      do {
        uVar6 = uVar5 - 1;
        if (param_2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                    (uVar5 - 1,param_2,&PTR_s_src_uu_ptx_src_ptx_rs_003edec8);
        }
        uVar1 = *(uint *)(param_1 + uVar6 * 4);
      } while ((((uVar1 - 9 < 5) || (uVar1 == 0x20)) ||
               ((param_4 = uVar5, 0x7f < uVar1 &&
                (cVar2 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE(),
                cVar2 != '\0')))) && (param_4 = uVar4, uVar5 = uVar6, uVar4 < uVar6));
    }
  }
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = uVar3;
  return auVar7;
}