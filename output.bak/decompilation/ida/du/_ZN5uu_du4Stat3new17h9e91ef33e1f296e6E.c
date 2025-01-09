__int64 __fastcall uu_du::Stat::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  char v9; // bp
  __int16 v10; // r13
  __int64 v11; // r12
  char is_dir; // bp
  _BOOL8 v13; // rax
  __int64 v14; // rdx
  int v15; // r13d
  unsigned __int64 v16; // xmm0_8
  unsigned __int64 v17; // rsi
  __int64 v19; // [rsp+8h] [rbp-1D0h]
  __int64 v20; // [rsp+8h] [rbp-1D0h]
  __int64 v21; // [rsp+10h] [rbp-1C8h]
  __int64 v22; // [rsp+18h] [rbp-1C0h]
  __int128 dest; // [rsp+20h] [rbp-1B8h] BYREF
  __int128 v24; // [rsp+30h] [rbp-1A8h]
  __int64 v25; // [rsp+40h] [rbp-198h]
  __int128 v26; // [rsp+48h] [rbp-190h]
  int v27; // [rsp+58h] [rbp-180h]
  __int128 v28; // [rsp+5Ch] [rbp-17Ch]
  int v29; // [rsp+6Ch] [rbp-16Ch]
  __m128i v30; // [rsp+70h] [rbp-168h]
  __int64 v31; // [rsp+80h] [rbp-158h]
  __m128 v32; // [rsp+88h] [rbp-150h]
  __int64 v33; // [rsp+98h] [rbp-140h]
  __int128 v34; // [rsp+A0h] [rbp-138h]
  __int128 v35; // [rsp+B0h] [rbp-128h]
  __int128 v36; // [rsp+C0h] [rbp-118h]
  __m128i v37; // [rsp+D0h] [rbp-108h] BYREF
  __m128 v38; // [rsp+E0h] [rbp-F8h]
  _OWORD v39[2]; // [rsp+F8h] [rbp-E0h] BYREF
  __int64 v40; // [rsp+118h] [rbp-C0h]
  __int128 v41; // [rsp+120h] [rbp-B8h]
  int v42; // [rsp+130h] [rbp-A8h]
  __int128 v43; // [rsp+134h] [rbp-A4h]
  int v44; // [rsp+144h] [rbp-94h]
  __m128i v45; // [rsp+148h] [rbp-90h]
  __int64 v46; // [rsp+158h] [rbp-80h]
  __m128 v47; // [rsp+160h] [rbp-78h]
  __int64 v48; // [rsp+170h] [rbp-68h]
  __int128 v49; // [rsp+178h] [rbp-60h]
  __int128 v50; // [rsp+188h] [rbp-50h]
  __int128 v51; // [rsp+198h] [rbp-40h]

  v6 = 1LL;
  if ( (a5[3] ^ 0x8000000000000000LL) < 3 )
    v6 = a5[3] ^ 0x8000000000000000LL;
  if ( !v6
    || v6 == 1
    && (v19 = a4,
        v7 = a5[4],
        v8 = a5[5],
        std::path::Path::to_path_buf(&dest, a2, a3),
        v9 = <T as core::slice::cmp::SliceContains>::slice_contains(&dest, v7, v8),
        core::ptr::drop_in_place<std::path::PathBuf>(&dest),
        a4 = v19,
        v9) )
  {
    std::fs::metadata(&dest, a2, a3);
  }
  else if ( a4 )
  {
    std::fs::DirEntry::metadata(&dest);
  }
  else
  {
    std::fs::symlink_metadata(&dest, a2, a3);
  }
  if ( (_QWORD)dest == 2LL )
  {
    *(_QWORD *)(a1 + 16) = *((_QWORD *)&dest + 1);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 2LL;
  }
  else
  {
    v39[1] = v24;
    v10 = v27;
    v43 = v28;
    v44 = v29;
    v11 = v31;
    v49 = v34;
    v50 = v35;
    v51 = v36;
    v21 = v26;
    v39[0] = dest;
    v20 = v25;
    v40 = v25;
    v41 = v26;
    v42 = v27;
    v37 = v30;
    v45 = v30;
    v46 = v31;
    v38 = v32;
    v47 = v32;
    v22 = v33;
    v48 = v33;
    std::path::Path::to_path_buf(&dest, a2, a3);
    is_dir = std::path::Path::is_dir(a2, a3);
    v13 = uu_du::birth_u64((__int64)v39);
    v15 = v10 & 0xF000;
    v16 = _mm_load_si128(&v37).m128i_u64[0];
    v17 = 0LL;
    if ( !is_dir )
      v17 = v16;
    *(_QWORD *)(a1 + 80) = v24;
    *(_OWORD *)(a1 + 64) = dest;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 1LL;
    *(_QWORD *)(a1 + 16) = v21;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = v20;
    *(_QWORD *)(a1 + 48) = v13;
    *(_QWORD *)(a1 + 56) = v14;
    *(_QWORD *)(a1 + 88) = v17;
    *(_QWORD *)(a1 + 96) = v11;
    *(_QWORD *)(a1 + 104) = 1LL;
    _mm_storel_ps((double *)(a1 + 112), v38);
    *(_QWORD *)(a1 + 120) = v22;
    *(_BYTE *)(a1 + 128) = v15 == 0x4000;
  }
  return a1;
}
