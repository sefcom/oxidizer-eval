_QWORD *__fastcall uu_wc::Inputs::new(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // r13
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  _BYTE *v7; // r15
  __int64 v8; // r14
  _QWORD *v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  size_t v13; // rax
  const void *v14; // r15
  size_t v15; // r14
  __int64 v16; // r13
  __int64 v17; // rax
  void *v18; // r12
  __int64 (__fastcall *v19)(); // rax
  __int128 *v20; // rcx
  const char **v21; // rdx
  _OWORD *v22; // rax
  __int128 v23; // xmm0
  __int64 v25; // [rsp+10h] [rbp-218h]
  const char **v26; // [rsp+18h] [rbp-210h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+20h] [rbp-208h]
  __int128 *v28; // [rsp+28h] [rbp-200h]
  __int64 (__fastcall *v29)(); // [rsp+30h] [rbp-1F8h]
  __int64 v30; // [rsp+38h] [rbp-1F0h]
  __int64 v31; // [rsp+40h] [rbp-1E8h]
  const char *v32; // [rsp+48h] [rbp-1E0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-1D8h]
  _BYTE src[40]; // [rsp+58h] [rbp-1D0h] BYREF
  __int128 v35; // [rsp+80h] [rbp-1A8h]
  __int128 v36; // [rsp+90h] [rbp-198h]
  __int64 v37; // [rsp+A0h] [rbp-188h]
  unsigned __int64 v38; // [rsp+A8h] [rbp-180h]
  __int64 v39; // [rsp+108h] [rbp-120h]
  __int128 v40; // [rsp+110h] [rbp-118h] BYREF
  _BYTE v41[24]; // [rsp+120h] [rbp-108h]
  __int128 v42; // [rsp+138h] [rbp-F0h]
  __int128 v43; // [rsp+148h] [rbp-E0h]
  __int64 v44; // [rsp+158h] [rbp-D0h]
  _QWORD v45[8]; // [rsp+160h] [rbp-C8h] BYREF
  __int128 v46; // [rsp+1A0h] [rbp-88h] BYREF
  __int128 v47; // [rsp+1B0h] [rbp-78h]
  __int64 v48; // [rsp+1C0h] [rbp-68h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2, aFiles, 5LL);
  v32 = aFiles;
  v33 = 5LL;
  if ( *(_QWORD *)src )
  {
    *(_QWORD *)&v41[16] = v35;
    *(_OWORD *)v41 = *(_OWORD *)&src[24];
    v40 = *(_OWORD *)&src[8];
    v26 = &v32;
    v27 = <&T as core::fmt::Display>::fmt;
    v28 = &v40;
    v29 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v46 = &anon_44bf7aff6ac5828708c3812483f5a592_3_llvm_11061933974019956137;
    *((_QWORD *)&v46 + 1) = 2LL;
    v48 = 0LL;
    *(_QWORD *)&v47 = &v26;
    *((_QWORD *)&v47 + 1) = 2LL;
    core::panicking::panic_fmt(&v46, &anon_44bf7aff6ac5828708c3812483f5a592_5_llvm_11061933974019956137);
  }
  v2 = *(__int64 (__fastcall **)(__int64))&src[8];
  v3 = *(_QWORD *)&src[16];
  v4 = *(_QWORD *)&src[24];
  v5 = *(_QWORD *)&src[32];
  v25 = *((_QWORD *)&v35 + 1);
  v31 = v35;
  v39 = *((_QWORD *)&v36 + 1);
  v30 = v36;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v40,
    a2,
    anon_777bb9d9a47a4fd760482fbc11f41de2_4_llvm_10162994613922154447,
    11LL);
  v32 = anon_777bb9d9a47a4fd760482fbc11f41de2_4_llvm_10162994613922154447;
  v33 = 11LL;
  if ( (_DWORD)v40 != 2 )
  {
    v48 = *(_QWORD *)&v41[16];
    v47 = *(_OWORD *)v41;
    v46 = v40;
    v26 = &v32;
    v27 = <&T as core::fmt::Display>::fmt;
    v28 = &v46;
    v29 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)src = &anon_44bf7aff6ac5828708c3812483f5a592_3_llvm_11061933974019956137;
    *(_QWORD *)&src[8] = 2LL;
    *(_QWORD *)&src[32] = 0LL;
    *(_QWORD *)&src[16] = &v26;
    *(_QWORD *)&src[24] = 2LL;
    core::panicking::panic_fmt(src, &anon_44bf7aff6ac5828708c3812483f5a592_5_llvm_11061933974019956137);
  }
  if ( !v2 )
  {
    if ( !*((_QWORD *)&v40 + 1) )
    {
      v9 = a1;
      *a1 = 0LL;
      return v9;
    }
    v7 = *(_BYTE **)(*((_QWORD *)&v40 + 1) + 8LL);
    v8 = *(_QWORD *)(*((_QWORD *)&v40 + 1) + 16LL);
    v9 = a1;
    if ( v8 == 1 && *v7 == 45 )
    {
      std::io::stdio::stdin();
      LODWORD(v26) = 0;
      std::fs::File::metadata(src, &v26);
      if ( *(_DWORD *)src == 2 )
      {
        core::ptr::drop_in_place<std::io::error::Error>(*(_QWORD *)&src[8], &v26);
LABEL_16:
        v10 = 0x8000000000000001LL;
        v7 = 0LL;
LABEL_21:
        a1[1] = v10;
        a1[2] = v7;
        a1[3] = v8;
        *a1 = 2LL;
        return v9;
      }
      if ( (v36 & 0xF000) != 0x8000 || v38 >= 0xA00001 )
        goto LABEL_16;
      uu_wc::files0_iter_stdin(&v46);
      core::iter::adapters::try_process(src, &v46);
      v21 = *(const char ***)src;
      v19 = *(__int64 (__fastcall **)())&src[8];
      v20 = *(__int128 **)&src[16];
      if ( *(_QWORD *)src != 0x8000000000000000LL )
      {
LABEL_44:
        *a1 = 1LL;
        a1[1] = v21;
        a1[2] = v19;
        a1[3] = v20;
        return v9;
      }
LABEL_34:
      a1[1] = v19;
      a1[2] = v20;
LABEL_39:
      *v9 = 3LL;
      return v9;
    }
    v11 = *(_QWORD *)(*((_QWORD *)&v40 + 1) + 8LL);
    std::sys::pal::unix::fs::stat(src);
    if ( *(_DWORD *)src == 2 )
    {
      core::ptr::drop_in_place<std::io::error::Error>(*(_QWORD *)&src[8], v11);
    }
    else if ( (v36 & 0xF000) == 0x8000 && v38 <= 0xA00000 )
    {
      uu_wc::files0_iter_file(src, v7, v8);
      v19 = *(__int64 (__fastcall **)())&src[8];
      v20 = *(__int128 **)&src[16];
      if ( *(_QWORD *)src != 0x8000000000000001LL )
      {
        v44 = v37;
        v43 = v36;
        v42 = v35;
        *(_OWORD *)&v41[8] = *(_OWORD *)&src[24];
        v40 = *(_OWORD *)src;
        *(_QWORD *)v41 = *(_QWORD *)&src[16];
        core::iter::adapters::try_process(&v26, &v40);
        v21 = v26;
        v19 = v27;
        v20 = v28;
        if ( v26 != (const char **)0x8000000000000000LL )
          goto LABEL_44;
      }
      goto LABEL_34;
    }
    v10 = 0x8000000000000000LL;
    goto LABEL_21;
  }
  if ( *((_QWORD *)&v40 + 1) )
  {
    if ( !v5 || v5 == v31 )
    {
      while ( v3 )
      {
        v6 = v3;
        if ( v3 == v4 )
          break;
        v3 += 24LL;
        if ( *(_QWORD *)(v6 + 16) )
        {
          v5 = *(_QWORD *)(v6 + 8);
          goto LABEL_25;
        }
      }
      if ( !v25 || (v5 = v25, v25 == v30) )
        core::option::unwrap_failed(&off_F30D0);
    }
LABEL_25:
    v12 = v2(v5);
    std::sys::os_str::bytes::Slice::to_string_lossy(src, *(_QWORD *)(v12 + 8), *(_QWORD *)(v12 + 16));
    v13 = *(_QWORD *)src;
    v14 = *(const void **)&src[8];
    v15 = *(_QWORD *)&src[16];
    if ( *(_QWORD *)src != 0x8000000000000000LL )
      goto LABEL_37;
    if ( *(_QWORD *)&src[16] )
    {
      if ( *(__int64 *)&src[16] < 0 )
      {
        v16 = 0LL;
      }
      else
      {
        v16 = 1LL;
        v17 = _rust_alloc(*(_QWORD *)&src[16], 1LL);
        if ( v17 )
        {
          v18 = (void *)v17;
LABEL_36:
          memcpy(v18, v14, v15);
          v13 = v15;
          v14 = v18;
LABEL_37:
          *(_QWORD *)&src[8] = v13;
          *(_QWORD *)&src[16] = v14;
          *(_QWORD *)&src[24] = v15;
          *(_QWORD *)src = 0x8000000000000001LL;
          v22 = (_OWORD *)_rust_alloc(32LL, 8LL);
          if ( !v22 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v23 = *(_OWORD *)src;
          v22[1] = *(_OWORD *)&src[16];
          *v22 = v23;
          v9 = a1;
          a1[1] = v22;
          a1[2] = &off_F3120;
          goto LABEL_39;
        }
      }
      alloc::raw_vec::handle_error(v16, v15);
    }
    v18 = &dword_0 + 1;
    goto LABEL_36;
  }
  v45[0] = v2;
  v45[1] = v3;
  v45[2] = v4;
  v45[3] = v5;
  v45[4] = v31;
  v45[5] = v25;
  v45[6] = v30;
  v45[7] = v39;
  v9 = a1;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1 + 1, v45);
  *a1 = 1LL;
  return v9;
}
