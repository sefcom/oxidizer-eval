        __int64 a6)
{
  unsigned __int64 *result; // rax
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[0] = a4;
  v8[1] = a4 + 8 * a5;
  v8[2] = a2;
  v8[3] = a3;
  result = (unsigned __int64 *)((__int64 (__fastcall *)(_QWORD *, __int64, unsigned __int64, __int64, __int64, __int64))core::iter::traits::iterator::Iterator::reduce)(
                                 v8,
                                 a2,
                                 a3,
                                 a4,
                                 a5,
                                 a6);
  if ( result )
    return (unsigned __int64 *)uu_fmt::linebreak::build_best_path::{{closure}}((__int64)a1, a2, a3, *result);
  *a1 = 0LL;
  a1[1] = 8LL;
  a1[2] = 0LL;
  return result;
}
