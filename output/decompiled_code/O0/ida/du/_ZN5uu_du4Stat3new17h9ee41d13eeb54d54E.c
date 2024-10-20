__int64 __fastcall uu_du::Stat::new(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // r12
  unsigned __int64 v7; // rbp
  __int64 v8; // rbp
  char v9; // al
  __int64 v10; // r12
  __int64 v11; // r13
  int v12; // ebp
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v20; // [rsp+8h] [rbp-280h] BYREF
  int v21; // [rsp+10h] [rbp-278h]
  __int64 v22; // [rsp+18h] [rbp-270h] BYREF
  int v23; // [rsp+20h] [rbp-268h]
  _BYTE v24[24]; // [rsp+28h] [rbp-260h] BYREF
  __int128 v25; // [rsp+40h] [rbp-248h] BYREF
  __int64 v26; // [rsp+50h] [rbp-238h]
  __int64 v27; // [rsp+58h] [rbp-230h] BYREF
  __int64 v28; // [rsp+60h] [rbp-228h] BYREF
  _DWORD src[40]; // [rsp+68h] [rbp-220h] BYREF
  _QWORD v30[2]; // [rsp+108h] [rbp-180h] BYREF
  _QWORD v31[20]; // [rsp+118h] [rbp-170h] BYREF
  _BYTE dest[160]; // [rsp+1B8h] [rbp-D0h] BYREF

  v5 = 1LL;
  if ( (a4[3] ^ 0x8000000000000000LL) < 3 )
    v5 = a4[3] ^ 0x8000000000000000LL;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v6 = a4[4];
      if ( !v6 || (v6 & 7) != 0 || (v7 = a4[5], v7 >= 0x555555555555556LL) )
        core::panicking::panic_nounwind(anon_8085cf7280ca5a7279da5d96bb8c0362_48_llvm_11242443447069085683, 162LL);
      std::path::Path::to_path_buf(v24, a2, a3);
      v8 = 24 * v7;
      while ( v8 )
      {
        v9 = <std::path::PathBuf as core::cmp::PartialEq>::eq(v6, v24);
        v6 += 24LL;
        v8 -= 24LL;
        if ( v9 )
        {
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v24);
          goto LABEL_12;
        }
      }
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v24);
    }
    std::sys::pal::unix::fs::lstat(&v27);
  }
  else
  {
LABEL_12:
    std::sys::pal::unix::fs::stat(&v27);
  }
  if ( v27 == 2 )
  {
    *(_QWORD *)(a1 + 16) = v28;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 2LL;
  }
  else
  {
    memcpy(dest, src, sizeof(dest));
    memcpy(v31, dest, sizeof(v31));
    v30[0] = v27;
    v30[1] = v28;
    v10 = v31[2];
    v11 = v31[3];
    std::path::Path::to_path_buf(&v25, a2, a3);
    v12 = v31[5] & 0xF000;
    if ( (unsigned __int8)std::path::Path::is_dir(a2, a3) )
      v13 = 0LL;
    else
      v13 = v31[8];
    v14 = v31[10];
    std::fs::Metadata::created(&v20, v30);
    if ( v21 == 1000000000 )
    {
      v15 = std::io::error::repr_bitpacked::decode_repr(&v27, v20);
      if ( (unsigned __int8)v27 >= 3u )
        v15 = core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v28);
      v16 = 0LL;
    }
    else
    {
      v22 = v20;
      v23 = v21;
      std::time::SystemTime::duration_since(&v27, &v22, 0LL, 0LL);
      v15 = v28;
      v16 = (v27 == 0) & (unsigned __int8)(src[0] != 1000000000);
    }
    v17 = v31[11];
    v18 = v31[13];
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 1LL;
    *(_QWORD *)(a1 + 16) = v11;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = v10;
    *(_QWORD *)(a1 + 48) = v16;
    *(_QWORD *)(a1 + 56) = v15;
    *(_OWORD *)(a1 + 64) = v25;
    *(_QWORD *)(a1 + 80) = v26;
    *(_QWORD *)(a1 + 88) = v13;
    *(_QWORD *)(a1 + 96) = v14;
    *(_QWORD *)(a1 + 104) = 1LL;
    *(_QWORD *)(a1 + 112) = v17;
    *(_QWORD *)(a1 + 120) = v18;
    *(_BYTE *)(a1 + 128) = v12 == 0x4000;
  }
  return a1;
}
