char __fastcall uu_fmt::parasplit::ParagraphStream::is_mail_header(_QWORD *a1)
{
  char result; // al
  __int64 v2; // rbx
  __int64 v3; // r14
  char v4; // cl
  unsigned __int8 v5; // al
  __int64 v6; // rdx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( a1[3] )
    return 0;
  v2 = a1[1];
  v3 = a1[2];
  v4 = core::slice::<impl [T]>::starts_with(v2, v3, aFrom);
  result = 1;
  if ( !v4 )
  {
    v5 = core::str::<impl str>::find(v2, v3);
    if ( (v5 & (v6 != 0)) != 1 )
      return 0;
    v7 = v6;
    v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
           v6,
           v2,
           v3);
    if ( !v8 )
      core::str::slice_error_fail(v2, v3, 0LL, v7, &off_F04F0);
    v11[0] = v8;
    v11[1] = v8 + v9;
    v10 = core::iter::traits::iterator::Iterator::try_fold(v11);
    return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v10);
  }
  return result;
}