__int64 __fastcall uu_numfmt::handle_args(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int128 v11; // [rsp+0h] [rbp-58h] BYREF
  __int128 v12; // [rsp+10h] [rbp-48h]
  __int128 v13; // [rsp+20h] [rbp-38h]
  __int128 v14; // [rsp+30h] [rbp-28h]

  v2 = *a1;
  v3 = a1[1];
  v4 = a1[2];
  v14 = a1[3];
  v13 = v4;
  v12 = v3;
  v11 = v2;
  while ( 1 )
  {
    v5 = ((__int64 (__fastcall *)(__int128 *))<core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next)(&v11);
    if ( !v5 )
      break;
    result = uu_numfmt::format_and_handle_validation(
               v5,
               v6,
               a2,
               v7,
               v8,
               v9,
               v11,
               *((_QWORD *)&v11 + 1),
               v12,
               *((_QWORD *)&v12 + 1),
               v13,
               *((_QWORD *)&v13 + 1),
               v14,
               *((_QWORD *)&v14 + 1));
    if ( result )
      return result;
  }
  return 0LL;
}
