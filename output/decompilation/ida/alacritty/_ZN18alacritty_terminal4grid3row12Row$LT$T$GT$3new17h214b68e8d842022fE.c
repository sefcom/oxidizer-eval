__int64 __fastcall alacritty_terminal::grid::row::Row<T>::new(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 v4; // rbp
  unsigned __int64 v5; // r15
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-50h]
  __int128 v8; // [rsp+10h] [rbp-48h] BYREF
  __int64 v9; // [rsp+20h] [rbp-38h]

  v7 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(a2, 8LL, 24LL, &off_8773E0);
  v3 = v2;
  v4 = v2;
  if ( a2 >= 2 )
  {
    v5 = a2 - 1;
    v4 = v2;
    do
    {
      <alacritty_terminal::term::cell::Cell as core::default::Default>::default(&v8);
      *(_QWORD *)(v4 + 16) = v9;
      *(_OWORD *)v4 = v8;
      v4 += 24LL;
      --v5;
    }
    while ( v5 );
  }
  <alacritty_terminal::term::cell::Cell as core::default::Default>::default(&v8);
  *(_QWORD *)(v4 + 16) = v9;
  *(_OWORD *)v4 = v8;
  result = v7;
  *a1 = v7;
  a1[1] = v3;
  a1[2] = a2;
  a1[3] = 0LL;
  return result;
}