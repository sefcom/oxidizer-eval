__int64 __fastcall uu_paste::parse_delimiters(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int128 v4; // rax
  int v5; // edx
  int v6; // edx
  unsigned __int8 v7; // al
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  int v11; // [rsp+4h] [rbp-C4h] BYREF
  __int128 v12; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD *v13; // [rsp+18h] [rbp-B0h]
  __int128 v14; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD *v15; // [rsp+30h] [rbp-98h]
  __int64 v16; // [rsp+38h] [rbp-90h]
  __int64 v17; // [rsp+40h] [rbp-88h]
  _QWORD v18[2]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v19[2]; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v20[2]; // [rsp+78h] [rbp-50h] BYREF
  __int128 v21; // [rsp+88h] [rbp-40h] BYREF
  _QWORD *v22; // [rsp+98h] [rbp-30h]

  v19[0] = a2;
  v19[1] = a3;
  v11 = 0;
  *(_QWORD *)&v4 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(a3, 8LL, 16LL, &off_DECA0);
  v12 = v4;
  v13 = 0LL;
  v18[0] = a2;
  v18[1] = a2 + a3;
  if ( (core::str::validations::next_code_point(v18) & 1) == 0 )
  {
LABEL_17:
    v15 = v13;
    v14 = v12;
    result = alloc::vec::Vec<T,A>::into_boxed_slice(&v14);
    a1[1] = result;
    a1[2] = v10;
    *a1 = 0LL;
    return result;
  }
  while ( 1 )
  {
    if ( v5 != 92 )
      goto LABEL_3;
    if ( (core::str::validations::next_code_point(v18) & 1) == 0 )
      break;
    if ( v6 > 109 )
    {
      if ( v6 == 110 )
      {
        v7 = 10;
        goto LABEL_16;
      }
      if ( v6 == 116 )
      {
        v7 = 9;
LABEL_16:
        uu_paste::parse_delimiters::add_one_byte_single_char_delimiter(&v12, v7);
        goto LABEL_4;
      }
    }
    else
    {
      if ( v6 == 48 )
      {
        v8 = alloc::boxed::Box<T>::new();
        alloc::vec::Vec<T,A>::push(&v12, v8, 0LL, &off_DED58);
        goto LABEL_4;
      }
      v7 = 92;
      if ( v6 == 92 )
        goto LABEL_16;
    }
LABEL_3:
    uu_paste::parse_delimiters::{{closure}}(&v11, &v12);
LABEL_4:
    if ( (core::str::validations::next_code_point(v18) & 1) == 0 )
      goto LABEL_17;
  }
  v20[0] = v19;
  v20[1] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v14 = &off_DEC90;
  *((_QWORD *)&v14 + 1) = 1LL;
  v17 = 0LL;
  v15 = v20;
  v16 = 1LL;
  core::option::Option<T>::map_or_else(&v21, &v14);
  LODWORD(v16) = 1;
  v14 = v21;
  v15 = v22;
  a1[1] = alloc::boxed::Box<T>::new(&v14);
  a1[2] = &off_DECF0;
  *a1 = 1LL;
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::boxed::Box<[u8]>>>(&v12);
}