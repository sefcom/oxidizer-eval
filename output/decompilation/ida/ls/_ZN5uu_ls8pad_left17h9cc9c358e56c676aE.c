__int64 __fastcall uu_ls::pad_left(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char **v5; // [rsp+8h] [rbp-60h] BYREF
  __int64 v6; // [rsp+10h] [rbp-58h]
  _QWORD *v7; // [rsp+18h] [rbp-50h]
  __int128 v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+30h] [rbp-38h]
  _QWORD v10[2]; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v11[3]; // [rsp+48h] [rbp-20h] BYREF
  __int16 v12; // [rsp+60h] [rbp-8h]

  v10[0] = a2;
  v10[1] = a3;
  if ( a4 > 0xFFFF )
  {
    v5 = &off_2864A8;
    v6 = 1LL;
    v7 = (_QWORD *)&byte_8;
    v8 = 0LL;
    core::panicking::panic_fmt(&v5, &off_286BE0);
  }
  v11[0] = v10;
  v11[1] = <&T as core::fmt::Display>::fmt;
  v11[2] = 0LL;
  v12 = a4;
  v5 = (char **)&unk_CF290;
  v6 = 1LL;
  *((_QWORD *)&v8 + 1) = &unk_D41D0;
  v9 = 1LL;
  v7 = v11;
  *(_QWORD *)&v8 = 2LL;
  return core::option::Option<T>::map_or_else(a1, &v5);
}