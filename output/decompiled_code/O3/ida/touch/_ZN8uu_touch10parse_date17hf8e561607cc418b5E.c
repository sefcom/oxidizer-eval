__int64 __fastcall uu_touch::parse_date(__int64 a1, __int64 a2, const char *a3, __int64 a4)
{
  __int64 v6; // r14
  int v7; // ebp
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  int v12; // ebp
  __int64 v13; // rax
  int v14; // eax
  int v15; // edx
  _BYTE *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  int v19; // ebp
  unsigned int v20; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v21; // [rsp+4h] [rbp-A4h]
  int v22; // [rsp+8h] [rbp-A0h]
  const char *v23; // [rsp+10h] [rbp-98h] BYREF
  const char *v24; // [rsp+18h] [rbp-90h]
  const char *v25; // [rsp+20h] [rbp-88h]
  __int64 v26; // [rsp+28h] [rbp-80h]
  const char *v27; // [rsp+30h] [rbp-78h]
  __int64 v28; // [rsp+38h] [rbp-70h]
  const char *v29; // [rsp+40h] [rbp-68h]
  __int64 v30; // [rsp+48h] [rbp-60h]
  __int64 v31; // [rsp+50h] [rbp-58h]
  __int64 v32; // [rsp+58h] [rbp-50h]
  __int64 v33; // [rsp+60h] [rbp-48h]
  int v34; // [rsp+6Ch] [rbp-3Ch] BYREF
  __int64 v35; // [rsp+70h] [rbp-38h]

  chrono::naive::datetime::NaiveDateTime::parse_from_str(&v23, a3, a4, aABEHMSY, 20LL);
  if ( (_DWORD)v23 )
  {
    v6 = HIDWORD(v23);
    v7 = (int)v24;
    *(_QWORD *)(a1 + 8) = 86400LL * (int)chrono::naive::date::NaiveDate::num_days_from_ce((unsigned int)v23)
                        + v6
                        - 0xE77934880LL;
    *(_DWORD *)(a1 + 16) = v7;
LABEL_3:
    result = 0x8000000000000004LL;
    *(_QWORD *)a1 = 0x8000000000000004LL;
    return result;
  }
  v33 = a2;
  v23 = aYMDHMS;
  v24 = (_BYTE *)(&word_10 + 1);
  v25 = aYMDHMSF;
  v26 = 20LL;
  v27 = aYMDHM;
  v28 = 14LL;
  v29 = aYMDHMZ;
  v30 = 17LL;
  v31 = 0LL;
  v32 = 4LL;
  while ( 1 )
  {
    v9 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v23);
    if ( !v9 )
      break;
    chrono::naive::datetime::NaiveDateTime::parse_from_str(&v20, a3, a4, v9, v10);
    if ( v20 )
    {
      v11 = v21;
      v12 = v22;
      *(_QWORD *)(a1 + 8) = 86400LL * (int)chrono::naive::date::NaiveDate::num_days_from_ce(v20) + v11 - 0xE77934880LL;
      *(_DWORD *)(a1 + 16) = v12;
      *(_QWORD *)a1 = 0x8000000000000004LL;
      return core::ptr::drop_in_place<core::array::iter::IntoIter<&str,4_usize>>(&v23);
    }
  }
  core::ptr::drop_in_place<core::array::iter::IntoIter<&str,4_usize>>(&v23);
  v13 = chrono::naive::date::NaiveDate::parse_from_str(a3, a4, aYMD, 8LL);
  if ( (v13 & 1) == 0 )
  {
    v34 = HIDWORD(v13);
    v35 = 0LL;
    <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime(&v20, 1LL, &v34);
    chrono::offset::LocalResult<T>::and_then(&v23, &v20, &v34);
    chrono::offset::LocalResult<T>::unwrap(&v20, &v23, &off_311190);
    v14 = chrono::naive::date::NaiveDate::num_days_from_ce(v20);
    v15 = v22;
    *(_QWORD *)(a1 + 8) = 86400LL * v14 + v21 - 0xE77934880LL;
    *(_DWORD *)(a1 + 16) = v15;
    goto LABEL_3;
  }
  v23 = a3;
  v24 = &a3[a4];
  v16 = (_BYTE *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v23);
  if ( v16 && *v16 == 64 )
  {
    v17 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            1LL,
            a3,
            a4);
    if ( !v17 )
      core::str::slice_error_fail(a3, a4, 1LL, a4, &off_3111A8);
    core::num::<impl core::str::traits::FromStr for i64>::from_str(&v23, v17);
    if ( !(_BYTE)v23 )
    {
      *(_QWORD *)(a1 + 8) = v24;
      *(_DWORD *)(a1 + 16) = 0;
      goto LABEL_3;
    }
  }
  parse_datetime::parse_datetime_at_date(&v23, v33, a3, a4);
  if ( v23 == (const char *)0x8000000000000002LL )
  {
    v18 = HIDWORD(v24);
    v19 = (int)v25;
    *(_QWORD *)(a1 + 8) = 86400LL * (int)chrono::naive::date::NaiveDate::num_days_from_ce((unsigned int)v24)
                        + v18
                        - 0xE77934880LL;
    *(_DWORD *)(a1 + 16) = v19;
    *(_QWORD *)a1 = 0x8000000000000004LL;
    return core::ptr::drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>(&v23);
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>(&v23);
    result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 8, a3, a4);
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return result;
}
