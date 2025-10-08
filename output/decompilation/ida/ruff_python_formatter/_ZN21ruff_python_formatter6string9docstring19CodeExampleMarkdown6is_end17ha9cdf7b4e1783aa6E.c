__int64 __fastcall ruff_python_formatter::string::docstring::CodeExampleMarkdown::is_end(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+8h] [rbp-30h]
  __int64 v11; // [rsp+10h] [rbp-28h]
  __int64 v12; // [rsp+18h] [rbp-20h]

  ruff_python_formatter::string::docstring::indent_with_suffix(&v9);
  v1 = v11;
  v2 = v12;
  if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v11, v12, asc_8B761, 3LL)
    && !(unsigned __int8)core::slice::<impl [T]>::starts_with(v1, v2, asc_8B764, 3LL) )
  {
    return 0LL;
  }
  v9 = v1;
  v10 = v1 + v2;
  LOBYTE(v12) = 0;
  v11 = a1;
  v3 = ((__int64 (__fastcall *)(__int64 *))<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold)(&v9);
  if ( v3 < *(_QWORD *)(a1 + 48) )
    return 0LL;
  v5 = v3;
  v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
         v3,
         v1,
         v2);
  if ( !v6 )
    core::str::slice_error_fail(v1, v2, v5, v2, &off_57F4F8);
  v9 = v6;
  v10 = v6 + v7;
  v8 = core::iter::traits::iterator::Iterator::try_fold(&v9);
  return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v8, 0LL);
}