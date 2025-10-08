__int64 __fastcall just::lexer::Lexer::lex_choices(__int64 a1, _QWORD *a2, __int64 a3, int *a4, char a5)
{
  __int64 result; // rax
  int v9; // esi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  char v13; // cl
  int v14; // esi
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+10h] [rbp-98h]
  _BYTE v23[80]; // [rsp+18h] [rbp-90h] BYREF

  result = just::lexer::Lexer::presume((__int64)v23, (__int64)a2, a3);
  if ( v23[72] != 37 )
  {
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v23[64];
    v10 = *(_OWORD *)v23;
    v11 = *(_OWORD *)&v23[16];
    v12 = *(_OWORD *)&v23[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v23[48];
    *(_OWORD *)(a1 + 32) = v12;
    *(_OWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v10;
    return result;
  }
  just::lexer::Lexer::accepted((__int64)v23, (__int64)a2, *a4);
  result = v23[72];
  if ( v23[72] != 37 )
    goto LABEL_10;
  if ( v23[0] )
  {
LABEL_4:
    v9 = a4[1];
LABEL_5:
    result = just::lexer::Lexer::token((__int64)a2, v9);
    *(_BYTE *)(a1 + 72) = 37;
    return result;
  }
  just::lexer::Lexer::accepted((__int64)v23, (__int64)a2, a4[2]);
  result = v23[72];
  if ( v23[72] != 37 )
  {
LABEL_10:
    v13 = v23[0];
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v23[64];
    *(_OWORD *)(a1 + 49) = *(_OWORD *)&v23[49];
    *(_OWORD *)(a1 + 33) = *(_OWORD *)&v23[33];
    *(_OWORD *)(a1 + 17) = *(_OWORD *)&v23[17];
    *(_OWORD *)(a1 + 1) = *(_OWORD *)&v23[1];
    v14 = *(_DWORD *)&v23[76];
    *(_DWORD *)(a1 + 73) = *(_DWORD *)&v23[73];
    *(_DWORD *)(a1 + 76) = v14;
    *(_BYTE *)a1 = v13;
    *(_BYTE *)(a1 + 72) = result;
    return result;
  }
  if ( v23[0] )
  {
    a4 += 2;
    goto LABEL_4;
  }
  if ( a5 != 37 )
  {
    LOBYTE(v9) = a5;
    goto LABEL_5;
  }
  just::lexer::Lexer::token((__int64)a2, 35);
  core::iter::traits::iterator::Iterator::collect(&v21, a4, a4 + 4);
  if ( just::lexer::Lexer::at_eof(a2) )
  {
    *(_QWORD *)&v23[24] = v22;
    *(_OWORD *)&v23[8] = v21;
    v15 = 0x8000000000000037LL;
LABEL_17:
    *(_QWORD *)v23 = v15;
    return just::lexer::Lexer::error(a1, (__int64)a2, v23);
  }
  just::lexer::Lexer::advance((__int64)v23, (__int64)a2);
  if ( v23[72] == 37 )
  {
    *(_QWORD *)&v23[24] = v22;
    *(_OWORD *)&v23[8] = v21;
    v15 = 0x8000000000000035LL;
    goto LABEL_17;
  }
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v23[64];
  v18 = *(_OWORD *)v23;
  v19 = *(_OWORD *)&v23[16];
  v20 = *(_OWORD *)&v23[32];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v23[48];
  *(_OWORD *)(a1 + 32) = v20;
  *(_OWORD *)(a1 + 16) = v19;
  *(_OWORD *)a1 = v18;
  return core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v21, *((_QWORD *)&v21 + 1), v16, v17);
}