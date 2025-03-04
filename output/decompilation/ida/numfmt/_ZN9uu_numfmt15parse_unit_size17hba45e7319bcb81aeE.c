__int64 __fastcall uu_numfmt::parse_unit_size(_QWORD *a1, char **a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  char *v7; // r12
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r12
  char **v12; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+10h] [rbp-B8h]
  _QWORD *v14; // [rsp+18h] [rbp-B0h]
  __int64 v15; // [rsp+20h] [rbp-A8h]
  __int64 v16; // [rsp+28h] [rbp-A0h]
  _BYTE v17[8]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v18; // [rsp+40h] [rbp-88h]
  __int64 v19; // [rsp+48h] [rbp-80h]
  _QWORD v20[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v21[3]; // [rsp+60h] [rbp-68h] BYREF
  char v22; // [rsp+78h] [rbp-50h]
  __int128 v23; // [rsp+80h] [rbp-48h] BYREF
  __int64 v24; // [rsp+90h] [rbp-38h]

  v12 = a2;
  v13 = (__int64)a2 + a3;
  LOBYTE(v14) = 0;
  <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(v17, &v12);
  v4 = v19;
  v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
         v19,
         a2,
         a3);
  if ( !v5 )
    core::str::slice_error_fail(a2, a3, v4, a3, &off_135890);
  v7 = (char *)v5;
  v8 = v6;
  if ( v4 )
  {
    alloc::str::<impl str>::repeat(&v12, a0_2, 1LL, v4);
    if ( (unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                            v13,
                            v14,
                            v18,
                            v19) )
    {
      core::ptr::drop_in_place<alloc::string::String>(&v12);
      goto LABEL_9;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v12);
  }
  if ( uu_numfmt::parse_unit_size_suffix(v7, v8) == 1 )
  {
    if ( v19 )
    {
      v10 = v9;
      core::num::<impl core::str::traits::FromStr for usize>::from_str(&v12, v18, v19);
      if ( (_BYTE)v12 )
        goto LABEL_9;
      a1[1] = v13 * v10;
    }
    else
    {
      a1[1] = v9;
    }
    *a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<alloc::string::String>(v17);
  }
LABEL_9:
  v21[0] = 0LL;
  v21[1] = a2;
  v21[2] = a3;
  v22 = 1;
  v20[0] = v21;
  v20[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v12 = &off_135880;
  v13 = 1LL;
  v16 = 0LL;
  v14 = v20;
  v15 = 1LL;
  core::option::Option<T>::map_or_else(&v23, &v12);
  a1[2] = v24;
  *(_OWORD *)a1 = v23;
  return core::ptr::drop_in_place<alloc::string::String>(v17);
}
