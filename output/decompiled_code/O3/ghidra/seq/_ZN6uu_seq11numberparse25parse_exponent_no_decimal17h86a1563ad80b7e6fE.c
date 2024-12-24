long * __rustcall
uu_seq::numberparse::parse_exponent_no_decimal
          (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long local_98;
  undefined uStack_90;
  undefined7 uStack_8f;
  undefined uStack_88;
  undefined7 uStack_87;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  char local_70;
  undefined7 uStack_6f;
  undefined4 local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar3 = core::str::traits::
          _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::get
                    (param_4 + 1);
  if (lVar3 == 0) {
    uVar5 = core::str::slice_error_fail(param_2,param_3,param_4 + 1,param_3,&PTR_DAT_00246878);
                    /* catch() { ... } // from try @ 001ce42b with catch @ 001ce4f1 */
                    /* try { // try from 001ce4f4 to 001ce4fb has its CatchHandler @ 001ce504 */
    core::ptr::drop_in_place<bigdecimal::BigDecimal>(&local_98);
    plVar6 = (long *)_Unwind_Resume(uVar5);
    return plVar6;
  }
  core::num::_<impl_core::str::traits::FromStr_for_i64>::from_str(&local_70,lVar3);
  iVar1 = iStack_64;
  if (local_70 != '\0') {
LAB_001ce3f1:
    *(undefined *)(param_1 + 1) = 0;
    *param_1 = -0x7ffffffffffffffc;
    return param_1;
  }
  lVar3 = CONCAT44(iStack_64,local_68);
  bigdecimal::impl_num::_<impl_num_traits::Num_for_bigdecimal::BigDecimal>::from_str_radix
            (&local_70,param_2,param_3);
  local_98 = CONCAT71(uStack_6f,local_70);
  if (local_98 == -0x8000000000000000) {
    local_48 = local_68;
    iStack_44 = iStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    core::ptr::drop_in_place<bigdecimal::ParseBigDecimalError>(&local_48);
    goto LAB_001ce3f1;
  }
  uStack_8f = CONCAT43(iStack_64,local_68._1_3_);
  uStack_87 = CONCAT43(uStack_5c,uStack_60._1_3_);
  uStack_88 = (undefined)uStack_60;
  uStack_80 = local_58;
  uStack_7c = uStack_54;
  local_78 = uStack_50;
  uStack_74 = uStack_4c;
  uStack_90 = (undefined)local_68;
                    /* try { // try from 001ce42b to 001ce484 has its CatchHandler @ 001ce4f1 */
  cVar2 = is_minus_zero_float(param_2,param_3,&local_98);
  if (cVar2 == '\0') {
    if (SCARRY8(param_4,lVar3)) {
      *(undefined *)(param_1 + 1) = 0;
      *param_1 = -0x7ffffffffffffffc;
      goto LAB_001ce4a5;
    }
    lVar4 = 1;
    if (1 < param_4 + lVar3) {
      lVar4 = param_4 + lVar3;
    }
    lVar4 = lVar4 + (ulong)((char)uStack_80 == '\0');
  }
  else {
    lVar4 = 2;
    if (0 < lVar3) {
      lVar4 = lVar3 + 2;
    }
  }
  cVar2 = is_minus_zero_float(param_2,param_3,&local_98);
  uVar7 = (long)iVar1 >> 0x1f & -lVar3;
  if (cVar2 == '\0') {
    param_1[4] = CONCAT44(uStack_74,local_78);
    param_1[2] = CONCAT71(uStack_87,uStack_88);
    param_1[3] = CONCAT44(uStack_7c,uStack_80);
    *param_1 = local_98;
    param_1[1] = CONCAT71(uStack_8f,uStack_90);
    param_1[5] = lVar4;
    param_1[6] = uVar7;
    return param_1;
  }
  *param_1 = -0x7ffffffffffffffe;
  param_1[5] = lVar4;
  param_1[6] = uVar7;
LAB_001ce4a5:
  core::ptr::drop_in_place<bigdecimal::BigDecimal>(&local_98);
  return param_1;
}