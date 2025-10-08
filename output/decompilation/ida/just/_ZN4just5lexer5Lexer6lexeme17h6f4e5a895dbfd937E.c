__int64 __fastcall just::lexer::Lexer::lexeme(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 result; // rax

  v1 = a1[16];
  v2 = a1[17];
  v3 = a1[23];
  v4 = a1[20];
  result = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
             v3,
             v4,
             v1,
             v2);
  if ( !result )
    core::str::slice_error_fail(v1, v2, v3, v4, &off_430390);
  return result;
}