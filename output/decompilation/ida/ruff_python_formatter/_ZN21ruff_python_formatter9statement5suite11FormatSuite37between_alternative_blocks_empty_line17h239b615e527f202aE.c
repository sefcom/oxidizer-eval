void __fastcall ruff_python_formatter::statement::suite::FormatSuite::between_alternative_blocks_empty_line(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // ebp
  unsigned int v21; // edx
  __int64 (__fastcall *v22)(__int64, __int64 *); // r15
  _QWORD *v23; // rax
  __int64 v24; // [rsp+0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+8h] [rbp-48h]
  _QWORD v26[7]; // [rsp+18h] [rbp-38h] BYREF

  if ( a2 > 1u || (a2 & 1) != 0 )
  {
    *a1 = 4;
  }
  else
  {
    v9 = a3 + (a4 << 7) - 128;
    if ( !a4 )
      v9 = 0LL;
    v11 = ruff_python_formatter::statement::suite::trailing_function_or_class_def(v9, a5);
    if ( v11 != 94 )
    {
      v26[0] = v11;
      v26[1] = v12;
      if ( v9 )
        v13 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(v9);
      else
        v13 = 94LL;
      v24 = v13;
      v25 = v12;
      v14 = a5;
      v15 = core::iter::traits::iterator::Iterator::try_fold(&v24, a5);
      if ( v15 == 94
        || (v17 = (_QWORD *)(*a5 + 16),
            v24 = v15,
            v25 = v16,
            v14 = &v24,
            v18 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing(v17),
            !v19) )
      {
        <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v26);
        v20 = v21;
      }
      else
      {
        v20 = *(_DWORD *)(v18 + 12 * v19 - 8);
        <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v26);
      }
      v22 = *(__int64 (__fastcall **)(__int64, __int64 *))(a7 + 48);
      v23 = (_QWORD *)v22(a6, v14);
      if ( (unsigned int)ruff_python_trivia::tokenizer::lines_after_ignoring_end_of_line_trivia(v20, *v23, v23[1]) < 2
        && (*(_BYTE *)(((__int64 (__fastcall *)(__int64))v22)(a6) + 58) == 1
         || LODWORD(v26[0]) == 3 && *(_BYTE *)(ruff_formatter::formatter::Formatter<Context>::options(a6, a7) + 7) == 1) )
      {
        LOWORD(v24) = 769;
        (*(void (__fastcall **)(__int64, __int64 *))(a7 + 24))(a6, &v24);
      }
    }
    *a1 = 4;
  }
}