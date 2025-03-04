__int64 __fastcall uu_wc::compute_number_width(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  int v13; // eax
  _QWORD v14[2]; // [rsp+8h] [rbp-F0h] BYREF
  _QWORD v15[7]; // [rsp+18h] [rbp-E0h] BYREF
  int v16; // [rsp+50h] [rbp-A8h]
  __int64 v17; // [rsp+68h] [rbp-90h]

  if ( !*a1 )
  {
    v6 = 7LL;
    if ( (unsigned int)uu_wc::Settings::number_enabled(a2, a2, a3, a4, a5, a6) == 1 )
      return 1LL;
    return v6;
  }
  v6 = 1LL;
  if ( (unsigned int)*a1 != 1 )
    return v6;
  v7 = uu_wc::Settings::number_enabled(a2, a2, a3, a4, a5, a6);
  v8 = a1[3];
  if ( v7 == 1 && v8 == 1 )
    return v6;
  v14[0] = a1[2];
  v14[1] = v14[0] + 24 * v8;
  v9 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v14);
  if ( !v9 )
    return v6;
  v6 = 1LL;
  v10 = 0LL;
  do
  {
    if ( *v9 == 0x8000000000000001LL )
    {
      v6 = 7LL;
    }
    else
    {
      std::fs::metadata(v15);
      if ( v15[0] != 2LL )
      {
        if ( (v16 & 0xF000) != 0x8000 )
          v6 = 7LL;
        v11 = v17;
        if ( (v16 & 0xF000) != 0x8000 )
          v11 = 0LL;
        v10 += v11;
      }
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v15[0], v15[1]);
    }
    v9 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v14);
  }
  while ( v9 );
  if ( !v10 )
    return v6;
  v13 = core::num::int_log10::u64(v10);
  return core::cmp::max_by((unsigned int)(v13 + 1), v6);
}
