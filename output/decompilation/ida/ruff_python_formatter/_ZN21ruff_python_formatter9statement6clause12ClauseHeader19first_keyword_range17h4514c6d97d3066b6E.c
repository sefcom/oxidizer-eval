__int64 __fastcall ruff_python_formatter::statement::clause::ClauseHeader::first_keyword_range(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rdi
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rbx
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // edx
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdi
  unsigned int v37; // eax
  __int64 v38; // r12
  unsigned int v39; // eax
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // edx
  __int64 v44; // [rsp+8h] [rbp-30h] BYREF
  __int64 v45; // [rsp+10h] [rbp-28h]

  v5 = 12LL;
  if ( (unsigned __int64)(a2 - 3) < 0xC )
    v5 = a2 - 3;
  switch ( v5 )
  {
    case 0LL:
      v6 = *(_QWORD *)(a3 + 16);
      v7 = a1;
      v8 = a4;
      v9 = a5;
      if ( v6 )
        v10 = *(_QWORD *)(a3 + 8) + 96 * v6 - 96;
      else
        v10 = 0LL;
      v37 = core::option::Option<T>::map_or_else(v10, a3);
      a1 = v7;
      v11 = v37;
      v13 = 58LL;
      goto LABEL_40;
    case 1LL:
      v18 = *(_QWORD *)(a3 + 16);
      v19 = a1;
      v8 = a4;
      v9 = a5;
      if ( v18 )
        v20 = *(_QWORD *)(a3 + 8) + 96 * v18 - 96;
      else
        v20 = 0LL;
      v38 = a3;
      v39 = core::option::Option<T>::map_or_else(v20, a3);
      a1 = v19;
      v11 = v39;
      if ( *(_BYTE *)(v38 + 124) )
        v13 = 55LL;
      else
        v13 = 60LL;
      goto LABEL_40;
    case 2LL:
      v11 = *(unsigned int *)(a3 + 56);
      v13 = 69LL;
      return ruff_python_formatter::statement::clause::find_keyword(a1, v11, v13, a4, a5);
    case 3LL:
      v11 = *(unsigned int *)(a3 + 104);
      if ( *(_DWORD *)(a3 + 24) == 33 )
        v13 = 63LL;
      else
        v13 = 62LL;
      return ruff_python_formatter::statement::clause::find_keyword(a1, v11, v13, a4, a5);
    case 4LL:
      v11 = *(unsigned int *)(a3 + 96);
      v13 = 80LL;
      return ruff_python_formatter::statement::clause::find_keyword(a1, v11, v13, a4, a5);
    case 5LL:
      v11 = *(unsigned int *)(a3 + 64);
      v13 = 64LL;
      return ruff_python_formatter::statement::clause::find_keyword(a1, v11, v13, a4, a5);
    case 6LL:
      v21 = *(_QWORD *)(a3 + 64);
      v22 = 94LL;
      v23 = a4;
      v24 = a5;
      if ( v21 )
      {
        v21 = *(_QWORD *)(a3 + 56) + (v21 << 7) - 128;
        if ( v21 )
        {
          v25 = a3;
          v22 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(v21);
          v21 = v26;
          a3 = v25;
        }
      }
      v27 = a3;
      v28 = core::option::Option<T>::or_else(v22, v21);
      v30 = core::option::Option<T>::or_else(v28, v29, v27);
      if ( v30 == 94 )
        core::option::unwrap_failed(&off_57E7C8);
      v44 = v30;
      v45 = v31;
      <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v44);
      v33 = v32;
      v34 = 65LL;
      return ruff_python_formatter::statement::clause::find_keyword(a1, v33, v34, v23, v24);
    case 7LL:
      v11 = *(unsigned int *)(a3 + 32);
      v13 = 82LL;
      return ruff_python_formatter::statement::clause::find_keyword(a1, v11, v13, a4, a5);
    case 8LL:
      v11 = *(unsigned int *)(a3 + 128);
      v13 = 84LL;
      return ruff_python_formatter::statement::clause::find_keyword(a1, v11, v13, a4, a5);
    case 9LL:
      v11 = *(unsigned int *)(a3 + 64);
      v12 = *(_BYTE *)(a3 + 76) == 0;
      v13 = 66LL;
      goto LABEL_13;
    case 10LL:
      v11 = *(unsigned int *)(a3 + 56);
      v13 = 81LL;
      return ruff_python_formatter::statement::clause::find_keyword(a1, v11, v13, a4, a5);
    case 11LL:
      v11 = *(unsigned int *)(a3 + 48);
      v12 = *(_BYTE *)(a3 + 60) == 0;
      v13 = 85LL;
LABEL_13:
      if ( !v12 )
        v13 = 55LL;
      return ruff_python_formatter::statement::clause::find_keyword(a1, v11, v13, a4, a5);
    case 12LL:
      v14 = a1;
      if ( a2 )
      {
        v15 = *(_QWORD *)(a3 + 16);
        if ( !v15 || (v16 = *(_QWORD *)(a3 + 8) + (v15 << 7) - 128) == 0 )
          core::option::unwrap_failed(&off_57E7F8);
        v8 = a4;
        v9 = a5;
        <ruff_python_ast::generated::Stmt as ruff_text_size::traits::Ranged>::range(v16);
        a1 = v14;
        v11 = v17;
        v13 = 63LL;
LABEL_40:
        a4 = v8;
        a5 = v9;
        return ruff_python_formatter::statement::clause::find_keyword(a1, v11, v13, a4, a5);
      }
      else
      {
        v23 = a4;
        v24 = a5;
        v35 = *(_QWORD *)(a3 + 40);
        if ( !v35 || (a2 = *(_QWORD *)(a3 + 32) + 88 * v35 - 88, *(_QWORD *)(a3 + 32) + 88 * v35 == 88) )
          v36 = 94LL;
        else
          v36 = 60LL;
        v41 = core::option::Option<T>::or_else(v36, a2);
        if ( v41 == 94 )
          core::option::unwrap_failed(&off_57E7E0);
        v44 = v41;
        v45 = v42;
        <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v44);
        a1 = v14;
        v33 = v43;
        v34 = 63LL;
        return ruff_python_formatter::statement::clause::find_keyword(a1, v33, v34, v23, v24);
      }
  }
}