char __fastcall ruff_python_formatter::expression::expr_bin_op::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprBinOp>::needs_parentheses(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char result; // al
  _DWORD *v5; // rdx
  __int64 v6; // r15
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r14
  _DWORD *v11; // rdx
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v13; // [rsp+8h] [rbp-30h]
  __int64 v14; // [rsp+10h] [rbp-28h]
  _DWORD *v15; // [rsp+18h] [rbp-20h]

  result = 1;
  if ( a2 != 39 )
  {
    v5 = (_DWORD *)*a1;
    switch ( *(_DWORD *)*a1 )
    {
      case 0x11:
        v12 = 2LL;
        v13 = v5 + 2;
        v6 = 2LL;
        if ( *((_QWORD *)v5 + 1) != 0x8000000000000001LL )
          goto LABEL_10;
        goto LABEL_14;
      case 0x12:
        v12 = 3LL;
        v13 = v5 + 2;
        v6 = 3LL;
        result = 0;
        if ( !__OFSUB__(0LL, *((_QWORD *)v5 + 1)) )
          goto LABEL_10;
        return result;
      case 0x13:
        v12 = 0LL;
        v13 = v5 + 2;
        result = 0;
        v6 = 0LL;
        if ( !__OFSUB__(0LL, *((_QWORD *)v5 + 1)) )
          return result;
        goto LABEL_10;
      case 0x14:
        v12 = 1LL;
        v13 = v5 + 2;
        v6 = 1LL;
        if ( !*((_QWORD *)v5 + 1) )
          goto LABEL_14;
LABEL_10:
        if ( !(unsigned __int8)<ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(
                                 &v12,
                                 a4) )
          goto LABEL_14;
        if ( (unsigned __int8)ruff_python_formatter::expression::has_parentheses(a1[1], a4) == 2 )
          goto LABEL_14;
        v8 = *(_QWORD *)(a4 + 16);
        ruff_python_formatter::comments::Comments::dangling(v8, a1);
        if ( v9 )
          goto LABEL_14;
        v14 = *(_QWORD *)&asc_89060[8 * v6];
        v15 = v13;
        v10 = v8 + 64;
        if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(v10) )
          goto LABEL_14;
        v14 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(a1[1]);
        v15 = v11;
        result = 3 * (hashbrown::map::HashMap<K,V,S,A>::get_inner(v10) == 0);
        break;
      default:
LABEL_14:
        result = 0;
        break;
    }
  }
  return result;
}