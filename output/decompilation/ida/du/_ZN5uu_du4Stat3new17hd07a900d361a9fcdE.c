__int64 __fastcall uu_du::Stat::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rcx
  __int16 v11; // bp
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // ebp
  __int64 v17; // [rsp+0h] [rbp-1B8h]
  __int64 v18; // [rsp+0h] [rbp-1B8h]
  __int64 v19; // [rsp+8h] [rbp-1B0h]
  __int64 v20; // [rsp+10h] [rbp-1A8h]
  __int64 v21; // [rsp+18h] [rbp-1A0h]
  __int64 v22; // [rsp+20h] [rbp-198h]
  __int128 dest; // [rsp+28h] [rbp-190h] BYREF
  __int128 v24; // [rsp+38h] [rbp-180h]
  __int64 v25; // [rsp+48h] [rbp-170h]
  __int128 v26; // [rsp+50h] [rbp-168h]
  int v27; // [rsp+60h] [rbp-158h]
  __int128 v28; // [rsp+64h] [rbp-154h]
  int v29; // [rsp+74h] [rbp-144h]
  __int128 v30; // [rsp+78h] [rbp-140h]
  __int64 v31; // [rsp+88h] [rbp-130h]
  __int128 v32; // [rsp+90h] [rbp-128h]
  __int64 v33; // [rsp+A0h] [rbp-118h]
  __int128 v34; // [rsp+A8h] [rbp-110h]
  __int128 v35; // [rsp+B8h] [rbp-100h]
  __int128 v36; // [rsp+C8h] [rbp-F0h]
  _QWORD v37[2]; // [rsp+D8h] [rbp-E0h] BYREF
  __int128 v38; // [rsp+E8h] [rbp-D0h]
  __int64 v39; // [rsp+F8h] [rbp-C0h]
  __int128 v40; // [rsp+100h] [rbp-B8h]
  int v41; // [rsp+110h] [rbp-A8h]
  __int128 v42; // [rsp+114h] [rbp-A4h]
  int v43; // [rsp+124h] [rbp-94h]
  __int128 v44; // [rsp+128h] [rbp-90h]
  __int64 v45; // [rsp+138h] [rbp-80h]
  __int128 v46; // [rsp+140h] [rbp-78h]
  __int64 v47; // [rsp+150h] [rbp-68h]
  __int128 v48; // [rsp+158h] [rbp-60h]
  __int128 v49; // [rsp+168h] [rbp-50h]
  __int128 v50; // [rsp+178h] [rbp-40h]

  v6 = 1LL;
  if ( (a5[3] ^ 0x8000000000000000LL) < 3 )
    v6 = a5[3] ^ 0x8000000000000000LL;
  if ( !v6
    || v6 == 1
    && (v17 = a4,
        v7 = a5[4],
        v8 = a5[5],
        std::path::Path::to_path_buf(&dest, a2, a3),
        LOBYTE(v8) = <T as core::slice::cmp::SliceContains>::slice_contains(&dest, v7, v8),
        core::ptr::drop_in_place<std::path::PathBuf>(&dest),
        a4 = v17,
        (_BYTE)v8) )
  {
    std::fs::metadata(&dest);
    v9 = *((_QWORD *)&dest + 1);
    v10 = dest;
    if ( (_QWORD)dest != 2LL )
      goto LABEL_12;
LABEL_10:
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 2LL;
    return a1;
  }
  if ( a4 )
  {
    std::fs::DirEntry::metadata(&dest);
    v9 = *((_QWORD *)&dest + 1);
    v10 = dest;
    if ( (_QWORD)dest == 2LL )
      goto LABEL_10;
  }
  else
  {
    std::fs::symlink_metadata(&dest);
    v9 = *((_QWORD *)&dest + 1);
    v10 = dest;
    if ( (_QWORD)dest == 2LL )
      goto LABEL_10;
  }
LABEL_12:
  v38 = v24;
  v11 = v27;
  v42 = v28;
  v43 = v29;
  v48 = v34;
  v49 = v35;
  v50 = v36;
  v19 = v26;
  v12 = v30;
  v20 = v32;
  v37[0] = v10;
  v37[1] = v9;
  v18 = v25;
  v39 = v25;
  v40 = v26;
  v41 = v27;
  v44 = v30;
  v21 = v31;
  v45 = v31;
  v46 = v32;
  v22 = v33;
  v47 = v33;
  std::path::Path::to_path_buf(&dest, a2, a3);
  v13 = uu_du::birth_u64(v37);
  v15 = v11 & 0xF000;
  if ( v15 == 0x4000 )
    v12 = 0LL;
  *(_QWORD *)(a1 + 80) = v24;
  *(_OWORD *)(a1 + 64) = dest;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = 1LL;
  *(_QWORD *)(a1 + 16) = v19;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = v18;
  *(_QWORD *)(a1 + 48) = v13;
  *(_QWORD *)(a1 + 56) = v14;
  *(_QWORD *)(a1 + 88) = v12;
  *(_QWORD *)(a1 + 96) = v21;
  *(_QWORD *)(a1 + 104) = 1LL;
  *(_QWORD *)(a1 + 112) = v20;
  *(_QWORD *)(a1 + 120) = v22;
  *(_BYTE *)(a1 + 128) = v15 == 0x4000;
  return a1;
}