char __fastcall ruff_python_formatter::expression::expr_compare::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprCompare>::needs_parentheses(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char result; // al
  _DWORD *v5; // rdx
  _QWORD *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-30h] BYREF
  _DWORD *v11; // [rsp+8h] [rbp-28h]
  __int64 v12; // [rsp+10h] [rbp-20h]
  _DWORD *v13; // [rsp+18h] [rbp-18h]

  result = 1;
  if ( a2 != 39 )
  {
    v5 = (_DWORD *)*a1;
    switch ( *(_DWORD *)*a1 )
    {
      case 0x11:
        v10 = 2LL;
        v11 = v5 + 2;
        if ( *((_QWORD *)v5 + 1) == 0x8000000000000001LL )
          return 0;
        v6 = a1;
        v7 = a4;
        if ( !(unsigned __int8)<ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(
                                 &v10,
                                 a4) )
          return 0;
        v8 = *(_QWORD *)(v7 + 16);
        v9 = 44LL;
        break;
      case 0x12:
        v10 = 3LL;
        v11 = v5 + 2;
        result = 0;
        if ( __OFSUB__(0LL, *((_QWORD *)v5 + 1)) )
          return result;
        v6 = a1;
        v7 = a4;
        if ( !(unsigned __int8)<ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(
                                 &v10,
                                 a4) )
          return 0;
        v8 = *(_QWORD *)(v7 + 16);
        v9 = 45LL;
        break;
      case 0x13:
        v10 = 0LL;
        v11 = v5 + 2;
        result = 0;
        if ( !__OFSUB__(0LL, *((_QWORD *)v5 + 1)) )
          return result;
        v6 = a1;
        v7 = a4;
        if ( !(unsigned __int8)<ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(
                                 &v10,
                                 a4) )
          return 0;
        v8 = *(_QWORD *)(v7 + 16);
        v9 = 46LL;
        break;
      case 0x14:
        v10 = 1LL;
        v11 = v5 + 2;
        if ( !*((_QWORD *)v5 + 1) )
          return 0;
        v6 = a1;
        v7 = a4;
        if ( !(unsigned __int8)<ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(
                                 &v10,
                                 a4) )
          return 0;
        v8 = *(_QWORD *)(v7 + 16);
        v9 = 47LL;
        break;
      default:
        return 0;
    }
    v12 = v9;
    v13 = v11;
    if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(v8 + 64) || !v6[4] )
      return 0;
    else
      return 3
           * ((unsigned __int8)ruff_python_formatter::expression::expr_compare::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprCompare>::needs_parentheses::{{closure}}(
                                 v7,
                                 v6[3]) != 0);
  }
  return result;
}