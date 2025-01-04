__int64 __fastcall uu_fmt::linebreak::break_lines(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r13
  const void *v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rax
  const void *v15; // rsi
  unsigned __int64 v16; // r13
  __int64 v17; // rbp
  const void *v18; // rsi
  size_t v19; // r12
  __int64 v20; // r13
  __int64 v21; // rbp
  __int128 v22; // xmm0
  char v23; // al
  __int128 v24; // xmm0
  __int64 v26; // [rsp+8h] [rbp-B0h]
  __int128 v27; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+20h] [rbp-98h]
  __int64 v29; // [rsp+28h] [rbp-90h] BYREF
  __int128 v30; // [rsp+30h] [rbp-88h]
  _QWORD *v31; // [rsp+40h] [rbp-78h]
  __int64 v32; // [rsp+48h] [rbp-70h]
  __int64 v33; // [rsp+50h] [rbp-68h]
  char v34; // [rsp+58h] [rbp-60h]
  _BYTE v35[8]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v36; // [rsp+68h] [rbp-50h]
  __int64 v37; // [rsp+70h] [rbp-48h]

  v5 = *(_QWORD *)(a1 + 88);
  uu_fmt::parasplit::ParaWords::new((__int64)v35, a2, a1);
  *(_QWORD *)&v27 = v36;
  *((_QWORD *)&v27 + 1) = v36 + (v37 << 6);
  v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v27);
  if ( v6 )
  {
    v7 = v6;
    v28 = *(_QWORD *)(v6 + 40);
    v26 = v5;
    if ( *(_WORD *)(a2 + 72) )
    {
      v11 = *(const void **)(a1 + 32);
      v12 = *(_QWORD *)(a1 + 40);
      v13 = a3[2];
      if ( v12 >= *a3 - v13 )
      {
        v10 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v11, *(_QWORD *)(a1 + 40));
        if ( v10 )
          goto LABEL_23;
      }
      else
      {
        memcpy((void *)(v13 + a3[1]), v11, *(_QWORD *)(a1 + 40));
        a3[2] = v12 + v13;
      }
      v8 = *(_QWORD *)(a1 + 72);
    }
    else if ( *(_BYTE *)(a1 + 104) )
    {
      v8 = 0LL;
    }
    else
    {
      v15 = *(const void **)(a1 + 56);
      v16 = *(_QWORD *)(a1 + 64);
      v17 = a3[2];
      if ( v16 >= *a3 - v17 )
      {
        v10 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v15, *(_QWORD *)(a1 + 64));
        v8 = v26;
        if ( v10 )
          goto LABEL_23;
      }
      else
      {
        memcpy((void *)(v17 + a3[1]), v15, *(_QWORD *)(a1 + 64));
        a3[2] = v16 + v17;
        v8 = v26;
      }
    }
    v18 = *(const void **)(v7 + 16);
    v19 = *(_QWORD *)(v7 + 24);
    v20 = a3[2];
    if ( v19 < *a3 - v20 )
    {
      memcpy((void *)(v20 + a3[1]), v18, v19);
      a3[2] = v19 + v20;
LABEL_18:
      v21 = v28 + v8;
      if ( *(_BYTE *)(a1 + 104) )
      {
        v22 = *(_OWORD *)(a1 + 56);
        v29 = a2;
        v32 = v21;
        v30 = v22;
        v33 = v26;
        v34 = 1;
        v31 = a3;
      }
      else
      {
        v23 = *(_BYTE *)(a2 + 78);
        v24 = *(_OWORD *)(a1 + 56);
        v29 = a2;
        v32 = v21;
        v30 = v24;
        v33 = v26;
        v34 = v23;
        v31 = a3;
        if ( !*(_BYTE *)(a2 + 79) )
        {
          v14 = uu_fmt::linebreak::break_knuth_plass(v27, (__int64)&v29);
          goto LABEL_22;
        }
      }
      v14 = uu_fmt::linebreak::break_simple(v27, *((__int64 *)&v27 + 1), (__int64)&v29);
LABEL_22:
      v10 = v14;
      goto LABEL_23;
    }
    v10 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v18, v19);
    if ( !v10 )
      goto LABEL_18;
  }
  else
  {
    v9 = a3[2];
    if ( (unsigned __int64)(*a3 - v9) <= 1 )
    {
      v14 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, asc_1E186, 1LL);
      goto LABEL_22;
    }
    *(_BYTE *)(a3[1] + v9) = 10;
    a3[2] = v9 + 1;
    v10 = 0LL;
  }
LABEL_23:
  core::ptr::drop_in_place<uu_fmt::parasplit::ParaWords>(v35);
  return v10;
}
