__int64 __fastcall just::parser::Parser::parse_set_bool(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  char v3; // cl
  __int128 v4; // rax
  char v5; // bp
  __int128 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  int v10; // esi
  int v11; // ecx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  _WORD *v15; // rax
  _BYTE v16[80]; // [rsp+8h] [rbp-170h] BYREF
  __int128 v17; // [rsp+58h] [rbp-120h]
  __int64 v18; // [rsp+68h] [rbp-110h]
  __int128 v19; // [rsp+70h] [rbp-108h]
  __int128 v20; // [rsp+80h] [rbp-F8h]
  __int128 v21; // [rsp+90h] [rbp-E8h]
  __int128 v22; // [rsp+A0h] [rbp-D8h]
  __int64 v23; // [rsp+B0h] [rbp-C8h]
  __int128 v24; // [rsp+C0h] [rbp-B8h]
  __int128 v25; // [rsp+D0h] [rbp-A8h]
  __int128 v26; // [rsp+E0h] [rbp-98h]
  __int128 v27; // [rsp+F0h] [rbp-88h]
  __int64 v28; // [rsp+100h] [rbp-78h]
  _OWORD v29[4]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v30; // [rsp+150h] [rbp-28h]

  just::parser::Parser::accepted((__int64)v16, a2, 14);
  result = v16[0];
  v3 = v16[72];
  if ( v16[72] != 37 )
  {
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v16[64];
    v7 = *(_OWORD *)&v16[1];
    v8 = *(_OWORD *)&v16[17];
    v9 = *(_OWORD *)&v16[33];
    *(_OWORD *)(a1 + 49) = *(_OWORD *)&v16[49];
    *(_OWORD *)(a1 + 33) = v9;
    *(_OWORD *)(a1 + 17) = v8;
    *(_OWORD *)(a1 + 1) = v7;
    v10 = *(_DWORD *)&v16[76];
    *(_DWORD *)(a1 + 73) = *(_DWORD *)&v16[73];
    *(_DWORD *)(a1 + 76) = v10;
    *(_BYTE *)a1 = result;
    *(_BYTE *)(a1 + 72) = v3;
    return result;
  }
  if ( (v16[0] & 1) == 0 )
  {
    *(_BYTE *)a1 = 1;
    goto LABEL_9;
  }
  just::parser::Parser::expect((__int64)v16, a2);
  result = v16[72];
  v19 = *(_OWORD *)v16;
  v20 = *(_OWORD *)&v16[16];
  v21 = *(_OWORD *)&v16[32];
  v22 = *(_OWORD *)&v16[48];
  v23 = *(_QWORD *)&v16[64];
  if ( v16[72] == 37 )
  {
    v24 = v19;
    v25 = v20;
    v26 = v21;
    v27 = v22;
    v28 = v23;
    v29[0] = v19;
    v29[1] = v20;
    v29[2] = v21;
    v29[3] = v22;
    v30 = v23;
    *(_QWORD *)&v4 = just::token::Token::lexeme(v29);
    *(_OWORD *)v16 = v4;
    result = <just::keyword::Keyword as core::cmp::PartialEq<&str>>::eq(&unk_6E88E, v16);
    v5 = result;
    if ( (_BYTE)result
      || (*(_QWORD *)&v6 = just::token::Token::lexeme(v29),
          *(_OWORD *)v16 = v6,
          result = <just::keyword::Keyword as core::cmp::PartialEq<&str>>::eq(&unk_6E311, v16),
          (_BYTE)result) )
    {
      *(_BYTE *)a1 = v5;
LABEL_9:
      *(_BYTE *)(a1 + 72) = 37;
      return result;
    }
    v15 = (_WORD *)alloc::alloc::Global::alloc_impl(1LL, 2LL);
    if ( !v15 )
      alloc::alloc::handle_alloc_error(1LL, 2LL);
    *v15 = 3096;
    *(_QWORD *)&v16[8] = 2LL;
    *(_QWORD *)&v16[16] = v15;
    *(_QWORD *)&v16[24] = 2LL;
    *(_OWORD *)&v16[32] = v24;
    *(_OWORD *)&v16[48] = v25;
    *(_OWORD *)&v16[64] = v26;
    v17 = v27;
    v18 = v28;
    *(_QWORD *)v16 = 0x8000000000000021LL;
    return just::token::Token::error(a1, v29, v16);
  }
  else
  {
    v11 = *(_DWORD *)&v16[73];
    *(_DWORD *)(a1 + 76) = *(_DWORD *)&v16[76];
    *(_DWORD *)(a1 + 73) = v11;
    *(_QWORD *)(a1 + 64) = v23;
    v12 = v19;
    v13 = v20;
    v14 = v21;
    *(_OWORD *)(a1 + 48) = v22;
    *(_OWORD *)(a1 + 32) = v14;
    *(_OWORD *)(a1 + 16) = v13;
    *(_OWORD *)a1 = v12;
    *(_BYTE *)(a1 + 72) = result;
  }
  return result;
}