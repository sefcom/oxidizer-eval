__int64 __fastcall alacritty_terminal::term::version_number(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 i; // rbx
  __int64 v10; // r13
  unsigned int v11; // ebp
  unsigned int v13; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+10h] [rbp-A8h]
  __int64 v15; // [rsp+18h] [rbp-A0h]
  char v16[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v17; // [rsp+28h] [rbp-90h]
  __int128 v18; // [rsp+30h] [rbp-88h] BYREF
  __int64 v19; // [rsp+40h] [rbp-78h]
  char v20[48]; // [rsp+48h] [rbp-70h] BYREF
  __int16 v21; // [rsp+78h] [rbp-40h]

  v2 = a2;
  v3 = a1;
  if ( (core::str::<impl str>::rfind() & 1) != 0 )
  {
    v5 = v4;
    v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
           v4,
           a1,
           a2);
    if ( !v6 )
      core::str::slice_error_fail(a1, a2, 0LL, v5, &off_897240);
    v2 = v7;
    v3 = v6;
  }
  <char as core::str::pattern::Pattern>::into_searcher(v20, 46LL, v3, v2);
  v18 = 0LL;
  v19 = v2;
  v21 = 1;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v13, &v18);
  v8 = v14;
  for ( i = 0LL; v14; v8 = v14 )
  {
    v11 = v13;
    core::num::<impl usize>::from_ascii_radix(v16, v8, v15);
    if ( v16[0] )
      v10 = 0LL;
    else
      v10 = v17;
    i += v10 * core::num::<impl usize>::pow(v11);
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v13, &v18);
  }
  return i;
}