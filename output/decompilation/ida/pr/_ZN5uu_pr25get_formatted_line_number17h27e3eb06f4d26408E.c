char __fastcall uu_pr::get_formatted_line_number(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  char result; // al
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r14
  unsigned __int64 v8; // rbp
  char *v9; // r15
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  char **v13; // rsi
  _QWORD *v14; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v15; // [rsp+10h] [rbp-D8h] BYREF
  _QWORD *v16; // [rsp+20h] [rbp-C8h]
  __int128 v17; // [rsp+28h] [rbp-C0h]
  __int16 v18; // [rsp+38h] [rbp-B0h]
  const char *v19; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-A0h]
  __int128 *v21; // [rsp+50h] [rbp-98h]
  __int64 v22; // [rsp+58h] [rbp-90h]
  void *v23; // [rsp+60h] [rbp-88h]
  __int64 v24; // [rsp+68h] [rbp-80h]
  __int128 v25; // [rsp+70h] [rbp-78h] BYREF
  _QWORD *v26; // [rsp+80h] [rbp-68h]
  __int128 v27; // [rsp+90h] [rbp-58h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-48h]
  _QWORD v29[8]; // [rsp+A8h] [rbp-40h] BYREF

  result = 0;
  if ( __OFSUB__(0LL, a2[27]) )
    goto LABEL_4;
  if ( a2[2] )
  {
    result = a4 != 0;
    if ( a4 != 0 || a3 == 0 )
    {
LABEL_4:
      *a1 = 0LL;
      a1[1] = 1LL;
      a1[2] = 0LL;
      return result;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_4;
  }
  v5 = core::fmt::num::imp::<impl usize>::_fmt(a3, &v19, 20LL);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v15, v5, v6);
  v7 = v16;
  v26 = v16;
  v25 = v15;
  v8 = a2[30];
  v14 = a2 + 27;
  v9 = (char *)v16 - v8;
  if ( (unsigned __int64)v16 >= v8 )
  {
    v10 = *((_QWORD *)&v25 + 1);
    v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            (char *)v16 - v8,
            *((_QWORD *)&v25 + 1),
            v16);
    if ( !v11 )
      core::str::slice_error_fail(v10, v7, v9, v7, &off_269620);
    v29[0] = v11;
    v29[1] = v12;
    if ( v8 <= 0xFFFF )
    {
      *(_QWORD *)&v15 = v29;
      *((_QWORD *)&v15 + 1) = <&T as core::fmt::Display>::fmt;
      v16 = &v14;
      *(_QWORD *)&v17 = <&T as core::fmt::Display>::fmt;
      *((_QWORD *)&v17 + 1) = 0LL;
      v18 = v8;
      v19 = "\x01";
      v20 = 2LL;
      v23 = &unk_58388;
      v24 = 2LL;
      v21 = &v15;
      v22 = 3LL;
      core::option::Option<T>::map_or_else(&v27, &v19);
      goto LABEL_12;
    }
    v13 = &off_269638;
LABEL_16:
    *(_QWORD *)&v15 = &off_268F50;
    *((_QWORD *)&v15 + 1) = 1LL;
    v16 = (_QWORD *)&byte_8;
    v17 = 0LL;
    core::panicking::panic_fmt(&v15, v13);
  }
  if ( v8 > 0xFFFF )
  {
    v13 = &off_269608;
    goto LABEL_16;
  }
  *(_QWORD *)&v15 = &v25;
  *((_QWORD *)&v15 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  v16 = &v14;
  *(_QWORD *)&v17 = <&T as core::fmt::Display>::fmt;
  *((_QWORD *)&v17 + 1) = 0LL;
  v18 = v8;
  v19 = "\x01";
  v20 = 2LL;
  v23 = &unk_58388;
  v24 = 2LL;
  v21 = &v15;
  v22 = 3LL;
  core::option::Option<T>::map_or_else(&v27, &v19);
LABEL_12:
  a1[2] = v28;
  *(_OWORD *)a1 = v27;
  return core::ptr::drop_in_place<alloc::string::String>(&v25);
}