__int64 __fastcall uu_touch::parse_date(__int64 a1, __int64 a2, const char *a3, __int64 a4)
{
  __int64 v6; // rax
  int v7; // edx
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // edx
  __int64 v12; // rax
  _BYTE *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  const char *v16; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v17[9]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-70h]
  unsigned int v19[3]; // [rsp+64h] [rbp-64h] BYREF
  unsigned int v20[3]; // [rsp+70h] [rbp-58h] BYREF
  int v21; // [rsp+7Ch] [rbp-4Ch] BYREF
  __int64 v22; // [rsp+80h] [rbp-48h]
  unsigned int v23[16]; // [rsp+88h] [rbp-40h] BYREF

  chrono::naive::datetime::NaiveDateTime::parse_from_str(v19, a3, a4, aABEHMSY, 20LL);
  if ( v19[0] )
  {
    v6 = uu_touch::datetime_to_filetime(v19);
LABEL_3:
    *(_QWORD *)(a1 + 8) = v6;
    *(_DWORD *)(a1 + 16) = v7;
LABEL_4:
    result = 0x8000000000000004LL;
    *(_QWORD *)a1 = 0x8000000000000004LL;
    return result;
  }
  v18 = a2;
  v16 = aYMDHMS;
  v17[0] = 17LL;
  v17[1] = aYMDHMSF;
  v17[2] = 20LL;
  v17[3] = aYMDHM;
  v17[4] = 14LL;
  v17[5] = aYMDHMZ;
  v17[6] = 17LL;
  v17[7] = 0LL;
  v17[8] = 4LL;
  while ( 1 )
  {
    v9 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v16);
    if ( !v9 )
      break;
    chrono::naive::datetime::NaiveDateTime::parse_from_str(v20, a3, a4, v9, v10);
    if ( v20[0] )
    {
      *(_QWORD *)(a1 + 8) = uu_touch::datetime_to_filetime(v20);
      *(_DWORD *)(a1 + 16) = v11;
      *(_QWORD *)a1 = 0x8000000000000004LL;
      return core::ptr::drop_in_place<core::array::iter::IntoIter<&str,4_usize>>(&v16);
    }
  }
  core::ptr::drop_in_place<core::array::iter::IntoIter<&str,4_usize>>(&v16);
  v12 = chrono::naive::date::NaiveDate::parse_from_str(a3, a4, aYMD, 8LL);
  if ( (v12 & 1) == 0 )
  {
    v21 = HIDWORD(v12);
    v22 = 0LL;
    <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime(v23, 1LL, &v21);
    chrono::offset::LocalResult<T>::and_then(&v16, v23, &v21);
    chrono::offset::LocalResult<T>::unwrap(v23, &v16, &off_310EE8);
    v6 = uu_touch::datetime_to_filetime(v23);
    goto LABEL_3;
  }
  v16 = a3;
  v17[0] = &a3[a4];
  v13 = (_BYTE *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v16);
  if ( v13 && *v13 == 64 )
  {
    v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            1LL,
            a3,
            a4);
    if ( !v14 )
      core::str::slice_error_fail(a3, a4, 1LL, a4, &off_310F00);
    core::num::<impl core::str::traits::FromStr for i64>::from_str(&v16, v14);
    if ( !(_BYTE)v16 )
    {
      *(_QWORD *)(a1 + 8) = v17[0];
      *(_DWORD *)(a1 + 16) = 0;
      goto LABEL_4;
    }
  }
  parse_datetime::parse_datetime_at_date(&v16, v18, a3, a4);
  if ( v16 == (const char *)0x8000000000000002LL )
  {
    *(_QWORD *)(a1 + 8) = uu_touch::datetime_to_filetime((unsigned int *)v17);
    *(_DWORD *)(a1 + 16) = v15;
    *(_QWORD *)a1 = 0x8000000000000004LL;
    return core::ptr::drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>(&v16);
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>(&v16);
    result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 8, a3, a4);
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return result;
}
