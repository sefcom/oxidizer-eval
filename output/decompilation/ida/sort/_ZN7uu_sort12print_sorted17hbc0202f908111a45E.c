__int64 __fastcall uu_sort::print_sorted(__int128 *a1, __int64 a2, __int128 *a3)
{
  __int128 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _OWORD v18[7]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+70h] [rbp-58h]
  _BYTE v20[72]; // [rsp+80h] [rbp-48h] BYREF

  v4 = a3;
  uu_sort::Output::into_write((__int64)v20, a3);
  v19 = *((_QWORD *)a1 + 14);
  v18[6] = a1[6];
  v18[5] = a1[5];
  v18[4] = a1[4];
  v9 = *a1;
  v10 = a1[1];
  v11 = a1[2];
  v18[3] = a1[3];
  v18[2] = v11;
  v18[1] = v10;
  v18[0] = v9;
  while ( 1 )
  {
    v12 = (__int64 *)((__int64 (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next)(
                       v18,
                       v4,
                       v5,
                       v6,
                       v7,
                       v8);
    if ( !v12 )
      break;
    v4 = (__int128 *)v20;
    uu_sort::Line::print(v12, (__int64)v20, a2);
  }
  return core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(
           v20,
           v4,
           v13,
           v14,
           v15,
           v16);
}
