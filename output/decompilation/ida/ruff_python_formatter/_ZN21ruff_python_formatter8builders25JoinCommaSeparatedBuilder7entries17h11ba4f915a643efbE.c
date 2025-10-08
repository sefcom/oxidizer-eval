__int64 __fastcall ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entries(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  __int64 i; // rax
  __int64 v5; // rdx
  _QWORD v7[2]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v7[0] = <I as core::iter::traits::collect::IntoIterator>::into_iter(a2, a3);
  v7[1] = v3;
  for ( i = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(v7);
        i;
        i = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(v7) )
  {
    v8 = i;
    v9[0] = v5;
    ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator(a1, &v8, v9);
  }
  return a1;
}