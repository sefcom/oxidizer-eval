__int64 __fastcall uu_numfmt::handle_args(__int128 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  _OWORD v13[5]; // [rsp+0h] [rbp-58h] BYREF

  v6 = a2;
  v7 = *a1;
  v8 = a1[1];
  v9 = a1[2];
  v13[3] = a1[3];
  v13[2] = v9;
  v13[1] = v8;
  v13[0] = v7;
  while ( 1 )
  {
    v10 = ((__int64 (__fastcall *)(_OWORD *, __int64, __int64, __int64, __int64, __int64))<core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next)(
            v13,
            a2,
            a3,
            a4,
            a5,
            a6);
    if ( !v10 )
      break;
    a2 = v11;
    result = uu_numfmt::format_and_handle_validation(v10, v11, v6);
    if ( result )
      return result;
  }
  return 0LL;
}
