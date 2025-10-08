char __fastcall just::parser::Parser::accepted_keyword(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  char v5; // cl
  char result; // al
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // edx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int64 v18; // rdx
  char v19; // si
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  int v22; // edi
  _BYTE v23[7]; // [rsp+8h] [rbp-110h]
  _BYTE v24[64]; // [rsp+10h] [rbp-108h] BYREF
  char v25; // [rsp+50h] [rbp-C8h]
  _BYTE v26[7]; // [rsp+51h] [rbp-C7h]
  char v27; // [rsp+58h] [rbp-C0h]
  _BYTE v28[7]; // [rsp+59h] [rbp-BFh]
  __int128 v29; // [rsp+60h] [rbp-B8h]
  __int128 v30; // [rsp+70h] [rbp-A8h]
  __int128 v31; // [rsp+80h] [rbp-98h]
  __int128 v32; // [rsp+90h] [rbp-88h]
  _OWORD v33[4]; // [rsp+A0h] [rbp-78h] BYREF
  char v34; // [rsp+E0h] [rbp-38h]
  _DWORD v35[13]; // [rsp+E1h] [rbp-37h]

  just::parser::Parser::next((__int64)v24, a2);
  v5 = v27;
  v29 = *(_OWORD *)v24;
  v30 = *(_OWORD *)&v24[16];
  v31 = *(_OWORD *)&v24[32];
  v32 = *(_OWORD *)&v24[48];
  result = v25;
  *(_DWORD *)v23 = *(_DWORD *)v26;
  *(_DWORD *)&v23[3] = *(_DWORD *)&v26[3];
  if ( v27 != 37 )
  {
    v12 = *(_DWORD *)v28;
    *(_DWORD *)(a1 + 76) = *(_DWORD *)&v28[3];
    *(_DWORD *)(a1 + 73) = v12;
    v13 = v29;
    v14 = v30;
    v15 = v31;
    *(_OWORD *)(a1 + 48) = v32;
    *(_OWORD *)(a1 + 32) = v15;
    *(_OWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v13;
    *(_DWORD *)(a1 + 68) = *(_DWORD *)&v23[3];
    *(_DWORD *)(a1 + 65) = *(_DWORD *)v23;
    *(_BYTE *)(a1 + 64) = result;
    *(_BYTE *)(a1 + 72) = v5;
    return result;
  }
  v33[0] = v29;
  v33[1] = v30;
  v33[2] = v31;
  v33[3] = v32;
  v35[0] = *(_DWORD *)v23;
  *(_DWORD *)((char *)v35 + 3) = *(_DWORD *)&v26[3];
  v34 = v25;
  if ( v25 != 24
    || (v7 = just::token::Token::lexeme(v33),
        v9 = v8,
        v10 = just::keyword::Keyword::lexeme(a3),
        !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v9, v10, v11)) )
  {
    result = 0;
    goto LABEL_8;
  }
  just::parser::Parser::advance((__int64)v24, a2);
  result = v27;
  if ( v27 == 37 )
  {
    result = 1;
LABEL_8:
    *(_BYTE *)a1 = result;
    *(_BYTE *)(a1 + 72) = 37;
    return result;
  }
  v16 = *(_QWORD *)v24;
  v17 = *(_OWORD *)&v24[8];
  v18 = *(_QWORD *)&v24[56];
  v19 = v25;
  LODWORD(v29) = *(_DWORD *)v26;
  *(_DWORD *)((char *)&v29 + 3) = *(_DWORD *)&v26[3];
  *(_DWORD *)(a1 + 76) = *(_DWORD *)&v28[3];
  *(_DWORD *)(a1 + 73) = *(_DWORD *)v28;
  v20 = *(_OWORD *)&v24[24];
  v21 = *(_OWORD *)&v24[40];
  v22 = v29;
  *(_DWORD *)(a1 + 68) = *(_DWORD *)((char *)&v29 + 3);
  *(_DWORD *)(a1 + 65) = v22;
  *(_QWORD *)a1 = v16;
  *(_OWORD *)(a1 + 8) = v17;
  *(_OWORD *)(a1 + 24) = v20;
  *(_OWORD *)(a1 + 40) = v21;
  *(_QWORD *)(a1 + 56) = v18;
  *(_BYTE *)(a1 + 64) = v19;
  *(_BYTE *)(a1 + 72) = result;
  return result;
}