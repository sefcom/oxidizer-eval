__int64 __fastcall uu_more::search_pattern_in_file(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  __int128 v8; // [rsp+10h] [rbp-38h]
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]

  if ( *a3 == 0x8000000000000000LL )
  {
    v8 = 1uLL;
    v3 = 0LL;
  }
  else
  {
    <alloc::string::String as core::clone::Clone>::clone(&v9, a3);
    v3 = v9;
    v8 = v10;
  }
  v7 = v3;
  if ( a2 && *((_QWORD *)&v8 + 1) )
  {
    v9 = a1;
    v10 = (unsigned __int64)(a1 + 24 * a2);
    while ( 1 )
    {
      <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v9);
      if ( !v4 )
        break;
      if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(
                              v8,
                              *((_QWORD *)&v8 + 1),
                              *(_QWORD *)(v4 + 8),
                              *(_QWORD *)(v4 + 16)) )
      {
        v5 = 1LL;
        goto LABEL_11;
      }
    }
    core::ptr::drop_in_place<alloc::string::String>(&v7);
    return 0LL;
  }
  else
  {
    v5 = 0LL;
LABEL_11:
    core::ptr::drop_in_place<alloc::string::String>(&v7);
  }
  return v5;
}
