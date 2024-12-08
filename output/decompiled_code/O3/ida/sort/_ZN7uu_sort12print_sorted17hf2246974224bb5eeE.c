__int64 __fastcall uu_sort::print_sorted(__int128 *a1, __int64 a2, __int128 *a3)
{
  __int128 *v4; // rsi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _OWORD v14[7]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+70h] [rbp-58h]
  _BYTE v16[72]; // [rsp+80h] [rbp-48h] BYREF

  v4 = a3;
  uu_sort::Output::into_write((__int64)v16, a3);
  v15 = *((_QWORD *)a1 + 14);
  v14[6] = a1[6];
  v14[5] = a1[5];
  v14[4] = a1[4];
  v5 = *a1;
  v6 = a1[1];
  v7 = a1[2];
  v14[3] = a1[3];
  v14[2] = v7;
  v14[1] = v6;
  v14[0] = v5;
  while ( 1 )
  {
    v8 = (_QWORD *)((__int64 (__fastcall *)(_OWORD *))<core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next)(v14);
    if ( !v8 )
      break;
    v4 = (__int128 *)v16;
    uu_sort::Line::print(v8, (__int64)v16, a2);
  }
  return core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(
           v16,
           v4,
           v9,
           v10,
           v11,
           v12);
}
