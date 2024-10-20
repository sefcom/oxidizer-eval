_QWORD *__fastcall uu_sort::KeySettings::check_compatibility(_QWORD *a1, unsigned __int8 a2, char a3, char a4)
{
  __int128 v4; // xmm0
  int v6; // [rsp+8h] [rbp-B0h] BYREF
  int v7; // [rsp+Ch] [rbp-ACh] BYREF
  char **v8; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+18h] [rbp-A0h]
  _QWORD *v10; // [rsp+20h] [rbp-98h]
  __int64 v11; // [rsp+28h] [rbp-90h]
  __int64 v12; // [rsp+30h] [rbp-88h]
  _QWORD v13[4]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v14[4]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v15; // [rsp+80h] [rbp-38h] BYREF
  __int64 v16; // [rsp+90h] [rbp-28h]
  __int128 v17; // [rsp+98h] [rbp-20h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-10h]

  if ( a2 >= 4u )
    goto LABEL_7;
  if ( !a4 )
  {
    if ( a3 )
    {
      v7 = *((_DWORD *)&unk_28900 + a2);
      v14[0] = &unk_28FEC;
      v14[1] = <char as core::fmt::Display>::fmt;
      v14[2] = &v7;
      v14[3] = <char as core::fmt::Display>::fmt;
      v8 = &off_1D2B70;
      v9 = 3LL;
      v10 = v14;
      v11 = 2LL;
      v12 = 0LL;
      alloc::fmt::format::format_inner(&v17, &v8);
      a1[2] = v18;
      v4 = v17;
      goto LABEL_6;
    }
LABEL_7:
    *a1 = 0x8000000000000000LL;
    return a1;
  }
  v6 = *((_DWORD *)&unk_28900 + a2);
  v13[0] = "d";
  v13[1] = <char as core::fmt::Display>::fmt;
  v13[2] = &v6;
  v13[3] = <char as core::fmt::Display>::fmt;
  v8 = &off_1D2B70;
  v9 = 3LL;
  v10 = v13;
  v11 = 2LL;
  v12 = 0LL;
  alloc::fmt::format::format_inner(&v15, &v8);
  a1[2] = v16;
  v4 = v15;
LABEL_6:
  *(_OWORD *)a1 = v4;
  return a1;
}
