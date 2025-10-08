__int64 __fastcall just::parser::Parser::expect_keyword(__int64 a1, _QWORD *a2, char a3)
{
  __int64 result; // rax
  char v5; // r14
  __int128 v6; // rax
  int v7; // ecx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  int v11; // ecx
  _BYTE *v12; // rax
  char v13; // [rsp+7h] [rbp-161h] BYREF
  _DWORD v14[2]; // [rsp+8h] [rbp-160h]
  _DWORD v15[2]; // [rsp+10h] [rbp-158h]
  __int128 v16; // [rsp+18h] [rbp-150h] BYREF
  __int128 v17; // [rsp+28h] [rbp-140h]
  __int128 v18; // [rsp+38h] [rbp-130h]
  __int128 v19; // [rsp+48h] [rbp-120h]
  __int128 v20; // [rsp+58h] [rbp-110h]
  __int128 v21; // [rsp+68h] [rbp-100h]
  char v22; // [rsp+78h] [rbp-F0h]
  _BYTE v23[7]; // [rsp+79h] [rbp-EFh]
  __int128 v24; // [rsp+80h] [rbp-E8h]
  __int128 v25; // [rsp+90h] [rbp-D8h]
  __int128 v26; // [rsp+A0h] [rbp-C8h]
  __int128 v27; // [rsp+B0h] [rbp-B8h]
  _OWORD v28[4]; // [rsp+C0h] [rbp-A8h] BYREF
  char v29; // [rsp+100h] [rbp-68h]
  _DWORD v30[3]; // [rsp+101h] [rbp-67h]
  __int128 v31; // [rsp+110h] [rbp-58h]
  __int128 v32; // [rsp+120h] [rbp-48h]
  __int128 v33; // [rsp+130h] [rbp-38h]
  __int128 v34; // [rsp+140h] [rbp-28h]

  v13 = a3;
  just::parser::Parser::advance((__int64)&v16, a2);
  result = BYTE8(v20);
  v24 = v16;
  v25 = v17;
  v26 = v18;
  v27 = v19;
  v5 = v20;
  v14[0] = *(_DWORD *)((char *)&v20 + 1);
  *(_DWORD *)((char *)v14 + 3) = DWORD1(v20);
  if ( BYTE8(v20) == 37 )
  {
    v31 = v24;
    v32 = v25;
    v33 = v26;
    v34 = v27;
    v15[0] = v14[0];
    *(_DWORD *)((char *)v15 + 3) = *(_DWORD *)((char *)v14 + 3);
    v28[0] = v24;
    v28[1] = v25;
    v28[2] = v26;
    v28[3] = v27;
    v29 = v20;
    v30[0] = v14[0];
    *(_DWORD *)((char *)v30 + 3) = *(_DWORD *)((char *)v14 + 3);
    if ( (_BYTE)v20 == 24
      && (*(_QWORD *)&v6 = just::token::Token::lexeme(v28),
          v16 = v6,
          result = <just::keyword::Keyword as core::cmp::PartialEq<&str>>::eq(&v13, &v16),
          (_BYTE)result) )
    {
      *(_BYTE *)(a1 + 72) = 37;
    }
    else
    {
      v12 = (_BYTE *)alloc::alloc::Global::alloc_impl(1LL, 1LL);
      if ( !v12 )
        alloc::alloc::handle_alloc_error(1LL, 1LL);
      *v12 = a3;
      *((_QWORD *)&v16 + 1) = 1LL;
      *(_QWORD *)&v17 = v12;
      *((_QWORD *)&v17 + 1) = 1LL;
      v18 = v31;
      v19 = v32;
      v20 = v33;
      v21 = v34;
      v22 = v5;
      *(_DWORD *)v23 = v15[0];
      *(_DWORD *)&v23[3] = *(_DWORD *)((char *)v15 + 3);
      *(_QWORD *)&v16 = 0x8000000000000021LL;
      return just::token::Token::error(a1, v28, &v16);
    }
  }
  else
  {
    v7 = *(_DWORD *)((char *)&v20 + 9);
    *(_DWORD *)(a1 + 76) = HIDWORD(v20);
    *(_DWORD *)(a1 + 73) = v7;
    v8 = v24;
    v9 = v25;
    v10 = v26;
    *(_OWORD *)(a1 + 48) = v27;
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
    v11 = v14[0];
    *(_DWORD *)(a1 + 68) = *(_DWORD *)((char *)v14 + 3);
    *(_DWORD *)(a1 + 65) = v11;
    *(_BYTE *)(a1 + 64) = v5;
    *(_BYTE *)(a1 + 72) = result;
  }
  return result;
}