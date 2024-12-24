        __m128 a7)
{
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r13
  const void *v15; // rsi
  unsigned __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // rax
  const void *v19; // rsi
  unsigned __int64 v20; // r13
  __int64 v21; // rbp
  const void *v22; // rsi
  size_t v23; // r12
  __int64 v24; // r13
  __int64 v25; // rbp
  __int128 v26; // xmm0
  char v27; // al
  __int128 v28; // xmm0
  __int64 v30; // [rsp+8h] [rbp-B0h]
  __int128 v31; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+20h] [rbp-98h]
  __int64 v33; // [rsp+28h] [rbp-90h] BYREF
  __int128 v34; // [rsp+30h] [rbp-88h]
  _QWORD *v35; // [rsp+40h] [rbp-78h]
  __int64 v36; // [rsp+48h] [rbp-70h]
  __int64 v37; // [rsp+50h] [rbp-68h]
  char v38; // [rsp+58h] [rbp-60h]
  _BYTE v39[8]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v40; // [rsp+68h] [rbp-50h]
  __int64 v41; // [rsp+70h] [rbp-48h]

  v9 = *(_QWORD *)(a1 + 88);
  uu_fmt::parasplit::ParaWords::new((__int64)v39, a2, a1);
  *(_QWORD *)&v31 = v40;
  *((_QWORD *)&v31 + 1) = v40 + (v41 << 6);
  v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v31);
  if ( v10 )
  {
    v11 = v10;
    v32 = *(_QWORD *)(v10 + 40);
    v30 = v9;
    if ( *(_WORD *)(a2 + 72) )
    {
      v15 = *(const void **)(a1 + 32);
      v16 = *(_QWORD *)(a1 + 40);
      v17 = a3[2];
      if ( v16 >= *a3 - v17 )
      {
        v14 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v15, *(_QWORD *)(a1 + 40));
        if ( v14 )
          goto LABEL_23;
      }
      else
      {
        memcpy((void *)(v17 + a3[1]), v15, *(_QWORD *)(a1 + 40));
        a3[2] = v16 + v17;
      }
      v12 = *(_QWORD *)(a1 + 72);
    }
    else if ( *(_BYTE *)(a1 + 104) )
    {
      v12 = 0LL;
    }
    else
    {
      v19 = *(const void **)(a1 + 56);
      v20 = *(_QWORD *)(a1 + 64);
      v21 = a3[2];
      if ( v20 >= *a3 - v21 )
      {
        v14 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v19, *(_QWORD *)(a1 + 64));
        v12 = v30;
        if ( v14 )
          goto LABEL_23;
      }
      else
      {
        memcpy((void *)(v21 + a3[1]), v19, *(_QWORD *)(a1 + 64));
        a3[2] = v20 + v21;
        v12 = v30;
      }
    }
    v22 = *(const void **)(v11 + 16);
    v23 = *(_QWORD *)(v11 + 24);
    v24 = a3[2];
    if ( v23 < *a3 - v24 )
    {
      memcpy((void *)(v24 + a3[1]), v22, v23);
      a3[2] = v23 + v24;
LABEL_18:
      v25 = v32 + v12;
      if ( *(_BYTE *)(a1 + 104) )
      {
        v26 = *(_OWORD *)(a1 + 56);
        v33 = a2;
        v36 = v25;
        v34 = v26;
        v37 = v30;
        v38 = 1;
        v35 = a3;
      }
      else
      {
        v27 = *(_BYTE *)(a2 + 78);
        v28 = *(_OWORD *)(a1 + 56);
        v33 = a2;
        v36 = v25;
        v34 = v28;
        v37 = v30;
        v38 = v27;
        v35 = a3;
        if ( !*(_BYTE *)(a2 + 79) )
        {
          v18 = uu_fmt::linebreak::break_knuth_plass(*(double *)&v28, a5, a6, a7, v31, (__int64)&v33);
          goto LABEL_22;
        }
      }
      v18 = uu_fmt::linebreak::break_simple(v31, *((__int64 *)&v31 + 1), (__int64)&v33);
LABEL_22:
      v14 = v18;
      goto LABEL_23;
    }
    v14 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v22, v23);
    if ( !v14 )
      goto LABEL_18;
  }
  else
  {
    v13 = a3[2];
    if ( (unsigned __int64)(*a3 - v13) <= 1 )
    {
      v18 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, asc_1E28E, 1LL);
      goto LABEL_22;
    }
    *(_BYTE *)(a3[1] + v13) = 10;
    a3[2] = v13 + 1;
    v14 = 0LL;
  }
LABEL_23:
  core::ptr::drop_in_place<uu_fmt::parasplit::ParaWords>(v39);
  return v14;
}
