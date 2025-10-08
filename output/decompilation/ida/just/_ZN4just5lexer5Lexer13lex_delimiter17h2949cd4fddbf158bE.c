__int64 __fastcall just::lexer::Lexer::lex_delimiter(_OWORD *a1, __int64 a2, __int64 a3)
{
  char v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  char v15; // [rsp+7h] [rbp-91h] BYREF
  __int128 v16; // [rsp+8h] [rbp-90h] BYREF
  __int128 v17; // [rsp+18h] [rbp-80h]
  __int128 v18; // [rsp+28h] [rbp-70h]
  __int128 v19; // [rsp+38h] [rbp-60h]
  __int128 v20; // [rsp+48h] [rbp-50h]
  _QWORD v21[2]; // [rsp+58h] [rbp-40h] BYREF
  _BYTE v22[48]; // [rsp+68h] [rbp-30h] BYREF

  v15 = a3;
  v5 = a3;
  switch ( (char)a3 )
  {
    case 7:
      v6 = a2;
      v7 = 0LL;
      goto LABEL_12;
    case 8:
      result = just::lexer::Lexer::close_delimiter(&v16, a2, 0LL);
      if ( BYTE8(v20) == 37 )
        goto LABEL_13;
      goto LABEL_10;
    case 9:
      v6 = a2;
      v7 = 1LL;
      goto LABEL_12;
    case 10:
      result = just::lexer::Lexer::close_delimiter(&v16, a2, 1LL);
      if ( BYTE8(v20) != 37 )
        goto LABEL_10;
      goto LABEL_13;
    case 28:
      v6 = a2;
      v7 = 2LL;
LABEL_12:
      just::lexer::Lexer::open_delimiter(v6, v7);
      goto LABEL_13;
    case 29:
      result = just::lexer::Lexer::close_delimiter(&v16, a2, 2LL);
      if ( BYTE8(v20) == 37 )
      {
LABEL_13:
        result = just::lexer::Lexer::lex_single((__int64)a1, a2, v5);
      }
      else
      {
LABEL_10:
        a1[4] = v20;
        v12 = v16;
        v13 = v17;
        v14 = v18;
        a1[3] = v19;
        a1[2] = v14;
        a1[1] = v13;
        *a1 = v12;
      }
      break;
    default:
      v21[0] = &v15;
      v21[1] = <just::token_kind::TokenKind as core::fmt::Display>::fmt;
      *(_QWORD *)&v16 = &off_430500;
      *((_QWORD *)&v16 + 1) = 2LL;
      *(_QWORD *)&v18 = 0LL;
      *(_QWORD *)&v17 = v21;
      *((_QWORD *)&v17 + 1) = 1LL;
      core::option::Option<T>::map_or_else(v22, 0LL, a3, &v16);
      result = just::lexer::Lexer::internal_error((__int64)a1, a2, (__int64)v22, v9, v10, v11);
      break;
  }
  return result;
}