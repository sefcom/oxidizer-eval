__int64 __fastcall ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        void *a5)
{
  __int64 v6; // rbx
  _DWORD *v7; // r13
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rbp
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8

  v6 = *a1;
  v7 = (_DWORD *)a1[1];
  v8 = *v7;
  if ( !*v7 )
  {
    v25 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(a1[1]);
    v26 = *a2;
    if ( (unsigned __int8)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
                            v25,
                            v27,
                            *(_QWORD *)(*(_QWORD *)(*a2 + 96LL) + 8LL),
                            *(_QWORD *)(*(_QWORD *)(*a2 + 96LL) + 16LL),
                            a3,
                            a4) )
      return smallvec::SmallVec<A>::push(a5, a1);
    v29 = (__int64)(v7 + 2);
    if ( v6 )
    {
      v30 = ruff_python_formatter::comments::map::MultiMap<K,V>::leading((_QWORD *)(v26 + 16));
      if ( (_DWORD)v6 != 1 )
      {
        v37 = a1[2];
        v39 = a1[3];
        v32 = v30;
        v33 = v31;
        return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool(
                 v29,
                 v32,
                 v33,
                 v37,
                 v39,
                 (__int64)a2,
                 a3,
                 a4,
                 a5);
      }
      v32 = v30;
      v33 = v31;
    }
    else
    {
      v32 = a1[2];
      v33 = a1[3];
    }
    v37 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing((_QWORD *)(v26 + 16));
    v39 = v38;
    return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool(
             v29,
             v32,
             v33,
             v37,
             v39,
             (__int64)a2,
             a3,
             a4,
             a5);
  }
  if ( v8 == 2 )
  {
    v17 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(a1[1]);
    v18 = *a2;
    if ( !(unsigned __int8)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
                             v17,
                             v19,
                             *(_QWORD *)(*(_QWORD *)(*a2 + 96LL) + 8LL),
                             *(_QWORD *)(*(_QWORD *)(*a2 + 96LL) + 16LL),
                             a3,
                             a4) )
    {
      v20 = (__int64)(v7 + 2);
      if ( v6 )
      {
        v21 = ruff_python_formatter::comments::map::MultiMap<K,V>::leading((_QWORD *)(v18 + 16));
        if ( (_DWORD)v6 != 1 )
        {
          v34 = a1[2];
          v36 = a1[3];
          v23 = v21;
          v24 = v22;
          return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary(
                   v20,
                   v23,
                   v24,
                   v34,
                   v36,
                   a2,
                   a3,
                   a4,
                   (__int64)a5);
        }
        v23 = v21;
        v24 = v22;
      }
      else
      {
        v23 = a1[2];
        v24 = a1[3];
      }
      v34 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing((_QWORD *)(v18 + 16));
      v36 = v35;
      return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary(
               v20,
               v23,
               v24,
               v34,
               v36,
               a2,
               a3,
               a4,
               (__int64)a5);
    }
    return smallvec::SmallVec<A>::push(a5, a1);
  }
  if ( v8 != 15 )
    return smallvec::SmallVec<A>::push(a5, a1);
  v9 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(a1[1]);
  v10 = *a2;
  if ( (unsigned __int8)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
                          v9,
                          v11,
                          *(_QWORD *)(*(_QWORD *)(*a2 + 96LL) + 8LL),
                          *(_QWORD *)(*(_QWORD *)(*a2 + 96LL) + 16LL),
                          a3,
                          a4) )
    return smallvec::SmallVec<A>::push(a5, a1);
  v12 = (__int64 *)(v7 + 2);
  if ( v6 )
  {
    v13 = ruff_python_formatter::comments::map::MultiMap<K,V>::leading((_QWORD *)(v10 + 16));
    if ( (_DWORD)v6 != 1 )
    {
      v40 = a1[2];
      v42 = a1[3];
      v15 = v13;
      v16 = v14;
      return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare(
               v12,
               v15,
               v16,
               v40,
               v42,
               (__int64)a2,
               a3,
               a4,
               a5);
    }
    v15 = v13;
    v16 = v14;
  }
  else
  {
    v15 = a1[2];
    v16 = a1[3];
  }
  v40 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing((_QWORD *)(v10 + 16));
  v42 = v41;
  return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare(
           v12,
           v15,
           v16,
           v40,
           v42,
           (__int64)a2,
           a3,
           a4,
           a5);
}