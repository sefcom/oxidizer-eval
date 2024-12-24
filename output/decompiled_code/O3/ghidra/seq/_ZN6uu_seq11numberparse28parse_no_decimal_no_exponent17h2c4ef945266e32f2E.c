undefined8 * __rustcall
uu_seq::numberparse::parse_no_decimal_no_exponent
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  undefined uVar3;
  undefined8 uVar4;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  
  bigdecimal::impl_num::_<impl_num_traits::Num_for_bigdecimal::BigDecimal>::from_str_radix
            (&local_68);
  if (CONCAT44(uStack_64,local_68) == -0x8000000000000000) {
                    /* try { // try from 001ce155 to 001ce164 has its CatchHandler @ 001ce326 */
    ::alloc::str::_<impl_str>::to_ascii_lowercase(local_40,param_2,param_3);
                    /* try { // try from 001ce16f to 001ce1e1 has its CatchHandler @ 001ce32b */
    cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_38,local_30,&DAT_0012445a,3);
    uVar4 = 0x8000000000000000;
    if (cVar2 == '\0') {
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_38,local_30,&DAT_00117040,8)
      ;
      uVar4 = 0x8000000000000000;
      if (cVar2 == '\0') {
        cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                          (local_38,local_30,&DAT_00116e48,4);
        uVar4 = 0x8000000000000001;
        if ((cVar2 == '\0') &&
           (cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (local_38,local_30,&DAT_0012445d,9), uVar4 = 0x8000000000000001,
           cVar2 == '\0')) {
                    /* try { // try from 001ce2bc to 001ce2f1 has its CatchHandler @ 001ce32b */
          cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (local_38,local_30,&DAT_00124466,3);
          uVar3 = 1;
          if (cVar2 == '\0') {
            uVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (local_38,local_30,&DAT_00116dfc,4);
          }
          *(undefined *)(param_1 + 1) = uVar3;
          *param_1 = 0x8000000000000004;
                    /* try { // try from 001ce2fd to 001ce306 has its CatchHandler @ 001ce326 */
          core::ptr::drop_in_place<alloc::string::String>(local_40);
          goto LAB_001ce26c;
        }
      }
    }
                    /* try { // try from 001ce1ee to 001ce1f7 has its CatchHandler @ 001ce30c */
    local_98 = uVar4;
    core::ptr::drop_in_place<alloc::string::String>(local_40);
    param_1[4] = local_78;
    param_1[2] = CONCAT44(uStack_84,local_88);
    param_1[3] = CONCAT44(uStack_7c,uStack_80);
    *param_1 = local_98;
    param_1[1] = CONCAT44(uStack_8c,uStack_90);
    param_1[5] = 0;
    param_1[6] = 0;
    lVar1 = CONCAT44(uStack_64,local_68);
  }
  else {
    local_78 = local_48;
    local_88 = local_58;
    uStack_84 = uStack_54;
    uStack_80 = uStack_50;
    uStack_7c = uStack_4c;
    local_98 = CONCAT44(uStack_64,local_68);
    uStack_90 = uStack_60;
    uStack_8c = uStack_5c;
                    /* try { // try from 001ce23e to 001ce24b has its CatchHandler @ 001ce319 */
    cVar2 = is_minus_zero_int(param_2,param_3,&local_98);
    if (cVar2 == '\0') {
      param_1[4] = local_78;
      param_1[2] = CONCAT44(uStack_84,local_88);
      param_1[3] = CONCAT44(uStack_7c,uStack_80);
      *(undefined4 *)param_1 = (undefined4)local_98;
      *(undefined4 *)((long)param_1 + 4) = local_98._4_4_;
      *(undefined4 *)(param_1 + 1) = uStack_90;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_8c;
      param_1[5] = param_3;
      param_1[6] = 0;
      lVar1 = CONCAT44(uStack_64,local_68);
      goto joined_r0x001ce271;
    }
    *param_1 = 0x8000000000000002;
    param_1[5] = param_3;
    param_1[6] = 0;
                    /* try { // try from 001ce264 to 001ce26b has its CatchHandler @ 001ce326 */
    core::ptr::drop_in_place<bigdecimal::BigDecimal>(&local_98);
LAB_001ce26c:
    lVar1 = CONCAT44(uStack_64,local_68);
  }
joined_r0x001ce271:
  if (lVar1 == -0x8000000000000000) {
    core::ptr::
    drop_in_place<core::result::Result<bigdecimal::BigDecimal,bigdecimal::ParseBigDecimalError>>
              (&local_68);
  }
  return param_1;
}