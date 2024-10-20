__int64 __fastcall uu_sort::tmp_dir::TmpDirWrapper::next_file(__int64 a1, __int64 a2)
{
  const void *v3; // r12
  signed __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rax
  void *v7; // r15
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rt0
  char v12; // of
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  char v18; // bp
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // r15
  _OWORD *v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int128 v26; // kr00_16
  __int128 v27; // kr10_16
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 (__fastcall **v31)(); // rcx
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int128 v36; // [rsp+0h] [rbp-118h] BYREF
  __int128 v37; // [rsp+10h] [rbp-108h]
  __int128 v38; // [rsp+20h] [rbp-F8h]
  __int128 v39; // [rsp+30h] [rbp-E8h]
  volatile __int32 *v40; // [rsp+40h] [rbp-D8h]
  __int128 v41; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+58h] [rbp-C0h]
  __m256i v43; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+80h] [rbp-98h]
  __int64 v45; // [rsp+88h] [rbp-90h]
  __int16 v46; // [rsp+90h] [rbp-88h]
  __int128 v47; // [rsp+98h] [rbp-80h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-70h]
  __int128 v49; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v50; // [rsp+C8h] [rbp-50h] BYREF
  _QWORD v51[8]; // [rsp+D8h] [rbp-40h] BYREF

  if ( *(_BYTE *)(a2 + 40) == 2 )
  {
    if ( *(_QWORD *)(a2 + 56) )
    {
      *(_QWORD *)&v36 = 0LL;
      core::panicking::assert_failed(
        0LL,
        a2 + 56,
        &anon_fb4e5c13235a4928c2f4204e63040589_12_llvm_14118902564181896207,
        &v36,
        &off_193DC8);
    }
    v45 = 6LL;
    v43.m256i_i64[3] = 1LL;
    v44 = 0LL;
    v46 = 0;
    v43.m256i_i32[0] = 0;
    v43.m256i_i64[1] = (__int64)aUutilsSort;
    v43.m256i_i64[2] = 11LL;
    tempfile::Builder::tempdir_in(&v47, &v43, a2);
    if ( (_BYTE)v48 == 2 )
    {
      *(_QWORD *)&v36 = v47;
      v3 = *(const void **)(a2 + 8);
      v4 = *(_QWORD *)(a2 + 16);
      if ( v4 )
      {
        if ( v4 < 0 )
        {
          v5 = 0LL;
        }
        else
        {
          v5 = 1LL;
          v6 = _rust_alloc(*(_QWORD *)(a2 + 16), 1LL);
          if ( v6 )
          {
            v7 = (void *)v6;
LABEL_41:
            memcpy(v7, v3, v4);
            core::ptr::drop_in_place<std::io::error::Error>(&v36);
            *((_QWORD *)&v36 + 1) = v4;
            *(_QWORD *)&v37 = v7;
            *((_QWORD *)&v37 + 1) = v4;
            LOBYTE(v36) = 7;
            v29 = _rust_alloc(64LL, 8LL);
            if ( !v29 )
              alloc::alloc::handle_alloc_error(8LL, 64LL);
            v32 = v36;
            v33 = v37;
            v34 = v38;
            *(_OWORD *)(v29 + 48) = v39;
            *(_OWORD *)(v29 + 32) = v34;
            *(_OWORD *)(v29 + 16) = v33;
            *(_OWORD *)v29 = v32;
            v31 = &off_193D40;
LABEL_43:
            *(_QWORD *)(a1 + 16) = v29;
            *(_QWORD *)(a1 + 24) = v31;
            *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
            return a1;
          }
        }
        alloc::raw_vec::handle_error(v5, v4);
      }
      v7 = &dword_0 + 1;
      goto LABEL_41;
    }
    v8 = (_QWORD *)(a2 + 24);
    if ( *(_BYTE *)(a2 + 40) != 2 )
    {
      if ( !*(_BYTE *)(a2 + 40) )
      {
        v9 = std::sys::pal::unix::fs::remove_dir_impl::remove_dir_all(*(void **)(a2 + 24), *(_QWORD *)(a2 + 32));
        if ( v9 )
          core::ptr::drop_in_place<std::io::error::Error>(v9);
      }
      v10 = *(_QWORD *)(a2 + 32);
      if ( v10 )
        _rust_dealloc(*v8, v10, 1LL);
    }
    *(_QWORD *)(a2 + 40) = v48;
    *(_OWORD *)v8 = v47;
    if ( *(_BYTE *)(a2 + 40) == 2 )
      core::option::unwrap_failed(&off_193DB0);
    std::path::Path::to_path_buf(&v41, *(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32));
    v11 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 48));
    if ( (v11 < 0) ^ v12 | (v11 == 0) )
      BUG();
    *((_QWORD *)&v37 + 1) = *(_QWORD *)(a2 + 48);
    v36 = v41;
    *(_QWORD *)&v37 = v42;
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))ctrlc::init_and_set_handler)(&v50, &v36, 1LL);
    if ( (_DWORD)v50 != 3 )
    {
      v49 = v50;
      v51[0] = &v49;
      v51[1] = <ctrlc::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v36 = &off_193DE0;
      *((_QWORD *)&v36 + 1) = 1LL;
      *(_QWORD *)&v38 = 0LL;
      *(_QWORD *)&v37 = v51;
      *((_QWORD *)&v37 + 1) = 1LL;
      alloc::fmt::format::format_inner(&v43, &v36, v13, v14, v15, v16);
      v27 = *(_OWORD *)v43.m256i_i8;
      v28 = v43.m256i_i64[2];
      v29 = _rust_alloc(32LL, 8LL);
      if ( !v29 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      *(_OWORD *)v29 = v27;
      *(_QWORD *)(v29 + 16) = v28;
      *(_DWORD *)(v29 + 24) = 2;
      if ( (unsigned int)v49 >= 2 )
      {
        v30 = v29;
        core::ptr::drop_in_place<std::io::error::Error>((char *)&v49 + 8);
        v29 = v30;
      }
      v31 = &off_193E28;
      goto LABEL_43;
    }
  }
  v17 = *(_QWORD *)(a2 + 48);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 16), 1, 0) )
    std::sys::sync::mutex::futex::Mutex::lock_contended(v17 + 16);
  if ( 2LL * std::panicking::panic_count::GLOBAL_PANIC_COUNT )
    v18 = std::panicking::panic_count::is_zero_slow_path() ^ 1;
  else
    v18 = 0;
  if ( *(_BYTE *)(v17 + 20) )
  {
    *(_QWORD *)&v36 = v17 + 16;
    BYTE8(v36) = v18;
    core::result::unwrap_failed(aCalledResultUn_5, 43LL, &v36, &off_193B60, &off_193E98);
  }
  v43.m256i_i64[0] = 0LL;
  *(_OWORD *)&v43.m256i_u64[1] = 1uLL;
  *(_QWORD *)&v39 = 32LL;
  BYTE8(v39) = 3;
  *(_QWORD *)&v36 = 0LL;
  *(_QWORD *)&v37 = 0LL;
  *(_QWORD *)&v38 = &v43;
  *((_QWORD *)&v38 + 1) = &off_193AD8;
  v40 = (volatile __int32 *)(v17 + 16);
  if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt(a2 + 56, &v36) )
    core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v41, &unk_193B40, &off_193B08);
  v19 = v43.m256i_i64[0];
  ++*(_QWORD *)(a2 + 56);
  v20 = v43.m256i_i64[1];
  if ( *(_BYTE *)(a2 + 40) == 2 )
    core::option::unwrap_failed(&off_193EB0);
  std::path::Path::_join(&v41, *(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), v43.m256i_i64[1], v43.m256i_i64[2]);
  if ( v19 )
    _rust_dealloc(v20, v19, 1LL);
  *(_QWORD *)&v36 = 0x1B600000000LL;
  DWORD2(v36) = 16777472;
  WORD6(v36) = 1;
  v21 = *((_QWORD *)&v41 + 1);
  std::fs::OpenOptions::_open(&v47, &v36, *((_QWORD *)&v41 + 1), v42);
  if ( (_DWORD)v47 )
  {
    LOBYTE(v36) = 4;
    *((_QWORD *)&v36 + 1) = *((_QWORD *)&v47 + 1);
    v22 = (_OWORD *)_rust_alloc(64LL, 8LL);
    if ( !v22 )
      alloc::alloc::handle_alloc_error(8LL, 64LL);
    v23 = v36;
    v24 = v37;
    v25 = v38;
    v22[3] = v39;
    v22[2] = v25;
    v22[1] = v24;
    *v22 = v23;
    *(_QWORD *)(a1 + 16) = v22;
    *(_QWORD *)(a1 + 24) = &off_193D40;
    *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
    if ( (_QWORD)v41 )
      _rust_dealloc(v21, v41, 1LL);
    if ( v18 )
      goto LABEL_34;
    goto LABEL_33;
  }
  *(_OWORD *)((char *)v43.m256i_i64 + 4) = v41;
  *(__int64 *)((char *)&v43.m256i_i64[2] + 4) = v42;
  *(_DWORD *)a1 = DWORD1(v47);
  v26 = *(_OWORD *)((char *)&v43.m256i_u64[1] + 4);
  *(_OWORD *)(a1 + 4) = *(_OWORD *)v43.m256i_i8;
  *(_OWORD *)(a1 + 16) = v26;
  if ( !v18 )
  {
LABEL_33:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
    {
      *(_BYTE *)(v17 + 20) = 1;
    }
  }
LABEL_34:
  if ( _InterlockedExchange(v40, 0) == 2 )
    std::sys::sync::mutex::futex::Mutex::wake();
  return a1;
}
