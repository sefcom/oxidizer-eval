__int64 __fastcall uu_wc::compute_number_width(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  int v9; // eax
  _QWORD v10[2]; // [rsp+8h] [rbp-F0h] BYREF
  _QWORD v11[7]; // [rsp+18h] [rbp-E0h] BYREF
  int v12; // [rsp+50h] [rbp-A8h]
  __int64 v13; // [rsp+68h] [rbp-90h]

  if ( !*a1 )
  {
    v2 = 7LL;
    if ( (unsigned int)uu_wc::Settings::number_enabled(a2) == 1 )
      return 1LL;
    return v2;
  }
  v2 = 1LL;
  if ( (unsigned int)*a1 != 1 )
    return v2;
  v3 = uu_wc::Settings::number_enabled(a2);
  v4 = a1[3];
  if ( v3 == 1 && v4 == 1 )
    return v2;
  v10[0] = a1[2];
  v10[1] = v10[0] + 24 * v4;
  v5 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v10);
  if ( !v5 )
    return v2;
  v2 = 1LL;
  v6 = 0LL;
  do
  {
    if ( *v5 == 0x8000000000000001LL )
    {
      v2 = 7LL;
    }
    else
    {
      std::fs::metadata(v11);
      if ( v11[0] != 2LL )
      {
        v7 = v13;
        if ( (v12 & 0xF000) != 0x8000 )
        {
          v7 = 0LL;
          v2 = 7LL;
        }
        v6 += v7;
      }
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v11[0], v11[1]);
    }
    v5 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v10);
  }
  while ( v5 );
  if ( !v6 )
    return v2;
  v9 = core::num::int_log10::u64(v6);
  return core::cmp::max_by((unsigned int)(v9 + 1), v2);
}
