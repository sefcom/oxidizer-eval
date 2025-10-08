void __fastcall ruff_python_formatter::comments::placement::handle_lambda_comment(
        __int64 a1,
        __int128 *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // r15
  unsigned int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int8 v14; // al
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  char v18; // al
  int v19; // ecx
  _BYTE v21[96]; // [rsp+8h] [rbp-60h] BYREF

  v8 = a3[2];
  v9 = *((_DWORD *)a2 + 16);
  if ( v8 )
  {
    if ( v9 < *(_DWORD *)(v8 + 72) )
      goto LABEL_12;
    if ( *(_DWORD *)(v8 + 76) >= v9
      || v9 >= (unsigned int)<ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*a3) )
    {
      goto LABEL_11;
    }
    v10 = *(unsigned int *)(v8 + 76);
    if ( (unsigned int)v10 > v9 )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D360);
    v11 = a4;
    v12 = a5;
  }
  else
  {
    if ( v9 >= (unsigned int)<ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*a3) )
    {
LABEL_11:
      *(_OWORD *)(a1 + 64) = a2[4];
      v15 = *a2;
      v16 = a2[1];
      v17 = a2[2];
      *(_OWORD *)(a1 + 48) = a2[3];
      *(_OWORD *)(a1 + 32) = v17;
      *(_OWORD *)(a1 + 16) = v16;
      *(_OWORD *)a1 = v15;
      return;
    }
    v10 = *((unsigned int *)a3 + 2);
    if ( (unsigned int)v10 > v9 )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D378);
    v11 = a4;
    v12 = a5;
  }
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v21, v11, v12, v10, v9);
  v14 = core::iter::traits::iterator::Iterator::try_fold(v21);
  if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v14, 1LL) )
    goto LABEL_11;
LABEL_12:
  v18 = *((_BYTE *)a2 + 72);
  v19 = *((_DWORD *)a2 + 17);
  *(_OWORD *)(a1 + 8) = *a2;
  *(_DWORD *)(a1 + 24) = v9;
  *(_DWORD *)(a1 + 28) = v19;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 33) = v18;
  *(_QWORD *)a1 = 96LL;
}