__int64 __fastcall uu_numfmt::parse_unit_size(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int128 v12; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD *v13; // [rsp+10h] [rbp-B8h]
  __int64 v14; // [rsp+18h] [rbp-B0h]
  __int64 v15; // [rsp+20h] [rbp-A8h]
  __int128 v16; // [rsp+30h] [rbp-98h] BYREF
  _QWORD *v17; // [rsp+40h] [rbp-88h]
  char v18; // [rsp+48h] [rbp-80h]
  __int64 v19; // [rsp+50h] [rbp-78h]
  char v20[8]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v21; // [rsp+60h] [rbp-68h]
  __int64 v22; // [rsp+68h] [rbp-60h]
  _QWORD v23[2]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v24; // [rsp+80h] [rbp-48h] BYREF
  __int64 v25; // [rsp+90h] [rbp-38h]

  *(_QWORD *)&v12 = a2;
  *((_QWORD *)&v12 + 1) = (char *)a3 + a2;
  LOBYTE(v13) = 0;
  core::iter::traits::iterator::Iterator::collect(v20, &v12);
  v4 = v22;
  v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
         v22,
         a2,
         a3);
  if ( !v5 )
    core::str::slice_error_fail(a2, a3, v4, a3, &off_102810);
  v7 = v5;
  if ( v4 )
  {
    v19 = v6;
    alloc::slice::<impl [T]>::repeat(&v12, v4);
    v17 = v13;
    v16 = v12;
    v8 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
           *((_QWORD *)&v12 + 1),
           v13,
           v21,
           v4);
    core::ptr::drop_in_place<alloc::string::String>(&v16);
    v6 = v19;
    if ( v8 )
      goto LABEL_7;
  }
  if ( (uu_numfmt::parse_unit_size_suffix(v7, v6) & 1) == 0 )
    goto LABEL_7;
  if ( !v4 )
  {
    a1[1] = v9;
LABEL_10:
    *a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<alloc::string::String>(v20);
  }
  v10 = v9;
  core::num::<impl usize>::from_ascii_radix(&v12, v21, v4);
  if ( (_BYTE)v12 != 1 )
  {
    a1[1] = *((_QWORD *)&v12 + 1) * v10;
    goto LABEL_10;
  }
LABEL_7:
  *(_QWORD *)&v16 = 0LL;
  *((_QWORD *)&v16 + 1) = a2;
  v17 = a3;
  v18 = 1;
  v23[0] = &v16;
  v23[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v12 = &off_102800;
  *((_QWORD *)&v12 + 1) = 1LL;
  v15 = 0LL;
  v13 = v23;
  v14 = 1LL;
  core::option::Option<T>::map_or_else(&v24, &v12);
  a1[2] = v25;
  *(_OWORD *)a1 = v24;
  return core::ptr::drop_in_place<alloc::string::String>(v20);
}