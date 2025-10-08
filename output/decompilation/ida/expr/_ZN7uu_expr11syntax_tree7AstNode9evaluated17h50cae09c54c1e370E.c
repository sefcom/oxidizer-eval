__int64 __fastcall uu_expr::syntax_tree::AstNode::evaluated(__int64 a1, __int64 a2)
{
  int next_id; // ebp
  __int128 v4; // [rsp+0h] [rbp-68h]
  int v5; // [rsp+28h] [rbp-40h] BYREF
  __int128 v6; // [rsp+30h] [rbp-38h]
  __int128 v7; // [rsp+40h] [rbp-28h]

  next_id = uu_expr::syntax_tree::get_next_id();
  uu_expr::syntax_tree::AstNode::eval(&v5, a2);
  v4 = v6;
  if ( v5 == 1 )
  {
    *(_OWORD *)(a1 + 24) = v7;
    *(_OWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = 0x8000000000000005LL;
  }
  else
  {
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = v4;
    *(_DWORD *)(a1 + 32) = next_id;
  }
  core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(a2);
  return a1;
}