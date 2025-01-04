__int64 __fastcall uu_paste::parse_delimiters(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  int v5; // edx
  unsigned __int8 v6; // al
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // [rsp+Ch] [rbp-BCh] BYREF
  _BYTE v11[24]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-A0h]
  __int64 v13; // [rsp+30h] [rbp-98h]
  __int128 v14; // [rsp+48h] [rbp-80h] BYREF
  __int64 v15; // [rsp+58h] [rbp-70h]
  _QWORD v16[2]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v17[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v18[2]; // [rsp+80h] [rbp-48h] BYREF
  __int128 v19; // [rsp+90h] [rbp-38h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-28h]

  v17[0] = a2;
  v17[1] = a3;
  v10 = 0;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v11, a3, 0LL);
  if ( *(_QWORD *)v11 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v11[8], *(_QWORD *)&v11[16]);
  v14 = *(_OWORD *)&v11[8];
  v15 = 0LL;
  v16[0] = a2;
  v16[1] = a2 + a3;
  if ( !(unsigned int)core::str::validations::next_code_point(v16) )
  {
LABEL_18:
    *(_QWORD *)&v11[16] = v15;
    *(_OWORD *)v11 = v14;
    result = alloc::vec::Vec<T,A>::into_boxed_slice(v11);
    a1[1] = result;
    a1[2] = v9;
    *a1 = 0LL;
    return result;
  }
  while ( 1 )
  {
    if ( v4 != 92 )
      goto LABEL_4;
    if ( !(unsigned int)core::str::validations::next_code_point(v16) )
      break;
    if ( v5 > 109 )
    {
      if ( v5 == 110 )
      {
        v6 = 10;
        goto LABEL_17;
      }
      if ( v5 == 116 )
      {
        v6 = 9;
LABEL_17:
        uu_paste::parse_delimiters::add_one_byte_single_char_delimiter(&v14, v6);
        goto LABEL_5;
      }
    }
    else
    {
      if ( v5 == 48 )
      {
        v7 = alloc::boxed::Box<T>::new();
        alloc::vec::Vec<T,A>::push(&v14, v7, 0LL);
        goto LABEL_5;
      }
      v6 = 92;
      if ( v5 == 92 )
        goto LABEL_17;
    }
LABEL_4:
    uu_paste::parse_delimiters::{{closure}}(&v10, &v14);
LABEL_5:
    if ( !(unsigned int)core::str::validations::next_code_point(v16) )
      goto LABEL_18;
  }
  v18[0] = v17;
  v18[1] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)v11 = &off_113558;
  *(_QWORD *)&v11[8] = 1LL;
  v13 = 0LL;
  *(_QWORD *)&v11[16] = v18;
  v12 = 1LL;
  core::option::Option<T>::map_or_else(&v19, v11);
  LODWORD(v12) = 1;
  *(_OWORD *)v11 = v19;
  *(_QWORD *)&v11[16] = v20;
  a1[1] = alloc::boxed::Box<T>::new(v11);
  a1[2] = &off_1135A0;
  *a1 = 1LL;
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::boxed::Box<[u8]>>>(&v14);
}
