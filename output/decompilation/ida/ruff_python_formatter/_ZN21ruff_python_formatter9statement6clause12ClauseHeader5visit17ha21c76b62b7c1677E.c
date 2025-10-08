__int64 __fastcall ruff_python_formatter::statement::clause::ClauseHeader::visit(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rsi

  v4 = a1 - 3;
  result = 12LL;
  if ( v4 < 0xC )
    result = v4;
  switch ( result )
  {
    case 0LL:
      v15 = *(_QWORD *)(a2 + 96);
      if ( v15 )
        result = ruff_python_formatter::statement::clause::ClauseHeader::range::{{closure}}(a3, 88LL, v15);
      v16 = *(_QWORD *)(a2 + 104);
      if ( v16 )
        return ruff_python_formatter::statement::clause::ClauseHeader::range::{{closure}}(a3, 78LL, v16);
      return result;
    case 1LL:
      v14 = *(_QWORD *)(a2 + 104);
      if ( v14 )
        ruff_python_formatter::statement::clause::ClauseHeader::range::{{closure}}(a3, 88LL, v14);
      result = ruff_python_formatter::statement::clause::ClauseHeader::range::{{closure}}(
                 a3,
                 79LL,
                 *(_QWORD *)(a2 + 88));
      v6 = *(_QWORD *)(a2 + 112);
      if ( v6 )
        goto LABEL_35;
      return result;
    case 2LL:
    case 10LL:
      v6 = *(_QWORD *)(a2 + 48);
      goto LABEL_35;
    case 3LL:
      if ( *(_DWORD *)(a2 + 24) == 33 )
        return result;
      v6 = a2 + 24;
LABEL_35:
      v9 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(v6);
      return ruff_python_formatter::statement::clause::ClauseHeader::range::{{closure}}(a3, v9, v10);
    case 4LL:
    case 6LL:
    case 12LL:
      return result;
    case 5LL:
      v6 = *(_QWORD *)(a2 + 72);
      if ( !v6 )
        return result;
      goto LABEL_35;
    case 7LL:
      v6 = *(_QWORD *)(a2 + 24);
      goto LABEL_35;
    case 8LL:
      v17 = 3LL;
      if ( (*(_QWORD *)(a2 + 24) ^ 0x8000000000000000LL) < 8 )
        v17 = *(_QWORD *)(a2 + 24) ^ 0x8000000000000000LL;
      switch ( v17 )
      {
        case 0uLL:
          JUMPOUT(0x3181E5LL);
        case 1uLL:
          v18 = a2;
          v19 = a2 + 32;
          v20 = 64LL;
          break;
        case 2uLL:
          v18 = a2;
          v19 = a2 + 32;
          v20 = 65LL;
          break;
        case 3uLL:
          v18 = a2;
          v19 = a2 + 24;
          v20 = 66LL;
          break;
        case 4uLL:
          JUMPOUT(0x318202LL);
        case 5uLL:
          v18 = a2;
          v19 = a2 + 32;
          v20 = 68LL;
          break;
        case 6uLL:
          v18 = a2;
          v19 = a2 + 32;
          v20 = 69LL;
          break;
        case 7uLL:
          v18 = a2;
          v19 = a2 + 32;
          v20 = 70LL;
          break;
      }
      result = ruff_python_formatter::statement::clause::ClauseHeader::range::{{closure}}(a3, v20, v19);
      v6 = *(_QWORD *)(v18 + 136);
      if ( v6 )
        goto LABEL_35;
      return result;
    case 9LL:
      v7 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*(_QWORD *)(a2 + 48));
      ruff_python_formatter::statement::clause::ClauseHeader::range::{{closure}}(a3, v7, v8);
      v9 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*(_QWORD *)(a2 + 56));
      return ruff_python_formatter::statement::clause::ClauseHeader::range::{{closure}}(a3, v9, v10);
    case 11LL:
      result = *(_QWORD *)(a2 + 16);
      if ( result )
      {
        v11 = *(_QWORD *)(a2 + 8);
        v12 = 104 * result;
        do
        {
          v13 = v11 + 104;
          result = ruff_python_formatter::statement::clause::ClauseHeader::range::{{closure}}(a3, 84LL, v11);
          v11 = v13;
          v12 -= 104LL;
        }
        while ( v12 );
      }
      return result;
  }
}