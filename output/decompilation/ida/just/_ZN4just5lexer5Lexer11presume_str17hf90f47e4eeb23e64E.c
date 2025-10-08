__int64 __fastcall just::lexer::Lexer::presume_str(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  _QWORD v9[2]; // [rsp+8h] [rbp-80h] BYREF
  _OWORD v10[4]; // [rsp+18h] [rbp-70h] BYREF
  __int128 v11; // [rsp+58h] [rbp-30h]

  v9[0] = a3;
  v9[1] = a3 + a4;
  result = core::str::validations::next_code_point(v9);
  if ( (result & 1) != 0 )
  {
    while ( 1 )
    {
      result = just::lexer::Lexer::presume((__int64)v10, a2, v5);
      if ( BYTE8(v11) != 37 )
        break;
      result = core::str::validations::next_code_point(v9);
      if ( (result & 1) == 0 )
        goto LABEL_4;
    }
    *(_OWORD *)(a1 + 64) = v11;
    v6 = v10[0];
    v7 = v10[1];
    v8 = v10[2];
    *(_OWORD *)(a1 + 48) = v10[3];
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = v6;
  }
  else
  {
LABEL_4:
    *(_BYTE *)(a1 + 72) = 37;
  }
  return result;
}