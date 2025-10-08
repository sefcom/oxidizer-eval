__int64 __fastcall just::parser::Parser::presume_keyword(__int64 a1, _QWORD *a2, char a3)
{
  char v3; // cl
  __int64 result; // rax
  __int64 v5; // rdx
  __int128 v6; // rax
  int v7; // edx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  int v11; // edx
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int128 v15; // xmm4
  char v16; // [rsp+Fh] [rbp-169h] BYREF
  char *v17; // [rsp+10h] [rbp-168h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+18h] [rbp-160h]
  char *v19; // [rsp+20h] [rbp-158h]
  __int64 (__fastcall *v20)(); // [rsp+28h] [rbp-150h]
  _BYTE v21[72]; // [rsp+30h] [rbp-148h] BYREF
  __int128 v22; // [rsp+78h] [rbp-100h]
  _OWORD v23[4]; // [rsp+90h] [rbp-E8h] BYREF
  unsigned __int8 v24; // [rsp+D0h] [rbp-A8h]
  _BYTE v25[7]; // [rsp+D1h] [rbp-A7h]
  char v26; // [rsp+D8h] [rbp-A0h]
  _BYTE v27[7]; // [rsp+D9h] [rbp-9Fh]
  _QWORD v28[2]; // [rsp+100h] [rbp-78h] BYREF
  _OWORD v29[4]; // [rsp+110h] [rbp-68h] BYREF
  unsigned __int8 v30; // [rsp+150h] [rbp-28h] BYREF
  _DWORD v31[9]; // [rsp+151h] [rbp-27h]

  v16 = a3;
  just::parser::Parser::advance((__int64)v23, a2);
  v3 = v26;
  *(_OWORD *)v21 = v23[0];
  *(_OWORD *)&v21[16] = v23[1];
  *(_OWORD *)&v21[32] = v23[2];
  *(_OWORD *)&v21[48] = v23[3];
  result = v24;
  LODWORD(v17) = *(_DWORD *)v25;
  *(_DWORD *)((char *)&v17 + 3) = *(_DWORD *)&v25[3];
  if ( v26 == 37 )
  {
    v29[0] = *(_OWORD *)v21;
    v29[1] = *(_OWORD *)&v21[16];
    v29[2] = *(_OWORD *)&v21[32];
    v29[3] = *(_OWORD *)&v21[48];
    v5 = *(unsigned int *)((char *)&v17 + 3);
    v31[0] = (_DWORD)v17;
    *(_DWORD *)((char *)v31 + 3) = *(_DWORD *)((char *)&v17 + 3);
    v30 = v24;
    if ( v24 == 24 )
    {
      *(_QWORD *)&v6 = just::token::Token::lexeme(v29);
      v23[0] = v6;
      result = <just::keyword::Keyword as core::cmp::PartialEq<&str>>::eq(&v16, v23);
      if ( (_BYTE)result )
      {
        *(_BYTE *)(a1 + 72) = 37;
        return result;
      }
      v28[0] = just::token::Token::lexeme(v29);
      v28[1] = v5;
      v17 = &v16;
      v18 = <just::keyword::Keyword as core::fmt::Display>::fmt;
      v19 = (char *)v28;
      v20 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v21 = &off_4306F8;
      *(_QWORD *)&v21[8] = 3LL;
    }
    else
    {
      v17 = (char *)&unk_6E88E;
      v18 = <just::token_kind::TokenKind as core::fmt::Display>::fmt;
      v19 = (char *)&v30;
      v20 = <just::token_kind::TokenKind as core::fmt::Display>::fmt;
      *(_QWORD *)v21 = &off_4306D8;
      *(_QWORD *)&v21[8] = 2LL;
    }
    *(_QWORD *)&v21[32] = 0LL;
    *(_QWORD *)&v21[16] = &v17;
    *(_QWORD *)&v21[24] = 2LL;
    core::option::Option<T>::map_or_else((char *)v23 + 8, 0LL, v5, v21);
    *(_QWORD *)&v23[0] = 0x8000000000000028LL;
    result = just::parser::Parser::error((__int64)v21, (__int64)a2, (__int64)v23);
    v12 = *(_OWORD *)&v21[8];
    v13 = *(_OWORD *)&v21[24];
    v14 = *(_OWORD *)&v21[40];
    v15 = *(_OWORD *)&v21[56];
    *(_OWORD *)(a1 + 64) = v22;
    *(_OWORD *)(a1 + 48) = v15;
    *(_OWORD *)(a1 + 32) = v14;
    *(_OWORD *)(a1 + 16) = v13;
    *(_OWORD *)a1 = v12;
  }
  else
  {
    v7 = *(_DWORD *)v27;
    *(_DWORD *)(a1 + 76) = *(_DWORD *)&v27[3];
    *(_DWORD *)(a1 + 73) = v7;
    v8 = *(_OWORD *)v21;
    v9 = *(_OWORD *)&v21[16];
    v10 = *(_OWORD *)&v21[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v21[48];
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
    v11 = (int)v17;
    *(_DWORD *)(a1 + 68) = *(_DWORD *)((char *)&v17 + 3);
    *(_DWORD *)(a1 + 65) = v11;
    *(_BYTE *)(a1 + 64) = result;
    *(_BYTE *)(a1 + 72) = v3;
  }
  return result;
}