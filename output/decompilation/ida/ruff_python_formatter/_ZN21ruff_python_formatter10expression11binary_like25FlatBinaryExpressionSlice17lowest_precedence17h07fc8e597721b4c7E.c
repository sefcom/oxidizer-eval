__int64 __fastcall ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::lowest_precedence(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a1 + 32 * a2;
  v3[2] = 0LL;
  result = (unsigned __int8)((__int64 (__fastcall *)(_QWORD *))core::iter::traits::iterator::Iterator::reduce)(v3);
  if ( (_BYTE)result == 13 )
    return 0LL;
  return result;
}