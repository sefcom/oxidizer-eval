__int64 __fastcall just::lexer::Lexer::lex_digraph(__int64 a1, _QWORD *a2, __int64 a3, int a4, char a5)
{
  __int64 result; // rax
  char v8; // cl
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  int v12; // esi
  int *v13; // rax
  unsigned __int64 v14; // rax
  int *v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  _BYTE v19[80]; // [rsp+0h] [rbp-88h] BYREF

  result = just::lexer::Lexer::presume((__int64)v19, (__int64)a2, a3);
  if ( v19[72] == 37 )
  {
    just::lexer::Lexer::accepted((__int64)v19, (__int64)a2, a4);
    result = v19[0];
    v8 = v19[72];
    if ( v19[72] != 37 )
    {
      *(_QWORD *)(a1 + 64) = *(_QWORD *)&v19[64];
      v9 = *(_OWORD *)&v19[1];
      v10 = *(_OWORD *)&v19[17];
      v11 = *(_OWORD *)&v19[33];
      *(_OWORD *)(a1 + 49) = *(_OWORD *)&v19[49];
      *(_OWORD *)(a1 + 33) = v11;
      *(_OWORD *)(a1 + 17) = v10;
      *(_OWORD *)(a1 + 1) = v9;
      v12 = *(_DWORD *)&v19[76];
      *(_DWORD *)(a1 + 73) = *(_DWORD *)&v19[73];
      *(_DWORD *)(a1 + 76) = v12;
      *(_BYTE *)a1 = result;
      *(_BYTE *)(a1 + 72) = v8;
      return result;
    }
    if ( (v19[0] & 1) != 0 )
    {
      result = just::lexer::Lexer::token((__int64)a2, a5);
      *(_BYTE *)(a1 + 72) = 37;
      return result;
    }
    just::lexer::Lexer::token((__int64)a2, 35);
    if ( just::lexer::Lexer::at_eof(a2) )
    {
      v13 = (int *)alloc::alloc::Global::alloc_impl(4LL, 4LL);
      if ( v13 )
      {
        *v13 = a4;
        *(_QWORD *)&v19[8] = 1LL;
        *(_QWORD *)&v19[16] = v13;
        *(_QWORD *)&v19[24] = 1LL;
        v14 = 0x8000000000000037LL;
LABEL_12:
        *(_QWORD *)v19 = v14;
        return just::lexer::Lexer::error(a1, (__int64)a2, v19);
      }
      goto LABEL_14;
    }
    result = just::lexer::Lexer::advance((__int64)v19, (__int64)a2);
    if ( v19[72] == 37 )
    {
      v15 = (int *)alloc::alloc::Global::alloc_impl(4LL, 4LL);
      if ( v15 )
      {
        *v15 = a4;
        *(_QWORD *)&v19[8] = 1LL;
        *(_QWORD *)&v19[16] = v15;
        *(_QWORD *)&v19[24] = 1LL;
        v14 = 0x8000000000000035LL;
        goto LABEL_12;
      }
LABEL_14:
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    }
  }
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v19[64];
  v16 = *(_OWORD *)v19;
  v17 = *(_OWORD *)&v19[16];
  v18 = *(_OWORD *)&v19[32];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v19[48];
  *(_OWORD *)(a1 + 32) = v18;
  *(_OWORD *)(a1 + 16) = v17;
  *(_OWORD *)a1 = v16;
  return result;
}