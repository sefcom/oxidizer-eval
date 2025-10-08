__int64 __fastcall ruff_python_formatter::builders::JoinCommaSeparatedBuilder::nodes(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r12
  _QWORD v7[2]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8; // [rsp+18h] [rbp-30h] BYREF
  char v9; // [rsp+20h] [rbp-28h]

  v7[0] = <I as core::iter::traits::collect::IntoIterator>::into_iter(a2, a3);
  v7[1] = v3;
  v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v7);
  if ( v4 )
  {
    v5 = v4;
    do
    {
      v8 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::nodes::Alias>>::from(v5);
      v9 = 0;
      ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator(a1, v5, &v8);
      v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v7);
    }
    while ( v5 );
  }
  return a1;
}