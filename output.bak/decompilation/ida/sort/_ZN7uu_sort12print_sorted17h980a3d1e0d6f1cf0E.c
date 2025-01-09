__int64 __fastcall uu_sort::print_sorted(__int128 *a1, __int64 a2, __int128 *a3)
{
  __int128 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _OWORD v17[3]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v18[72]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a3;
  uu_sort::Output::into_write((__int64)v18, a3);
  v9 = *a1;
  v10 = a1[1];
  v17[2] = a1[2];
  v17[1] = v10;
  v17[0] = v9;
  while ( 1 )
  {
    v11 = (__int64 *)((__int64 (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<itertools::adaptors::coalesce::CoalesceBy<I,F,C> as core::iter::traits::iterator::Iterator>::next)(
                       v17,
                       v4,
                       v5,
                       v6,
                       v7,
                       v8);
    if ( !v11 )
      break;
    v4 = (__int128 *)v18;
    uu_sort::Line::print(v11, (__int64)v18, a2);
  }
  return core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(
           v18,
           v4,
           v12,
           v13,
           v14,
           v15);
}
