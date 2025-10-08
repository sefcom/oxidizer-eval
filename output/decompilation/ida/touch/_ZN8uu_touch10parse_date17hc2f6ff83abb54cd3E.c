__int64 __fastcall uu_touch::parse_date(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  _DWORD *v7; // rdi
  __int64 v8; // rax
  int v9; // edx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v19[9]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-70h]
  _DWORD v21[3]; // [rsp+64h] [rbp-64h] BYREF
  _DWORD v22[3]; // [rsp+70h] [rbp-58h] BYREF
  int v23; // [rsp+7Ch] [rbp-4Ch] BYREF
  __int64 v24; // [rsp+80h] [rbp-48h]
  unsigned int v25[16]; // [rsp+88h] [rbp-40h] BYREF

  chrono::naive::datetime::NaiveDateTime::parse_from_str(v21, a3, a4, aABEHMSY, 20LL);
  if ( v21[0] )
  {
    v7 = v21;
LABEL_3:
    v8 = uu_touch::datetime_to_filetime(v7);
LABEL_4:
    *(_QWORD *)(a1 + 8) = v8;
    *(_DWORD *)(a1 + 16) = v9;
LABEL_5:
    result = 0x8000000000000004LL;
    *(_QWORD *)a1 = 0x8000000000000004LL;
    return result;
  }
  v20 = a2;
  v18 = 0LL;
  v19[0] = 4LL;
  v19[1] = aYMDHMS;
  v19[2] = 17LL;
  v19[3] = aYMDHMSF;
  v19[4] = 20LL;
  v19[5] = aYMDHM;
  v19[6] = 14LL;
  v19[7] = aYMDHMZ;
  v19[8] = 17LL;
  v11 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v18, 4LL);
  if ( v11 )
  {
    v13 = v12;
    while ( 1 )
    {
      chrono::naive::datetime::NaiveDateTime::parse_from_str(v22, a3, a4, v11, v13);
      if ( v22[0] )
        break;
      v11 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v18, 4LL);
      v13 = v14;
      if ( !v11 )
        goto LABEL_10;
    }
    v7 = v22;
    goto LABEL_3;
  }
LABEL_10:
  v15 = chrono::naive::date::NaiveDate::parse_from_str(a3, a4, aYMD, 8LL, v13);
  if ( (v15 & 1) == 0 )
  {
    v23 = HIDWORD(v15);
    v24 = 0LL;
    <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime(v25, 1LL, &v23);
    chrono::offset::LocalResult<T>::and_then(&v18, v25, &v23);
    chrono::offset::LocalResult<T>::unwrap(v25, &v18);
    v8 = uu_touch::datetime_to_filetime(v25);
    goto LABEL_4;
  }
  if ( a4 && *a3 == 64 )
  {
    v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            1LL,
            a3,
            a4);
    if ( !v16 )
      core::str::slice_error_fail(a3, a4, 1LL, a4, &off_279EC0);
    core::num::<impl i64>::from_ascii_radix(&v18, v16);
    if ( !(_BYTE)v18 )
    {
      *(_QWORD *)(a1 + 8) = v19[0];
      *(_DWORD *)(a1 + 16) = 0;
      goto LABEL_5;
    }
  }
  parse_datetime::parse_datetime_at_date(&v18, v20, a3, a4);
  if ( v18 == 0x8000000000000002LL )
  {
    *(_QWORD *)(a1 + 8) = uu_touch::datetime_to_filetime((unsigned int *)v19);
    *(_DWORD *)(a1 + 16) = v17;
    *(_QWORD *)a1 = 0x8000000000000004LL;
    return core::ptr::drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>(&v18);
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>(&v18);
    result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, a3, a4);
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return result;
}