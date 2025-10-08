__int64 __fastcall just::lexer::Lexer::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v7; // r12
  int v8; // edx
  int v9; // ebp
  _QWORD *v10; // rax
  void *v11; // rcx
  __int64 result; // rax
  __int128 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+10h] [rbp-38h]

  v14 = a3;
  *(_QWORD *)&v13 = a4;
  *((_QWORD *)&v13 + 1) = a4 + a5;
  v7 = core::str::validations::next_code_point(&v13);
  v9 = v8;
  v10 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 16LL);
  if ( !v10 )
    alloc::alloc::handle_alloc_error(8LL, 16LL);
  v11 = &unk_110000;
  if ( (v7 & 1) != 0 )
    LODWORD(v11) = v9;
  *v10 = 1LL;
  v10[1] = 0LL;
  *(_OWORD *)(a1 + 96) = v13;
  *(_QWORD *)a1 = 1LL;
  *(_QWORD *)(a1 + 8) = v10;
  *(_QWORD *)(a1 + 16) = 1LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 8LL;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 192) = (_DWORD)v11;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 112) = a2;
  result = v14;
  *(_QWORD *)(a1 + 120) = v14;
  *(_WORD *)(a1 + 196) = 0;
  *(_QWORD *)(a1 + 128) = a4;
  *(_QWORD *)(a1 + 136) = a5;
  *(_OWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 160) = 0LL;
  *(_OWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 80) = 8LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  return result;
}