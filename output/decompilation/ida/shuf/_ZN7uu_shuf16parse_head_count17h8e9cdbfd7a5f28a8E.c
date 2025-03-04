_QWORD *__fastcall uu_shuf::parse_head_count(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  _QWORD *result; // rax
  _BYTE v8[24]; // [rsp+10h] [rbp-108h] BYREF
  __int128 v9; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-E0h]
  _BYTE v11[8]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-D0h]
  _QWORD v13[2]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v14[32]; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v15; // [rsp+80h] [rbp-98h] BYREF
  __int64 v16; // [rsp+90h] [rbp-88h]
  _QWORD v17[6]; // [rsp+98h] [rbp-80h] BYREF
  __int64 v18; // [rsp+C8h] [rbp-50h] BYREF
  __int128 v19; // [rsp+D0h] [rbp-48h]
  char v20; // [rsp+E0h] [rbp-38h]

  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v14);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9, v14);
  v1 = -1LL;
  if ( (_QWORD)v9 == 0x8000000000000000LL )
  {
LABEL_4:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v14);
    result = a1;
    a1[1] = v1;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    while ( 1 )
    {
      *(_QWORD *)&v8[16] = v10;
      *(_OWORD *)v8 = v9;
      core::num::<impl core::str::traits::FromStr for usize>::from_str(v11, *((_QWORD *)&v9 + 1), v10);
      if ( v11[0] )
        break;
      v6 = v12;
      core::ptr::drop_in_place<alloc::string::String>(v8);
      v1 = core::cmp::min_by(v1, v6);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9, v14);
      if ( (_QWORD)v9 == 0x8000000000000000LL )
        goto LABEL_4;
    }
    v18 = 0LL;
    v19 = *(_OWORD *)&v8[8];
    v20 = 1;
    v13[0] = &v18;
    v13[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v17[0] = &off_137D48;
    v17[1] = 1LL;
    v17[4] = 0LL;
    v17[2] = v13;
    v17[3] = 1LL;
    core::option::Option<T>::map_or_else(&v15, v17, v2, v3, v4, v5);
    a1[2] = v16;
    *(_OWORD *)a1 = v15;
    core::ptr::drop_in_place<alloc::string::String>(v8);
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v14);
    return a1;
  }
  return result;
}
