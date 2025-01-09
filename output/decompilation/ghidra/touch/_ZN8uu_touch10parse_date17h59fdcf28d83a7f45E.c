void __rustcall
uu_touch::parse_date(undefined8 *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined auVar6 [12];
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_64 [3];
  int local_58 [3];
  undefined4 local_4c;
  undefined8 local_48;
  undefined local_40 [16];
  
  chrono::naive::datetime::NaiveDateTime::parse_from_str
            (local_64,param_3,param_4,&DAT_001752c8,0x14);
  if (local_64[0] == 0) {
    local_c0 = &DAT_001752dc;
    local_b8 = (undefined *)0x11;
    local_b0 = &DAT_001752ed;
    local_a8 = 0x14;
    local_a0 = &DAT_00175301;
    local_98 = 0xe;
    local_90 = &DAT_0017530f;
    local_88 = 0x11;
    local_80 = 0;
    local_78 = 4;
    local_70 = param_2;
    do {
                    /* try { // try from 002c3460 to 002c347e has its CatchHandler @ 002c3644 */
      auVar5 = _<core::array::iter::IntoIter<T,_>as_core::iter::traits::iterator::Iterator>::next
                         (&local_c0);
      if (auVar5._0_8_ == 0) {
        core::ptr::drop_in_place<core::array::iter::IntoIter<&str,4_usize>>(&local_c0);
        uVar1 = chrono::naive::date::NaiveDate::parse_from_str(param_3,param_4,&DAT_00166f40,8);
        if ((uVar1 & 1) == 0) {
          local_4c = (undefined4)(uVar1 >> 0x20);
          local_48 = 0;
          _<chrono::offset::local::Local_as_chrono::offset::TimeZone>::offset_from_local_datetime
                    (local_40,1,&local_4c);
          chrono::offset::LocalResult<T>::and_then(&local_c0,local_40,&local_4c);
          chrono::offset::LocalResult<T>::unwrap(local_40,&local_c0,&PTR_DAT_00410ee8);
          auVar6 = datetime_to_filetime(local_40);
          goto LAB_002c33bc;
        }
        local_b8 = param_3 + param_4;
        local_c0 = param_3;
        pcVar2 = (char *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::
                         next(&local_c0);
        if ((pcVar2 != (char *)0x0) && (*pcVar2 == '@')) {
          lVar3 = core::str::traits::
                  _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>
                  ::get(1,param_3,param_4);
          if (lVar3 == 0) {
            uVar4 = core::str::slice_error_fail(param_3,param_4,1,param_4,&PTR_DAT_00410f00);
                    /* catch() { ... } // from try @ 002c3460 with catch @ 002c3644 */
                    /* try { // try from 002c3647 to 002c3650 has its CatchHandler @ 002c3659 */
            core::ptr::drop_in_place<core::array::iter::IntoIter<&str,4_usize>>(&local_c0);
            _Unwind_Resume(uVar4);
            return;
          }
          core::num::_<impl_core::str::traits::FromStr_for_i64>::from_str(&local_c0,lVar3);
          if ((char)local_c0 == '\0') {
            param_1[1] = local_b8;
            *(undefined4 *)(param_1 + 2) = 0;
            goto LAB_002c33c3;
          }
        }
        parse_datetime::parse_datetime_at_date(&local_c0,local_70,param_3,param_4);
        if (local_c0 == (undefined *)0x8000000000000002) {
          auVar6 = datetime_to_filetime(&local_b8);
          *(undefined (*) [12])(param_1 + 1) = auVar6;
          *param_1 = 0x8000000000000004;
          core::ptr::
          drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>
                    (&local_c0);
          return;
        }
        core::ptr::
        drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>
                  (&local_c0);
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 1,param_3,param_4);
        *param_1 = 0x8000000000000000;
        return;
      }
      chrono::naive::datetime::NaiveDateTime::parse_from_str
                (local_58,param_3,param_4,auVar5._0_8_,auVar5._8_8_);
    } while (local_58[0] == 0);
    auVar6 = datetime_to_filetime(local_58);
    *(undefined (*) [12])(param_1 + 1) = auVar6;
    *param_1 = 0x8000000000000004;
    core::ptr::drop_in_place<core::array::iter::IntoIter<&str,4_usize>>(&local_c0);
  }
  else {
    auVar6 = datetime_to_filetime(local_64);
LAB_002c33bc:
    *(undefined (*) [12])(param_1 + 1) = auVar6;
LAB_002c33c3:
    *param_1 = 0x8000000000000004;
  }
  return;
}