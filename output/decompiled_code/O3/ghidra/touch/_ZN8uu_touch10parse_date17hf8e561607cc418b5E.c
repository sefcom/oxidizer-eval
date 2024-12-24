void __rustcall
uu_touch::parse_date(undefined8 *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  int local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  
  chrono::naive::datetime::NaiveDateTime::parse_from_str
            (&local_98,param_3,param_4,&DAT_00175418,0x14);
  if ((int)local_98 == 0) {
    local_98 = &DAT_0017542c;
    local_90 = (undefined *)0x11;
    local_88 = &DAT_0017543d;
    local_80 = 0x14;
    local_78 = &DAT_00175451;
    local_70 = 0xe;
    local_68 = &DAT_0017545f;
    local_60 = 0x11;
    local_58 = 0;
    local_50 = 4;
    local_48 = param_2;
    do {
                    /* try { // try from 002c2bc0 to 002c2bde has its CatchHandler @ 002c2dff */
      auVar7 = _<core::array::iter::IntoIter<T,_>as_core::iter::traits::iterator::Iterator>::next
                         (&local_98);
      if (auVar7._0_8_ == 0) {
        core::ptr::drop_in_place<core::array::iter::IntoIter<&str,4_usize>>(&local_98);
        uVar3 = chrono::naive::date::NaiveDate::parse_from_str(param_3,param_4,&DAT_00166f60,8);
        if ((uVar3 & 1) == 0) {
          local_3c = (undefined4)(uVar3 >> 0x20);
          local_38 = 0;
          _<chrono::offset::local::Local_as_chrono::offset::TimeZone>::offset_from_local_datetime
                    (&local_a8,1,&local_3c);
          chrono::offset::LocalResult<T>::and_then(&local_98,&local_a8,&local_3c);
          chrono::offset::LocalResult<T>::unwrap(&local_a8,&local_98,&PTR_DAT_00411190);
          iVar2 = chrono::naive::date::NaiveDate::num_days_from_ce(local_a8);
          param_1[1] = ((ulong)local_a4 - 0xe77934880) + (long)iVar2 * 0x15180;
          *(undefined4 *)(param_1 + 2) = local_a0;
          goto LAB_002c2b2e;
        }
        local_90 = param_3 + param_4;
        local_98 = param_3;
        pcVar4 = (char *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::
                         next(&local_98);
        if ((pcVar4 != (char *)0x0) && (*pcVar4 == '@')) {
          lVar5 = core::str::traits::
                  _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>
                  ::get(1,param_3,param_4);
          if (lVar5 == 0) {
            uVar6 = core::str::slice_error_fail(param_3,param_4,1,param_4,&PTR_DAT_004111a8);
                    /* catch() { ... } // from try @ 002c2bc0 with catch @ 002c2dff */
                    /* try { // try from 002c2e02 to 002c2e0b has its CatchHandler @ 002c2e14 */
            core::ptr::drop_in_place<core::array::iter::IntoIter<&str,4_usize>>(&local_98);
            _Unwind_Resume(uVar6);
            return;
          }
          core::num::_<impl_core::str::traits::FromStr_for_i64>::from_str(&local_98,lVar5);
          if ((char)local_98 == '\0') {
            param_1[1] = local_90;
            *(undefined4 *)(param_1 + 2) = 0;
            goto LAB_002c2b2e;
          }
        }
        parse_datetime::parse_datetime_at_date(&local_98,local_48,param_3,param_4);
        if (local_98 == (undefined *)0x8000000000000002) {
          uVar3 = (ulong)local_90 >> 0x20;
          uVar1 = local_88._0_4_;
          iVar2 = chrono::naive::date::NaiveDate::num_days_from_ce((ulong)local_90 & 0xffffffff);
          param_1[1] = (uVar3 - 0xe77934880) + (long)iVar2 * 0x15180;
          *(undefined4 *)(param_1 + 2) = uVar1;
          *param_1 = 0x8000000000000004;
          core::ptr::
          drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>
                    (&local_98);
          return;
        }
        core::ptr::
        drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>
                  (&local_98);
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 1,param_3,param_4);
        *param_1 = 0x8000000000000000;
        return;
      }
      chrono::naive::datetime::NaiveDateTime::parse_from_str
                (&local_a8,param_3,param_4,auVar7._0_8_,auVar7._8_8_);
    } while (local_a8 == 0);
    iVar2 = chrono::naive::date::NaiveDate::num_days_from_ce();
    param_1[1] = ((ulong)local_a4 - 0xe77934880) + (long)iVar2 * 0x15180;
    *(undefined4 *)(param_1 + 2) = local_a0;
    *param_1 = 0x8000000000000004;
    core::ptr::drop_in_place<core::array::iter::IntoIter<&str,4_usize>>(&local_98);
  }
  else {
    iVar2 = chrono::naive::date::NaiveDate::num_days_from_ce();
    param_1[1] = (((ulong)local_98 >> 0x20) - 0xe77934880) + (long)iVar2 * 0x15180;
    *(undefined4 *)(param_1 + 2) = local_90._0_4_;
LAB_002c2b2e:
    *param_1 = 0x8000000000000004;
  }
  return;
}