_QWORD *__fastcall uu_head::parse::parse_obsolete(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned int v17; // r13d
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD v22[9]; // [rsp+0h] [rbp-48h] BYREF

  v22[2] = 0LL;
  v22[0] = a2;
  v22[1] = a2 + a3;
  v4 = ((__int64 (__fastcall *)(_QWORD *))<core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next)(v22);
  if ( (_DWORD)v5 == 45
    && (v9 = v4,
        ((void (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64, __int64))<core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next)(
          v22,
          a2,
          v5,
          v6,
          v7,
          v8),
        v14 = (unsigned int)(v13 - 48),
        (unsigned int)v14 <= 9) )
  {
    v15 = v9 + 1;
    while ( 1 )
    {
      v16 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64, __int64))<core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next)(
              v22,
              a2,
              v14,
              v10,
              v11,
              v12);
      if ( (_DWORD)v14 == 1114112 )
        break;
      v17 = v14;
      v10 = (unsigned int)(v14 - 48);
      if ( (unsigned int)v10 >= 0xA )
        goto LABEL_9;
    }
    v17 = 0;
    v16 = a3;
LABEL_9:
    v18 = v16;
    v19 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
            v15,
            v16,
            a2,
            a3);
    if ( !v19 )
      core::str::slice_error_fail(a2, a3, v15, v18, &off_F7A28);
    uu_head::parse::process_num_block(a1, v19, v20, v17, v22);
  }
  else
  {
    *a1 = 0x8000000000000001LL;
  }
  return a1;
}