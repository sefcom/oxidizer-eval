__int64 __fastcall uu_stat::pad_and_print(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, char a5)
{
  void *v5; // rax
  char **v7; // [rsp+8h] [rbp-60h] BYREF
  __int64 v8; // [rsp+10h] [rbp-58h]
  _QWORD **v9; // [rsp+18h] [rbp-50h]
  __int128 v10; // [rsp+20h] [rbp-48h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  _QWORD *v12; // [rsp+38h] [rbp-30h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+48h] [rbp-20h]
  __int16 v15; // [rsp+50h] [rbp-18h]
  _QWORD v16[2]; // [rsp+58h] [rbp-10h] BYREF

  v16[0] = a1;
  v16[1] = a2;
  if ( a3 )
  {
    if ( a5 )
    {
      if ( a4 > 0xFFFF )
      {
        v7 = &off_119960;
        v8 = 1LL;
        v9 = (_QWORD **)&byte_8;
        v10 = 0LL;
        core::panicking::panic_fmt(&v7, &off_119AE8);
      }
      v12 = v16;
      v13 = <&T as core::fmt::Display>::fmt;
      v14 = 0LL;
      v15 = a4;
      v7 = (char **)&unk_1AB40;
      v8 = 1LL;
      v5 = &unk_1D418;
    }
    else
    {
      if ( a4 > 0xFFFF )
      {
        v7 = &off_119960;
        v8 = 1LL;
        v9 = (_QWORD **)&byte_8;
        v10 = 0LL;
        core::panicking::panic_fmt(&v7, &off_119AD0);
      }
      v12 = v16;
      v13 = <&T as core::fmt::Display>::fmt;
      v14 = 0LL;
      v15 = a4;
      v7 = (char **)&unk_1AB40;
      v8 = 1LL;
      v5 = &unk_1D3E8;
    }
  }
  else if ( a5 )
  {
    if ( a4 > 0xFFFF )
    {
      v7 = &off_119960;
      v8 = 1LL;
      v9 = (_QWORD **)&byte_8;
      v10 = 0LL;
      core::panicking::panic_fmt(&v7, &off_119AB8);
    }
    v12 = v16;
    v13 = <&T as core::fmt::Display>::fmt;
    v14 = 0LL;
    v15 = a4;
    v7 = (char **)&unk_1AB40;
    v8 = 1LL;
    v5 = &unk_1D3B8;
  }
  else
  {
    if ( a4 > 0xFFFF )
    {
      v7 = &off_119960;
      v8 = 1LL;
      v9 = (_QWORD **)&byte_8;
      v10 = 0LL;
      core::panicking::panic_fmt(&v7, &off_119AA0);
    }
    v12 = v16;
    v13 = <&T as core::fmt::Display>::fmt;
    v14 = 0LL;
    v15 = a4;
    v7 = (char **)&unk_1AB40;
    v8 = 1LL;
    v5 = &unk_1D388;
  }
  *((_QWORD *)&v10 + 1) = v5;
  v11 = 1LL;
  v9 = &v12;
  *(_QWORD *)&v10 = 2LL;
  return std::io::stdio::_print(&v7);
}