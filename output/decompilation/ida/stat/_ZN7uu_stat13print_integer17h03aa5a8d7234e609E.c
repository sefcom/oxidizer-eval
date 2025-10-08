__int64 __fastcall uu_stat::print_integer(
        __int64 a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        char a6)
{
  __int64 v11; // rax
  const char *v12; // rcx
  const char *v13; // rsi
  __int128 v15; // [rsp+0h] [rbp-E8h] BYREF
  _QWORD **v16; // [rsp+10h] [rbp-D8h]
  __int128 v17; // [rsp+18h] [rbp-D0h]
  __int16 v18; // [rsp+28h] [rbp-C0h]
  _QWORD v19[3]; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v20; // [rsp+50h] [rbp-98h] BYREF
  _QWORD **v21; // [rsp+60h] [rbp-88h]
  _QWORD *v22; // [rsp+68h] [rbp-80h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+70h] [rbp-78h]
  __int128 *v24; // [rsp+78h] [rbp-70h]
  __int64 (__fastcall *v25)(); // [rsp+80h] [rbp-68h]
  void *v26; // [rsp+88h] [rbp-60h]
  __int64 v27; // [rsp+90h] [rbp-58h]
  _QWORD v28[2]; // [rsp+98h] [rbp-50h] BYREF
  _BYTE v29[8]; // [rsp+A8h] [rbp-40h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v31; // [rsp+B8h] [rbp-30h]

  <i64 as alloc::string::SpecToString>::spec_to_string(v29, a1);
  if ( a2[5] )
  {
    uu_stat::group_num(v19, v30, v31);
  }
  else
  {
    v19[1] = v30;
    v19[2] = v31;
    v19[0] = 0x8000000000000000LL;
  }
  v11 = a2[3];
  v12 = (const char *)&unk_1D51F;
  if ( (v11 & 1) == 0 )
    v12 = (_BYTE *)(&dword_0 + 1);
  v13 = asc_1D520;
  if ( a2[4] )
    v11 = 1LL;
  else
    v13 = v12;
  v28[0] = v13;
  v28[1] = v11;
  if ( a4 > 1 )
  {
    if ( a5 > 0xFFFF )
    {
      *(_QWORD *)&v15 = &off_119960;
      *((_QWORD *)&v15 + 1) = 1LL;
      v16 = (_QWORD **)&byte_8;
      v17 = 0LL;
      core::panicking::panic_fmt(&v15, &off_119C68);
    }
    *(_QWORD *)&v15 = v28;
    *((_QWORD *)&v15 + 1) = <&T as core::fmt::Display>::fmt;
    v16 = (_QWORD **)v19;
    *(_QWORD *)&v17 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    *((_QWORD *)&v17 + 1) = 0LL;
    v18 = a5;
    v22 = &unk_1CFD0;
    v23 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v26 = &unk_1D528;
    v27 = 2LL;
    v24 = &v15;
    v25 = (__int64 (__fastcall *)())(&dword_0 + 3);
    core::option::Option<T>::map_or_else(&v20, &v22);
  }
  else
  {
    v22 = v28;
    v23 = <&T as core::fmt::Display>::fmt;
    v24 = (__int128 *)v19;
    v25 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    *(_QWORD *)&v15 = &unk_1CFD0;
    *((_QWORD *)&v15 + 1) = 2LL;
    v16 = &v22;
    v17 = 2uLL;
    core::option::Option<T>::map_or_else(&v20, &v15);
  }
  v15 = v20;
  v16 = v21;
  uu_stat::pad_and_print(*((__int64 *)&v20 + 1), (__int64)v21, a2[2], a3, a6);
  core::ptr::drop_in_place<alloc::string::String>(&v15);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v19);
  return core::ptr::drop_in_place<alloc::string::String>(v29);
}