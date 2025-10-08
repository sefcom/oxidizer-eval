__int64 __fastcall uu_stat::print_unsigned_hex(
        __int64 a1,
        char a2,
        unsigned __int8 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7)
{
  char *v9; // rcx
  char ***v10; // rsi
  __int64 v12; // [rsp+8h] [rbp-A0h] BYREF
  char **v13; // [rsp+10h] [rbp-98h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+18h] [rbp-90h]
  __int64 *v15; // [rsp+20h] [rbp-88h]
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
    v9 = &a00x[1];
  v24[0] = v9;
  v24[1] = 2 * (a2 & 1u);
  if ( a5 > 1 )
  {
    if ( a6 > 0xFFFF )
    {
      v13 = &off_119960;
      v14 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v15 = (_QWORD *)&byte_8;
      v16 = 0LL;
      core::panicking::panic_fmt(&v13, &off_119D18);
    }
    v13 = (char **)v24;
    v14 = <&T as core::fmt::Display>::fmt;
    v15 = &v12;
    *(_QWORD *)&v16 = core::fmt::num::<impl core::fmt::LowerHex for usize>::fmt;
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
    v21 = core::fmt::num::<impl core::fmt::LowerHex for usize>::fmt;
    v13 = (char **)&unk_1CFD0;
    v14 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v15 = (__int64 *)&v18;
    v16 = 2uLL;
    v10 = &v13;
  }
  core::option::Option<T>::map_or_else(v25, v10);
  uu_stat::pad_and_print(v26, v27, a3, a4, a7);
  return core::ptr::drop_in_place<alloc::string::String>(v25);
}