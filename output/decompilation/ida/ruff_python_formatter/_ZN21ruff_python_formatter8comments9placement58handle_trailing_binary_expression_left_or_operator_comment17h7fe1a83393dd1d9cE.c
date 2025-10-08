void __fastcall ruff_python_formatter::comments::placement::handle_trailing_binary_expression_left_or_operator_comment(
        __int64 a1,
        __int128 *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v7; // edx
  unsigned int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // ebp
  unsigned int v11; // r12d
  char v12; // bp
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // eax
  int v17; // eax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  unsigned int v22; // [rsp+10h] [rbp-78h] BYREF
  char v23; // [rsp+18h] [rbp-70h]
  _BYTE v24[48]; // [rsp+20h] [rbp-68h] BYREF
  char v25[56]; // [rsp+50h] [rbp-38h] BYREF

  if ( *((_DWORD *)a2 + 4) == 94 || *((_QWORD *)a2 + 4) == 94LL )
    goto LABEL_13;
  <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*a3);
  v8 = v7;
  v9 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(a3[1]);
  if ( v8 > v9 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D198);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v24, a4, a5, v8, v9);
  v25[0] = 0;
  core::iter::traits::iterator::Iterator::try_fold(&v22, v24, v25);
  if ( v23 == 90 )
    core::option::expect_failed(aExpectedAToken, 33LL, &off_57D1B0);
  v10 = v22;
  v11 = *((_DWORD *)a2 + 17);
  if ( v11 < v22 )
  {
    v12 = *((_BYTE *)a2 + 72);
    v13 = *((_DWORD *)a2 + 16);
    *(_QWORD *)(a1 + 8) = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*a3);
    *(_QWORD *)(a1 + 16) = v14;
    *(_DWORD *)(a1 + 24) = v13;
    *(_DWORD *)(a1 + 28) = v11;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = v12;
    *(_QWORD *)a1 = 95LL;
    return;
  }
  if ( *((_BYTE *)a2 + 72) )
    goto LABEL_13;
  <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*a3);
  if ( (unsigned int)v15 > v10 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D1C8);
  if ( !(unsigned __int8)<str as ruff_source_file::line_ranges::LineRanges>::contains_line_break(a4, a5, v15, v10) )
    goto LABEL_13;
  v16 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(a3[1]);
  if ( v16 < v10 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D1E0);
  if ( !(unsigned __int8)<str as ruff_source_file::line_ranges::LineRanges>::contains_line_break(a4, a5, v10, v16) )
  {
LABEL_13:
    *(_OWORD *)(a1 + 64) = a2[4];
    v18 = *a2;
    v19 = a2[1];
    v20 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v20;
    *(_OWORD *)(a1 + 16) = v19;
    *(_OWORD *)a1 = v18;
  }
  else
  {
    v17 = *((_DWORD *)a2 + 16);
    *(_QWORD *)(a1 + 8) = 29LL;
    *(_QWORD *)(a1 + 16) = a3;
    *(_DWORD *)(a1 + 24) = v17;
    *(_DWORD *)(a1 + 28) = v11;
    *(_WORD *)(a1 + 32) = 0;
    *(_QWORD *)a1 = 96LL;
  }
}