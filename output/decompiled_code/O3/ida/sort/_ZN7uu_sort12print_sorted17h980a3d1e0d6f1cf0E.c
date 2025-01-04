__int64 __fastcall uu_sort::print_sorted(__int128 *a1, __int64 a2, __int128 *a3)
{
  __int128 *v4; // rsi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _OWORD v13[3]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v14[72]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a3;
  uu_sort::Output::into_write((__int64)v14, a3);
  v5 = *a1;
  v6 = a1[1];
  v13[2] = a1[2];
  v13[1] = v6;
  v13[0] = v5;
  while ( 1 )
  {
    v7 = (_QWORD *)((__int64 (__fastcall *)(_OWORD *))<itertools::adaptors::coalesce::CoalesceBy<I,F,C> as core::iter::traits::iterator::Iterator>::next)(v13);
    if ( !v7 )
      break;
    v4 = (__int128 *)v14;
    uu_sort::Line::print(v7, (__int64)v14, a2);
  }
  return core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(
           v14,
           v4,
           v8,
           v9,
           v10,
           v11);
}
