__int64 __fastcall uu_numfmt::handle_args(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int128 v13; // [rsp+0h] [rbp-68h] BYREF
  __int128 v14; // [rsp+10h] [rbp-58h]
  __int128 v15; // [rsp+20h] [rbp-48h]
  __int128 v16; // [rsp+30h] [rbp-38h]

  v2 = *a1;
  v3 = a1[1];
  v4 = a1[2];
  v16 = a1[3];
  v15 = v4;
  v14 = v3;
  v13 = v2;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = ((__int64 (__fastcall *)(__int128 *))<core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next)(&v13);
    if ( !v6 )
      break;
    v11 = uu_numfmt::format_and_handle_validation(
            v6,
            v7,
            a2,
            v8,
            v9,
            v10,
            v13,
            *((_QWORD *)&v13 + 1),
            v14,
            *((_QWORD *)&v14 + 1),
            v15,
            *((_QWORD *)&v15 + 1),
            v16,
            *((_QWORD *)&v16 + 1));
    if ( v11 )
      return v11;
  }
  return v5;
}