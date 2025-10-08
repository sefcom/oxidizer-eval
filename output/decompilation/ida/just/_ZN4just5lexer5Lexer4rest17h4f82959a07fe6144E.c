__int64 __fastcall just::lexer::Lexer::rest(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  __int64 v3; // r15
  __int64 result; // rax

  v1 = a1[16];
  v2 = a1[17];
  v3 = a1[20];
  result = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
             v3,
             v1,
             v2);
  if ( !result )
    core::str::slice_error_fail(v1, v2, v3, v2, &off_4303C8);
  return result;
}