void __fastcall ruff_python_formatter::comments::placement::handle_expr_if_comment(
        __int64 a1,
        __int128 *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v8; // edx
  unsigned int v9; // ebp
  unsigned int v10; // eax
  unsigned int v11; // r12d
  __int64 v12; // rdi
  unsigned int v13; // edx
  unsigned int v14; // ebp
  unsigned int v15; // eax
  int v16; // ebp
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int64 v22; // [rsp+8h] [rbp-50h]
  unsigned int v23[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v24[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  if ( *((_BYTE *)a2 + 72) != 1 )
  {
    <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(a3[1]);
    v9 = v8;
    v10 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*a3);
    if ( v9 > v10 )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D2D0);
    v22 = a5;
    ruff_python_trivia::tokenizer::find_only_token_in_range(v23, v9, v10, 69LL, a4, a5);
    v11 = *((_DWORD *)a2 + 16);
    if ( v23[0] < v11
      && v11 < (unsigned int)<ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*a3) )
    {
      v12 = *a3;
LABEL_10:
      v16 = *((_DWORD *)a2 + 17);
      *(_QWORD *)(a1 + 8) = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(v12);
      *(_QWORD *)(a1 + 16) = v17;
      *(_DWORD *)(a1 + 24) = v11;
      *(_DWORD *)(a1 + 28) = v16;
      *(_WORD *)(a1 + 32) = 0;
      *(_QWORD *)a1 = 94LL;
      return;
    }
    <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*a3);
    v14 = v13;
    v15 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(a3[2]);
    if ( v14 > v15 )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D2E8);
    ruff_python_trivia::tokenizer::find_only_token_in_range(v24, v14, v15, 63LL, a4, v22);
    if ( v24[0] < v11
      && v11 < (unsigned int)<ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(a3[2]) )
    {
      v12 = a3[2];
      goto LABEL_10;
    }
  }
  *(_OWORD *)(a1 + 64) = a2[4];
  v18 = *a2;
  v19 = a2[1];
  v20 = a2[2];
  *(_OWORD *)(a1 + 48) = a2[3];
  *(_OWORD *)(a1 + 32) = v20;
  *(_OWORD *)(a1 + 16) = v19;
  *(_OWORD *)a1 = v18;
}