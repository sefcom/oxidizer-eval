__int64 __fastcall just::lexer::Lexer::presume(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  int v7; // [rsp+4h] [rbp-94h] BYREF
  _QWORD v8[2]; // [rsp+8h] [rbp-90h] BYREF
  __int128 v9; // [rsp+18h] [rbp-80h] BYREF
  __int128 v10; // [rsp+28h] [rbp-70h]
  __int128 v11; // [rsp+38h] [rbp-60h]
  __int128 v12; // [rsp+48h] [rbp-50h]
  __int128 v13; // [rsp+58h] [rbp-40h]
  _BYTE v14[48]; // [rsp+68h] [rbp-30h] BYREF

  v7 = a3;
  if ( *(_DWORD *)(a2 + 192) == (_DWORD)a3 )
  {
    result = just::lexer::Lexer::advance((__int64)&v9, a2);
    if ( BYTE8(v13) == 37 )
    {
      *(_BYTE *)(a1 + 72) = 37;
    }
    else
    {
      *(_OWORD *)(a1 + 64) = v13;
      v4 = v9;
      v5 = v10;
      v6 = v11;
      *(_OWORD *)(a1 + 48) = v12;
      *(_OWORD *)(a1 + 32) = v6;
      *(_OWORD *)(a1 + 16) = v5;
      *(_OWORD *)a1 = v4;
    }
  }
  else
  {
    v8[0] = &v7;
    v8[1] = <char as core::fmt::Display>::fmt;
    *(_QWORD *)&v9 = &off_4303A8;
    *((_QWORD *)&v9 + 1) = 2LL;
    *(_QWORD *)&v11 = 0LL;
    *(_QWORD *)&v10 = v8;
    *((_QWORD *)&v10 + 1) = 1LL;
    core::option::Option<T>::map_or_else(v14, 0LL, a3, &v9);
    return just::lexer::Lexer::internal_error(a1, a2, v14);
  }
  return result;
}