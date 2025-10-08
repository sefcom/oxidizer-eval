char __fastcall ruff_python_formatter::statement::suite::should_insert_blank_line_after_class_in_stub_file(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  char result; // al
  _QWORD *v6; // r8
  __int64 v9; // rbx
  __int64 v10; // r14
  char v11; // cl
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  unsigned __int8 v15; // al
  __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  _QWORD *v17; // [rsp+10h] [rbp-48h]
  _QWORD v18[3]; // [rsp+18h] [rbp-40h] BYREF
  char v19; // [rsp+30h] [rbp-28h]

  v16 = a1;
  v17 = a2;
  result = 0;
  if ( a3 != 94 && *(_BYTE *)(a5 + 51) == 1 )
  {
    v6 = (_QWORD *)(a5 + 16);
    if ( a1 != 3 )
    {
      v13 = v6;
      v18[0] = ruff_python_ast::node::<impl ruff_python_ast::generated::AnyNodeRef>::last_child_in_body(&v16);
      v18[1] = v14;
      v19 = 0;
      v18[2] = v13;
      v15 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(v18);
      return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v15, 1LL);
    }
    v9 = *v6;
    if ( !(unsigned __int8)ruff_python_formatter::statement::suite::contains_only_an_ellipsis(v17[4], v17[5], *v6) )
      return ruff_python_formatter::comments::Comments::has_trailing_own_line(v9, 3LL, a2) ^ 1;
    v10 = v17[2];
    if ( a3 != 3 )
    {
      v12 = a3;
      result = 1;
      if ( v10 )
        return result;
      return v12 == 2;
    }
    v11 = ruff_python_formatter::statement::suite::contains_only_an_ellipsis(a4[4], a4[5], v9);
    result = 1;
    if ( v11 )
    {
      v12 = 3LL;
      if ( !(a4[2] | v10) )
        return v12 == 2;
    }
  }
  return result;
}