volatile signed __int64 *__fastcall just::analyzer::Analyzer::resolve_recipe(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  volatile signed __int64 **v15; // rax
  _QWORD v17[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+10h] [rbp-38h]

  just::namepath::Namepath::split_last(v17, a1, a2);
  v6 = v17[0];
  if ( v18 )
  {
    v7 = v17[1];
    v8 = 72 * v18;
    v9 = 0LL;
    while ( 1 )
    {
      v10 = just::token::Token::lexeme(v7);
      v12 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*a3, a3[1], v10, v11);
      if ( !v12 )
        break;
      v7 += 72LL;
      a3 = (_QWORD *)(v12 + 672);
      v8 -= 72LL;
      if ( !v8 )
      {
        a4 = (_QWORD *)(v12 + 696);
        goto LABEL_6;
      }
    }
  }
  else
  {
LABEL_6:
    v13 = just::token::Token::lexeme(v6);
    v15 = (volatile signed __int64 **)alloc::collections::btree::map::BTreeMap<K,V,A>::get(*a4, a4[1], v13, v14);
    if ( v15 )
    {
      if ( _InterlockedIncrement64(*v15) <= 0 )
        BUG();
      return *v15;
    }
    else
    {
      return 0LL;
    }
  }
  return (volatile signed __int64 *)v9;
}