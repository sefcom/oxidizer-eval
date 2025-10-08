__int64 __fastcall uu_stat::print_unsigned_oct(
        int a1,
        char a2,
        unsigned __int8 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7)
{
  const char *v9; // rcx
  char ***v10; // rsi
  int v12; // [rsp+Ch] [rbp-9Ch] BYREF
  char **v13; // [rsp+10h] [rbp-98h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+18h] [rbp-90h]
  int *v15; // [rsp+20h] [rbp-88h]
  __int128 v16; // [rsp+28h] [rbp-80h]
  __int16 v17; // [rsp+38h] [rbp-70h]
  _QWORD *v18; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+48h] [rbp-60h]
  char ***v20; // [rsp+50h] [rbp-58h]
  __int64 (__fastcall *v21)(); // [rsp+58h] [rbp-50h]
  void *v22; // [rsp+60h] [rbp-48h]
  __int64 v23; // [rsp+68h] [rbp-40h]
  _QWORD v24[2]; // [rsp+70h] [rbp-38h] BYREF
  _BYTE v25[8]; // [rsp+80h] [rbp-28h] BYREF
  __int64 v26; // [rsp+88h] [rbp-20h]
  __int64 v27; // [rsp+90h] [rbp-18h]

  v12 = a1;
  v9 = (_BYTE *)(&dword_0 + 1);
  if ( (a2 & 1) != 0 )
    v9 = a00x;
  v24[0] = v9;
  v24[1] = a2 & 1;
  if ( a5 > 1 )
  {
    if ( a6 > 0xFFFF )
    {
      v13 = &off_119960;
      v14 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v15 = (_DWORD *)&byte_8;
      v16 = 0LL;
      core::panicking::panic_fmt(&v13, &off_119D00);
    }
    v13 = (char **)v24;
    v14 = <&T as core::fmt::Display>::fmt;
    v15 = &v12;
    *(_QWORD *)&v16 = core::fmt::num::<impl core::fmt::Octal for u32>::fmt;
    *((_QWORD *)&v16 + 1) = 0LL;
    v17 = a6;
    v18 = &unk_1CFD0;
    v19 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v22 = &unk_1D528;
    v23 = 2LL;
    v20 = &v13;
    v21 = (__int64 (__fastcall *)())(&dword_0 + 3);
    v10 = (char ***)&v18;
  }
  else
  {
    v18 = v24;
    v19 = <&T as core::fmt::Display>::fmt;
    v20 = (char ***)&v12;
    v21 = core::fmt::num::<impl core::fmt::Octal for u32>::fmt;
    v13 = (char **)&unk_1CFD0;
    v14 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v15 = (int *)&v18;
    v16 = 2uLL;
    v10 = &v13;
  }
  core::option::Option<T>::map_or_else(v25, v10);
  uu_stat::pad_and_print(v26, v27, a3, a4, a7);
  return core::ptr::drop_in_place<alloc::string::String>(v25);
}