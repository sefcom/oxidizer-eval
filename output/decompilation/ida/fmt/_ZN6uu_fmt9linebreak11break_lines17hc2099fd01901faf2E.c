__int64 __fastcall uu_fmt::linebreak::break_lines(__int64 a1, _BYTE *a2, _QWORD *a3)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r15
  const void *v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rbx
  const void *v12; // rsi
  size_t v13; // rbp
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rbx
  unsigned __int8 v18; // al
  char v19; // dl
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbp
  const void *v25; // rsi
  unsigned __int64 v26; // rbp
  __int64 v27; // rbx
  __int64 v28; // [rsp+8h] [rbp-B0h]
  __int64 v29; // [rsp+10h] [rbp-A8h]
  __int64 v30; // [rsp+18h] [rbp-A0h]
  __int64 v32; // [rsp+28h] [rbp-90h] BYREF
  __int64 v33; // [rsp+30h] [rbp-88h]
  __int64 v34; // [rsp+38h] [rbp-80h]
  _BYTE *v35; // [rsp+50h] [rbp-68h] BYREF
  __int128 v36; // [rsp+58h] [rbp-60h]
  _QWORD *v37; // [rsp+68h] [rbp-50h]
  __int64 v38; // [rsp+70h] [rbp-48h]
  __int64 v39; // [rsp+78h] [rbp-40h]
  char v40; // [rsp+80h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 88);
  uu_fmt::parasplit::ParaWords::new(&v32, a2, a1);
  v6 = v33;
  v7 = v34;
  if ( v34 )
  {
    v30 = *(_QWORD *)(v33 + 40);
    v28 = v5;
    if ( a2[72] || a2[73] == 1 )
    {
      v8 = *(const void **)(a1 + 32);
      v9 = *(_QWORD *)(a1 + 40);
      v10 = a3[2];
      if ( v9 >= *a3 - v10 )
      {
        v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v8, *(_QWORD *)(a1 + 40));
        if ( v23 )
          goto LABEL_17;
      }
      else
      {
        memcpy((void *)(v10 + a3[1]), v8, *(_QWORD *)(a1 + 40));
        a3[2] = v9 + v10;
      }
      v11 = *(_QWORD *)(a1 + 72);
    }
    else if ( *(_BYTE *)(a1 + 104) )
    {
      v11 = 0LL;
    }
    else
    {
      v25 = *(const void **)(a1 + 56);
      v26 = *(_QWORD *)(a1 + 64);
      v27 = a3[2];
      if ( v26 >= *a3 - v27 )
      {
        v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v25, *(_QWORD *)(a1 + 64));
        v11 = v28;
        if ( v23 )
          goto LABEL_17;
      }
      else
      {
        memcpy((void *)(v27 + a3[1]), v25, *(_QWORD *)(a1 + 64));
        a3[2] = v26 + v27;
        v11 = v28;
      }
    }
    v12 = *(const void **)(v6 + 16);
    v29 = v6;
    v13 = *(_QWORD *)(v6 + 24);
    v14 = a3[2];
    if ( v13 >= *a3 - v14 )
    {
      v6 = v29;
      v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v12, v13);
      if ( v23 )
        goto LABEL_17;
    }
    else
    {
      memcpy((void *)(v14 + a3[1]), v12, v13);
      a3[2] = v13 + v14;
      v6 = v29;
    }
    v15 = v6 + (v7 << 6);
    v16 = v6 + 64;
    v17 = v30 + v11;
    v18 = *(_BYTE *)(a1 + 104);
    v19 = 1;
    if ( !v18 )
      v19 = a2[78];
    v20 = *(_OWORD *)(a1 + 56);
    v35 = a2;
    v38 = v17;
    v36 = v20;
    v39 = v28;
    v40 = v19;
    v37 = a3;
    if ( ((v18 | a2[79]) & 1) != 0 )
      v21 = uu_fmt::linebreak::break_simple(v16, v15, &v35);
    else
      v21 = uu_fmt::linebreak::break_knuth_plass(v16, v15, &v35);
    goto LABEL_16;
  }
  v22 = a3[2];
  if ( (unsigned __int64)(*a3 - v22) <= 1 )
  {
    v21 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, asc_19C48, 1LL);
LABEL_16:
    v23 = v21;
    goto LABEL_17;
  }
  *(_BYTE *)(a3[1] + v22) = 10;
  a3[2] = v22 + 1;
  v23 = 0LL;
LABEL_17:
  core::ptr::drop_in_place<uu_fmt::parasplit::ParaWords>(v32, v6);
  return v23;
}