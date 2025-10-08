__int64 __fastcall uu_nl::NumberFormat::format(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  void *v6; // rax
  char **v7; // rax
  char **v9; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+8h] [rbp-60h]
  __int64 **v11; // [rsp+10h] [rbp-58h]
  __int128 v12; // [rsp+18h] [rbp-50h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 *v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+40h] [rbp-28h]
  __int16 v17; // [rsp+48h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-18h] BYREF
  __int64 v19; // [rsp+58h] [rbp-10h] BYREF

  v18 = a3;
  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      if ( a4 > 0xFFFF )
      {
        v9 = &off_23A250;
        v10 = 1LL;
        v11 = (__int64 **)&byte_8;
        v12 = 0LL;
        ((void (__fastcall __noreturn *)(char ***, char **, __int64, unsigned __int64, __int64, __int64))core::panicking::panic_fmt)(
          &v9,
          &off_23A278,
          a3,
          a4,
          a5,
          a6);
      }
      v14 = &v18;
      v15 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
      v16 = 0LL;
      v17 = a4;
      v9 = (char **)&unk_4E930;
      v10 = 1LL;
      v6 = &unk_543C0;
    }
    else
    {
      if ( a3 < 0 )
      {
        a3 = -a3;
        v19 = a3;
        if ( --a4 > 0xFFFF )
        {
          v9 = &off_23A250;
          v10 = 1LL;
          v11 = (__int64 **)&byte_8;
          v12 = 0LL;
          ((void (__fastcall __noreturn *)(char ***, char **, __int64, unsigned __int64, __int64, __int64))core::panicking::panic_fmt)(
            &v9,
            &off_23A2B8,
            a3,
            a4,
            a5,
            a6);
        }
        v14 = &v19;
        v15 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v16 = 0LL;
        v17 = a4;
        v7 = (char **)&off_23A2A8;
      }
      else
      {
        if ( a4 > 0xFFFF )
        {
          v9 = &off_23A250;
          v10 = 1LL;
          v11 = (__int64 **)&byte_8;
          v12 = 0LL;
          ((void (__fastcall __noreturn *)(char ***, char **, __int64, unsigned __int64, __int64, __int64))core::panicking::panic_fmt)(
            &v9,
            &off_23A290,
            a3,
            a4,
            a5,
            a6);
        }
        v14 = &v18;
        v15 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v16 = 0LL;
        v17 = a4;
        v7 = (char **)&unk_4E930;
      }
      v9 = v7;
      v10 = 1LL;
      v6 = &unk_543F0;
    }
  }
  else
  {
    if ( a4 > 0xFFFF )
    {
      v9 = &off_23A250;
      v10 = 1LL;
      v11 = (__int64 **)&byte_8;
      v12 = 0LL;
      ((void (__fastcall __noreturn *)(char ***, char **))core::panicking::panic_fmt)(&v9, &off_23A260);
    }
    v14 = &v18;
    v15 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
    v16 = 0LL;
    v17 = a4;
    v9 = (char **)&unk_4E930;
    v10 = 1LL;
    v6 = &unk_54390;
  }
  *((_QWORD *)&v12 + 1) = v6;
  v13 = 1LL;
  v11 = &v14;
  *(_QWORD *)&v12 = 2LL;
  ((void (__fastcall *)(__int64, char ***, __int64, unsigned __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
    a1,
    &v9,
    a3,
    a4,
    a5,
    a6);
  return a1;
}