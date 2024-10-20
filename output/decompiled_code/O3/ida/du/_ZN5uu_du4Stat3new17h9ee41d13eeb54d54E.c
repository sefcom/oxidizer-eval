        __m128 a8)
{
  __int64 v8; // r12
  __int64 v10; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // r13
  char v14; // bp
  __int64 *p_dest; // rdi
  __int64 v16; // r8
  __m128i v17; // xmm4
  __m128i v18; // xmm5
  char is_dir; // al
  unsigned __int64 v20; // xmm0_8
  unsigned __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rax
  __m128 v24; // xmm1
  unsigned __int64 v25; // rdx
  __int64 v27; // [rsp+8h] [rbp-230h]
  __int128 v28; // [rsp+10h] [rbp-228h] BYREF
  int v29; // [rsp+20h] [rbp-218h]
  __int64 *v30; // [rsp+28h] [rbp-210h]
  __m128i v31; // [rsp+30h] [rbp-208h] BYREF
  __int128 v32; // [rsp+40h] [rbp-1F8h]
  __int128 v33; // [rsp+50h] [rbp-1E8h]
  __m128i v34; // [rsp+60h] [rbp-1D8h] BYREF
  __m128 v35; // [rsp+70h] [rbp-1C8h]
  __int64 dest; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v37; // [rsp+88h] [rbp-1B0h]
  __int128 v38; // [rsp+90h] [rbp-1A8h]
  __int64 v39; // [rsp+A0h] [rbp-198h]
  __m128i v40; // [rsp+A8h] [rbp-190h]
  int v41; // [rsp+B8h] [rbp-180h]
  __int128 v42; // [rsp+BCh] [rbp-17Ch]
  int v43; // [rsp+CCh] [rbp-16Ch]
  __m128i v44; // [rsp+D0h] [rbp-168h]
  __int64 v45; // [rsp+E0h] [rbp-158h]
  __m128 v46; // [rsp+E8h] [rbp-150h]
  __int64 *v47; // [rsp+F8h] [rbp-140h]
  __m128i v48; // [rsp+100h] [rbp-138h]
  __int128 v49; // [rsp+110h] [rbp-128h]
  __int128 v50; // [rsp+120h] [rbp-118h]
  __int128 v51; // [rsp+130h] [rbp-108h]
  __m128i v52; // [rsp+140h] [rbp-F8h] BYREF
  _QWORD v53[2]; // [rsp+158h] [rbp-E0h] BYREF
  __int128 v54; // [rsp+168h] [rbp-D0h]
  __int64 v55; // [rsp+178h] [rbp-C0h]
  __m128i v56; // [rsp+180h] [rbp-B8h]
  int v57; // [rsp+190h] [rbp-A8h]
  __int128 v58; // [rsp+194h] [rbp-A4h]
  int v59; // [rsp+1A4h] [rbp-94h]
  __m128i v60; // [rsp+1A8h] [rbp-90h]
  __int64 v61; // [rsp+1B8h] [rbp-80h]
  __m128 v62; // [rsp+1C0h] [rbp-78h]
  __int64 *v63; // [rsp+1D0h] [rbp-68h]
  __m128i v64; // [rsp+1D8h] [rbp-60h]
  __int128 v65; // [rsp+1E8h] [rbp-50h]
  __int128 v66; // [rsp+1F8h] [rbp-40h]

  v10 = a2;
  v12 = 1LL;
  if ( (a4[3] ^ 0x8000000000000000LL) < 3 )
    v12 = a4[3] ^ 0x8000000000000000LL;
  if ( !v12 )
    goto LABEL_8;
  if ( v12 != 1 )
    goto LABEL_9;
  v8 = a4[4];
  v13 = a4[5];
  std::path::Path::to_path_buf(&dest, a2, a3);
  v14 = <T as core::slice::cmp::SliceContains>::slice_contains(&dest, v8, v13);
  if ( dest )
    _rust_dealloc(v37, dest, 1LL);
  if ( v14 )
  {
LABEL_8:
    p_dest = &dest;
    std::sys::pal::unix::fs::stat(&dest);
  }
  else
  {
LABEL_9:
    p_dest = &dest;
    std::sys::pal::unix::fs::lstat(&dest);
  }
  if ( dest != 2 )
  {
    v51 = v38;
    a2 = v39;
    v17 = v40;
    LODWORD(v8) = v41;
    v28 = v42;
    v29 = v43;
    v18 = v44;
    v16 = v45;
    a8 = v46;
    p_dest = v47;
    v31 = v48;
    v32 = v49;
    v33 = v50;
  }
  if ( (_DWORD)dest != 2 )
  {
    v30 = &v31.m128i_i64[1];
    v54 = v51;
    v58 = v28;
    v59 = v29;
    v64 = _mm_load_si128(&v31);
    v65 = v32;
    v66 = v33;
    v53[0] = dest;
    v53[1] = v37;
    v55 = a2;
    v34 = v17;
    v56 = v17;
    v57 = v8;
    v60 = v18;
    v27 = v16;
    v61 = v16;
    v35 = a8;
    v62 = a8;
    v63 = p_dest;
    v52 = v18;
    std::path::Path::to_path_buf(&v31, v10, a3);
    is_dir = std::path::Path::is_dir(v10, a3);
    v20 = _mm_load_si128(&v52).m128i_u64[0];
    v21 = 0LL;
    if ( !is_dir )
      v21 = v20;
    std::fs::Metadata::created(&dest, v53);
    if ( (_DWORD)v37 == 1000000000 )
    {
      core::ptr::drop_in_place<std::io::error::Error>(&dest);
    }
    else
    {
      *(_QWORD *)&v28 = dest;
      DWORD2(v28) = v37;
      std::time::SystemTime::duration_since(&dest, &v28, 0LL, 0LL);
      if ( !dest )
      {
        v22 = v37;
        v23 = 1LL;
        goto LABEL_20;
      }
    }
    v23 = 0LL;
LABEL_20:
    v24 = v35;
    v25 = _mm_load_si128(&v34).m128i_u64[0];
    *(_QWORD *)(a1 + 80) = v32;
    *(__m128i *)(a1 + 64) = v31;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 1LL;
    *(_QWORD *)(a1 + 16) = v25;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = a2;
    *(_QWORD *)(a1 + 48) = v23;
    *(_QWORD *)(a1 + 56) = v22;
    *(_QWORD *)(a1 + 88) = v21;
    *(_QWORD *)(a1 + 96) = v27;
    *(_QWORD *)(a1 + 104) = 1LL;
    _mm_storel_ps((double *)(a1 + 112), v24);
    *(_QWORD *)(a1 + 120) = p_dest;
    *(_BYTE *)(a1 + 128) = (v8 & 0xF000) == 0x4000;
    return a1;
  }
  *(_QWORD *)(a1 + 16) = v37;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = 2LL;
  return a1;
}
