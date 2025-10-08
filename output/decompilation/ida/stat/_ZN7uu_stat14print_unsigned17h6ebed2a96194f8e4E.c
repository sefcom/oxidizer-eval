__int64 __fastcall uu_stat::print_unsigned(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        char a7)
{
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // r12
  char v14; // r14
  __int128 v16; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v17; // [rsp+10h] [rbp-D8h]
  __int128 v18; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+30h] [rbp-B8h]
  char **v20; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-A8h]
  _QWORD *v22; // [rsp+48h] [rbp-A0h]
  __int128 v23; // [rsp+50h] [rbp-98h]
  __int64 v24; // [rsp+60h] [rbp-88h]
  _BYTE v25[8]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v26; // [rsp+70h] [rbp-78h]
  unsigned __int64 v27; // [rsp+78h] [rbp-70h]
  _QWORD v28[3]; // [rsp+80h] [rbp-68h] BYREF
  __int16 v29; // [rsp+98h] [rbp-50h]
  __int128 v30; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-38h]

  v11 = core::fmt::num::imp::<impl usize>::_fmt(a1, &v20, 20LL);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v25, v11, v12);
  if ( (a3 & 1) != 0 )
  {
    uu_stat::group_num(&v18, v26, v27);
    v13 = a7;
    if ( a5 )
      goto LABEL_3;
LABEL_7:
    v16 = v18;
    v17 = v19;
    if ( (_QWORD)v18 == 0x8000000000000000LL )
      goto LABEL_5;
LABEL_8:
    v14 = 0;
    goto LABEL_11;
  }
  *((_QWORD *)&v18 + 1) = v26;
  v19 = v27;
  *(_QWORD *)&v18 = 0x8000000000000000LL;
  v13 = a7;
  if ( !a5 )
    goto LABEL_7;
LABEL_3:
  if ( a5 == 1 )
  {
    v16 = v18;
    v17 = v19;
    if ( (_QWORD)v18 == 0x8000000000000000LL )
    {
LABEL_5:
      uu_stat::pad_and_print(*((__int64 *)&v16 + 1), v17, a2, a4, v13);
LABEL_12:
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v18);
      return core::ptr::drop_in_place<alloc::string::String>(v25);
    }
    goto LABEL_8;
  }
  if ( a6 > 0xFFFF )
  {
    v20 = &off_119960;
    v21 = 1LL;
    v22 = (_QWORD *)&byte_8;
    v23 = 0LL;
    core::panicking::panic_fmt(&v20, &off_119CE8);
  }
  v28[0] = &v18;
  v28[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
  v28[2] = 0LL;
  v29 = a6;
  v20 = (char **)&unk_1AB40;
  v21 = 1LL;
  *((_QWORD *)&v23 + 1) = &unk_1D388;
  v24 = 1LL;
  v22 = v28;
  *(_QWORD *)&v23 = 2LL;
  core::option::Option<T>::map_or_else(&v30, &v20);
  v16 = v30;
  v17 = v31;
  v14 = 1;
LABEL_11:
  uu_stat::pad_and_print(*((__int64 *)&v16 + 1), v17, a2, a4, v13);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v16);
  if ( v14 )
    goto LABEL_12;
  return core::ptr::drop_in_place<alloc::string::String>(v25);
}