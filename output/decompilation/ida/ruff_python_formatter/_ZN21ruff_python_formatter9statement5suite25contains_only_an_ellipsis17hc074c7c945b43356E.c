char __fastcall ruff_python_formatter::statement::suite::contains_only_an_ellipsis(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r15
  __int64 v5; // rdx

  if ( a2 != 1 || *(_QWORD *)a1 != 0x8000000000000013LL )
    return 0;
  if ( **(_DWORD **)(a1 + 8) == 24 )
  {
    v4 = (_QWORD *)(a3 + 16);
    <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(a1);
    ruff_python_formatter::comments::map::MultiMap<K,V>::leading(v4);
    if ( !v5 )
      return ruff_python_formatter::comments::Comments::has_trailing_own_line(a3, a1) ^ 1;
  }
  return 0;
}