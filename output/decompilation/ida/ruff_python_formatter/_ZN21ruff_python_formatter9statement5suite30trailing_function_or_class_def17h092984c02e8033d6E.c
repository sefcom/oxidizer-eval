__int64 __fastcall ruff_python_formatter::statement::suite::trailing_function_or_class_def(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-28h] BYREF
  char v6; // [rsp+18h] [rbp-10h]

  if ( a1 )
    v3 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(a1);
  else
    v3 = 94LL;
  v5[0] = v3;
  v5[1] = a3;
  v6 = 0;
  v5[2] = a2;
  return ((__int64 (__fastcall *)(_QWORD *))<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold)(v5);
}