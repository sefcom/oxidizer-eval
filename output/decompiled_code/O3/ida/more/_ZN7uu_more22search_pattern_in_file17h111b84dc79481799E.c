__int64 __fastcall uu_more::search_pattern_in_file(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r14
  __int64 v5; // rdx
  __int64 v6; // [rsp+8h] [rbp-50h] BYREF
  __int64 v7; // [rsp+10h] [rbp-48h]
  __int64 v8; // [rsp+18h] [rbp-40h]
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( *a3 == 0x8000000000000000LL )
  {
    v6 = 0LL;
    v7 = 1LL;
    v8 = 0LL;
    v3 = 0LL;
LABEL_3:
    core::ptr::drop_in_place<alloc::string::String>(&v6);
    return v3;
  }
  <alloc::string::String as core::clone::Clone>::clone(&v6, a3);
  v3 = 0LL;
  if ( !a2 || !v8 )
    goto LABEL_3;
  v9[0] = a1;
  v9[1] = a1 + 24 * a2;
  v9[2] = 0LL;
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v9);
    if ( !v5 )
      break;
    if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(
                            v7,
                            v8,
                            *(_QWORD *)(v5 + 8),
                            *(_QWORD *)(v5 + 16)) )
    {
      v3 = 1LL;
      goto LABEL_3;
    }
  }
  core::ptr::drop_in_place<alloc::string::String>(&v6);
  return 0LL;
}
