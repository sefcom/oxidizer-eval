__int64 __fastcall uu_expr::syntax_tree::AstNode::eval::{{closure}}(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax

  v1 = *(unsigned __int8 *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 24) )
    v1 = (_DWORD)v1 == 1 || (v2 = *(_QWORD *)(a1 + 16)) == 0 || v2 == 1;
  if ( *(_QWORD *)a1 )
    _rust_dealloc(*(_QWORD *)(a1 + 8), 8LL * *(_QWORD *)a1, 8LL);
  return v1;
}
