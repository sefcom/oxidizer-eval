        __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rcx
  _QWORD v12[4]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+20h] [rbp-58h]
  _QWORD *v14; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+48h] [rbp-30h]
  _QWORD v17[5]; // [rsp+50h] [rbp-28h] BYREF

  LOWORD(v13) = 0;
  BYTE2(v13) = 1;
  v6 = core::str::<impl str>::trim_matches(a2, a3, a3, a4, a5, a6, &off_1FEC60, 13LL, aK_2, 1LL, v13);
  uucore::parser::parse_size::Parser::parse(&v14, v12, v6, v7);
  if ( v14 == (_QWORD *)((char *)&dword_0 + 3) )
  {
    v17[1] = v16;
    v17[0] = *((_QWORD *)&v15 + 1);
    if ( v16 )
    {
      v14 = v17;
      *(_QWORD *)&v15 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
      v12[0] = &off_1FED30;
      v12[1] = 2LL;
      v13 = 0LL;
      v12[2] = &v14;
      v12[3] = 1LL;
      ((void (__fastcall *)(__int64 *, _QWORD *))core::option::Option<T>::map_or_else)(a1 + 1, v12);
      v8 = 2LL;
    }
    else
    {
      a1[1] = *((_QWORD *)&v15 + 1);
      v8 = 3LL;
    }
    *a1 = v8;
  }
  else
  {
    v9 = v15;
    v10 = v16;
    *a1 = (__int64)v14;
    *(_OWORD *)(a1 + 1) = v9;
    a1[3] = v10;
  }
  return a1;
}
