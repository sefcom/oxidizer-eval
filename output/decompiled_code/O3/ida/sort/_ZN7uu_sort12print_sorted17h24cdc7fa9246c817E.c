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
  __int128 v14; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v15; // [rsp+10h] [rbp-B8h]
  __int128 v16; // [rsp+20h] [rbp-A8h]
  __int128 v17; // [rsp+30h] [rbp-98h]
  __int128 v18; // [rsp+40h] [rbp-88h]
  __int128 v19; // [rsp+50h] [rbp-78h]
  __int128 v20; // [rsp+60h] [rbp-68h]
  __int64 v21; // [rsp+70h] [rbp-58h]
  _BYTE v22[72]; // [rsp+80h] [rbp-48h] BYREF

  v4 = a3;
  uu_sort::Output::into_write((__int64)v22, a3);
  v21 = *((_QWORD *)a1 + 14);
  v20 = a1[6];
  v19 = a1[5];
  v18 = a1[4];
  v5 = *a1;
  v6 = a1[1];
  v7 = a1[2];
  v17 = a1[3];
  v16 = v7;
  v15 = v6;
  v14 = v5;
  while ( 1 )
  {
    v8 = (_QWORD *)((__int64 (__fastcall *)(__int128 *))<core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next)(&v14);
    if ( !v8 )
      break;
    v4 = (__int128 *)v22;
    uu_sort::Line::print(v8, (__int64)v22, a2);
  }
  return core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(
           v22,
           v4,
           v9,
           v10,
           v11,
           v12,
           v14,
           *((_QWORD *)&v14 + 1),
           v15,
           *((_QWORD *)&v15 + 1),
           v16,
           *((_QWORD *)&v16 + 1),
           v17,
           *((_QWORD *)&v17 + 1),
           v18,
           *((_QWORD *)&v18 + 1),
           v19,
           *((_QWORD *)&v19 + 1),
           v20,
           *((_QWORD *)&v20 + 1),
           v21);
}
