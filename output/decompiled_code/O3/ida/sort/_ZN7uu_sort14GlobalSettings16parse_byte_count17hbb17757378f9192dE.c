        __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rcx
  _QWORD v15[4]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v16; // [rsp+20h] [rbp-58h]
  _QWORD *v17; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-30h]
  _QWORD v20[5]; // [rsp+50h] [rbp-28h] BYREF

  LOWORD(v16) = 0;
  BYTE2(v16) = 1;
  v6 = core::str::<impl str>::trim_matches(a2, a3, a3, a4, a5, a6, &off_1927D0, 13LL, aK_0, 1LL, v16);
  uucore::parser::parse_size::Parser::parse(&v17, v15, v6, v7);
  if ( v17 == (_QWORD *)((char *)&dword_0 + 3) )
  {
    v20[1] = v19;
    v20[0] = *((_QWORD *)&v18 + 1);
    if ( v19 )
    {
      v17 = v20;
      *(_QWORD *)&v18 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
      v15[0] = &off_1928A0;
      v15[1] = 2LL;
      v16 = 0LL;
      v15[2] = &v17;
      v15[3] = 1LL;
      ((void (__fastcall *)(__int64 *, _QWORD *, __int64, __int64, __int64, __int64))alloc::fmt::format::format_inner)(
        a1 + 1,
        v15,
        v8,
        v19,
        v9,
        v10);
      v11 = 2LL;
    }
    else
    {
      a1[1] = *((_QWORD *)&v18 + 1);
      v11 = 3LL;
    }
    *a1 = v11;
  }
  else
  {
    v12 = v18;
    v13 = v19;
    *a1 = (__int64)v17;
    *(_OWORD *)(a1 + 1) = v12;
    a1[3] = v13;
  }
  return a1;
}
