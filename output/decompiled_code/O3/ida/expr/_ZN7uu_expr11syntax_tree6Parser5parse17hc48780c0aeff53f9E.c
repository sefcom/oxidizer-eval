__int64 __fastcall uu_expr::syntax_tree::Parser::parse(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // xmm0
  unsigned __int64 v5; // rsi
  __int128 v6; // xmm0
  __int128 v7; // [rsp+0h] [rbp-78h] BYREF
  __int128 v8; // [rsp+10h] [rbp-68h]
  __int128 v9; // [rsp+20h] [rbp-58h]
  __int128 v10; // [rsp+30h] [rbp-48h]
  _OWORD v11[3]; // [rsp+40h] [rbp-38h] BYREF

  if ( !a2[1] )
  {
    *(_QWORD *)(a1 + 8) = 3LL;
    goto LABEL_5;
  }
  result = uu_expr::syntax_tree::Parser::parse_expression(v11);
  v9 = *(_OWORD *)((char *)v11 + 8);
  v10 = *(_OWORD *)((char *)&v11[1] + 8);
  if ( *(_QWORD *)&v11[0] )
  {
    v4 = v9;
    *(_OWORD *)(a1 + 24) = v10;
    *(_OWORD *)(a1 + 8) = v4;
LABEL_5:
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  v8 = v10;
  v7 = v9;
  v5 = a2[2];
  if ( v5 >= a2[1] )
  {
    v6 = v7;
    *(_OWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    <T as alloc::string::ToString>::to_string(v11, *a2 + 16 * v5);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v11[1];
    *(_OWORD *)(a1 + 16) = v11[0];
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v7);
  }
  return result;
}
