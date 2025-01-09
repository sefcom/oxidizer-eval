_QWORD *__fastcall uu_head::parse::parse_obsolete(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rbp
  __int64 v8; // rax
  int v9; // edx
  int v10; // r12d
  __int64 v11; // r13
  __int64 v12; // rax
  int v13; // edx
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD v18[3]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v19[2]; // [rsp+20h] [rbp-48h] BYREF
  char v20; // [rsp+30h] [rbp-38h]

  v18[2] = 0LL;
  v18[0] = a2;
  v18[1] = a2 + a3;
  <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v18);
  if ( v4 == 45
    && (v5 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v18),
        (unsigned int)(v6 - 48) <= 9) )
  {
    v7 = v5;
    v8 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v18);
    if ( v9 == (_DWORD)&loc_110000 )
    {
      v10 = 0;
    }
    else
    {
      v11 = v8;
      v10 = v9;
      if ( (unsigned int)(v9 - 48) <= 9 )
      {
        v12 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v18);
        if ( v13 == (_DWORD)&loc_110000 )
        {
LABEL_11:
          v10 = 0;
          v7 = v11;
        }
        else
        {
          v10 = v13;
          while ( 1 )
          {
            v7 = v11;
            v11 = v12;
            if ( (unsigned int)(v10 - 48) >= 0xA )
              break;
            v12 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v18);
            v10 = v14;
            if ( v14 == (_DWORD)&loc_110000 )
              goto LABEL_11;
          }
        }
      }
    }
    v19[0] = 1LL;
    v19[1] = v7;
    v20 = 0;
    v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeInclusive<usize>>::index(
            v19,
            a2,
            a3);
    uu_head::parse::process_num_block((__int64)a1, v15, v16, v10, (__int64)v18);
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
