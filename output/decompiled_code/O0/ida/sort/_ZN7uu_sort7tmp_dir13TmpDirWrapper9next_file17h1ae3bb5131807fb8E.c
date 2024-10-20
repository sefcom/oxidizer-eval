_QWORD *__fastcall uu_sort::tmp_dir::TmpDirWrapper::next_file(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _OWORD *v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 (__fastcall **v7)(); // rdx
  _BYTE *v8; // r12
  __int64 v9; // rt0
  char v10; // of
  __int32 v11; // r13d
  char v12; // bp
  unsigned int inited; // eax
  __int64 v14; // r12
  __int64 v15; // r12
  char v16; // bp
  _QWORD *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r15
  const char *v21; // r12
  __int64 v22; // r8
  __int64 v23; // r14
  __int64 v24; // r15
  _OWORD *v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // xmm0
  volatile __int32 *v30; // r14
  volatile __int32 *v31; // rdi
  __m256i v33; // [rsp+0h] [rbp-2D8h] BYREF
  __int128 v34; // [rsp+20h] [rbp-2B8h]
  __int128 v35; // [rsp+30h] [rbp-2A8h]
  volatile __int32 *v36; // [rsp+40h] [rbp-298h]
  char v37; // [rsp+48h] [rbp-290h]
  volatile __int32 *v38; // [rsp+50h] [rbp-288h]
  _BYTE *v39; // [rsp+58h] [rbp-280h]
  __int64 v40; // [rsp+60h] [rbp-278h] BYREF
  _BYTE *v41; // [rsp+68h] [rbp-270h]
  __int64 v42; // [rsp+70h] [rbp-268h]
  __int128 v43; // [rsp+78h] [rbp-260h] BYREF
  __int64 v44; // [rsp+88h] [rbp-250h]
  __int128 v45; // [rsp+90h] [rbp-248h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-238h] BYREF
  volatile __int32 *v47; // [rsp+B8h] [rbp-220h]
  char v48; // [rsp+C0h] [rbp-218h]
  __int64 v49; // [rsp+C8h] [rbp-210h] BYREF
  const char *v50; // [rsp+D0h] [rbp-208h]
  __int64 v51; // [rsp+D8h] [rbp-200h]
  __int64 v52; // [rsp+E0h] [rbp-1F8h]
  __int64 v53; // [rsp+E8h] [rbp-1F0h]
  __int64 v54; // [rsp+F0h] [rbp-1E8h]
  __int16 v55; // [rsp+F8h] [rbp-1E0h]
  __int128 v56; // [rsp+100h] [rbp-1D8h] BYREF
  __int128 v57; // [rsp+110h] [rbp-1C8h] BYREF
  _QWORD *v58; // [rsp+128h] [rbp-1B0h]
  _DWORD v59[2]; // [rsp+130h] [rbp-1A8h] BYREF
  __int64 v60; // [rsp+138h] [rbp-1A0h]
  __int64 v61; // [rsp+140h] [rbp-198h] BYREF
  char v62; // [rsp+148h] [rbp-190h]
  void *v63; // [rsp+150h] [rbp-188h] BYREF
  char v64; // [rsp+158h] [rbp-180h]
  _BYTE v65[31]; // [rsp+160h] [rbp-178h] BYREF
  __int128 v66; // [rsp+188h] [rbp-150h] BYREF
  __int64 v67; // [rsp+198h] [rbp-140h]
  _QWORD v68[3]; // [rsp+1A0h] [rbp-138h] BYREF
  _BYTE v69[20]; // [rsp+1BCh] [rbp-11Ch]
  __int64 v70; // [rsp+1D0h] [rbp-108h]
  _QWORD v71[3]; // [rsp+1D8h] [rbp-100h] BYREF
  __int128 v72; // [rsp+1F0h] [rbp-E8h]
  __int128 v73; // [rsp+200h] [rbp-D8h]
  __int128 v74; // [rsp+218h] [rbp-C0h] BYREF
  __int64 v75; // [rsp+228h] [rbp-B0h]
  _OWORD v76[2]; // [rsp+230h] [rbp-A8h] BYREF
  _QWORD v77[6]; // [rsp+250h] [rbp-88h] BYREF
  _BYTE v78[88]; // [rsp+280h] [rbp-58h] BYREF

  v2 = a1;
  if ( *(_BYTE *)(a2 + 40) != 2 )
    goto LABEL_45;
  if ( *(_QWORD *)(a2 + 56) )
  {
    v77[0] = 0LL;
    core::panicking::assert_failed(
      0LL,
      a2 + 56,
      &anon_b3000760e55b61a73169a153c91e0e7d_30_llvm_17430875605603742656,
      v77,
      &off_1D48C0);
  }
  v54 = 6LL;
  v52 = 1LL;
  v53 = 0LL;
  v55 = 0;
  LODWORD(v49) = 0;
  v50 = aUutilsSort;
  v51 = 11LL;
  tempfile::Builder::tempdir_in(&v66, &v49, a2);
  if ( (_BYTE)v67 == 2 )
  {
    uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}((__int64)&v33, a2, v66);
    *(_OWORD *)v65 = *(_OWORD *)&v33.m256i_i8[1];
    *(_OWORD *)&v65[15] = *(_OWORD *)&v33.m256i_u64[2];
    v72 = v34;
    v73 = v35;
    if ( v33.m256i_i8[0] != 9 )
    {
      v35 = v73;
      v34 = v72;
      *(_OWORD *)&v33.m256i_i8[1] = *(_OWORD *)v65;
      *(_OWORD *)&v33.m256i_u64[2] = *(_OWORD *)&v65[15];
      v3 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 64LL, 0LL);
      if ( !v3 )
        alloc::alloc::handle_alloc_error(8LL, 64LL);
      v4 = *(_OWORD *)v33.m256i_i8;
      v5 = *(_OWORD *)&v33.m256i_u64[2];
      v6 = v34;
      v3[3] = v35;
      v3[2] = v6;
      v3[1] = v5;
      *v3 = v4;
      v7 = &anon_106514630be1c9ef1de9e84b8238e531_22_llvm_16179947721019886102;
      goto LABEL_17;
    }
  }
  else
  {
    *(_QWORD *)&v65[23] = v67;
    *(_OWORD *)&v65[7] = v66;
  }
  v8 = &v65[7];
  if ( *(_BYTE *)(a2 + 40) != 2 )
    core::ptr::drop_in_place<tempfile::dir::TempDir>(a2 + 24);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)&v65[23];
  *(_OWORD *)(a2 + 24) = *(_OWORD *)&v65[7];
  if ( *(_BYTE *)(a2 + 40) == 2 )
    core::option::unwrap_failed(&off_1D48D8);
  std::path::Path::to_path_buf(&v74, *(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32));
  v9 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 48));
  if ( (v9 < 0) ^ v10 | (v9 == 0) )
    BUG();
  *((_QWORD *)&v46 + 1) = *(_QWORD *)(a2 + 48);
  v45 = v74;
  *(_QWORD *)&v46 = v75;
  if ( ctrlc::INIT )
    goto LABEL_13;
  v8 = &ctrlc::INIT_LOCK;
  if ( (unsigned int)core::sync::atomic::atomic_compare_exchange(&ctrlc::INIT_LOCK, 0LL, 1LL, 2LL, 0LL) )
    std::sys::sync::mutex::futex::Mutex::lock_contended(&ctrlc::INIT_LOCK);
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    v12 = std::panicking::panic_count::is_zero_slow_path() ^ 1;
  else
    v12 = 0;
  if ( (unsigned __int8)core::sync::atomic::atomic_load((char *)&ctrlc::INIT_LOCK + 4, 0LL) )
  {
    v63 = &ctrlc::INIT_LOCK;
    v64 = v12;
    core::result::unwrap_failed(aCalledResultUn_5, 43LL, &v63, &off_1D4788, &off_1D4800);
  }
  v47 = (volatile __int32 *)&ctrlc::INIT_LOCK;
  v48 = v12;
  if ( !ctrlc::INIT )
  {
    v57 = v46;
    v56 = v45;
    v11 = 1;
    inited = ctrlc::platform::unix::init_os_handler(1LL);
    if ( inited != 17 )
    {
      if ( inited == 134 )
      {
        v38 = (volatile __int32 *)&ctrlc::INIT_LOCK;
        v33.m256i_i64[2] = 0x8000000000000000LL;
        v33.m256i_i64[0] = 0LL;
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v40, 6LL, 0LL);
        v39 = v41;
        if ( v40 )
          alloc::raw_vec::handle_error(v39, v42);
        v14 = v42;
        core::intrinsics::copy_nonoverlapping::precondition_check(&unk_36477, v42, 1LL, 1LL, 6LL);
        *(_WORD *)(v14 + 4) = 25389;
        *(_DWORD *)v14 = 1819440227;
        v71[0] = v39;
        v71[1] = v14;
        v71[2] = 6LL;
        std::thread::Builder::name(v78, &v33, v71);
        v76[1] = v57;
        v76[0] = v56;
        std::thread::Builder::spawn_unchecked_(&v40, v78, v76, 0LL);
        v8 = v41;
        if ( v40 )
        {
          v68[0] = v40;
          v68[1] = v41;
          v68[2] = v42;
          core::ptr::drop_in_place<std::thread::JoinInner<()>>(v68);
          ctrlc::INIT = 1;
          v11 = 3;
          if ( (v12 & 1) != 0 )
            goto LABEL_43;
        }
        else
        {
          v11 = 2;
          if ( (v12 & 1) != 0 )
            goto LABEL_43;
        }
        goto LABEL_42;
      }
      v8 = (_BYTE *)std::io::error::Error::new(39LL, inited);
      v11 = 2;
    }
    if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v57 + 1)) )
      alloc::sync::Arc<T,A>::drop_slow((char *)&v57 + 8);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v56);
    v38 = v47;
    if ( (v48 & 1) != 0 )
    {
LABEL_43:
      if ( _InterlockedExchange(v38, 0) == 2 )
      {
        ((void (*)(void))std::sys::sync::mutex::futex::Mutex::wake)();
        if ( v11 == 3 )
          goto LABEL_45;
      }
      else if ( v11 == 3 )
      {
        goto LABEL_45;
      }
      goto LABEL_16;
    }
LABEL_42:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
    {
      *((_BYTE *)v38 + 4) = 1;
    }
    goto LABEL_43;
  }
  if ( !v12
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
  {
    *((_BYTE *)&ctrlc::INIT_LOCK + 4) = 1;
  }
  if ( _InterlockedExchange((volatile __int32 *)&ctrlc::INIT_LOCK, 0) == 2 )
    std::sys::sync::mutex::futex::Mutex::wake(&ctrlc::INIT_LOCK);
LABEL_13:
  if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v46 + 1)) )
    alloc::sync::Arc<T,A>::drop_slow((char *)&v46 + 8);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v45);
  v11 = 1;
LABEL_16:
  v33.m256i_i32[0] = v11;
  v33.m256i_i64[1] = (__int64)v8;
  v3 = (_OWORD *)uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}((__int64)&v33);
  if ( v3 )
  {
LABEL_17:
    a1[2] = v3;
    a1[3] = v7;
    a1[1] = 0x8000000000000000LL;
    return v2;
  }
LABEL_45:
  v15 = *(_QWORD *)(a2 + 48);
  if ( (unsigned int)core::sync::atomic::atomic_compare_exchange(v15 + 16, 0LL, 1LL, 2LL, 0LL) )
    std::sys::sync::mutex::futex::Mutex::lock_contended(v15 + 16);
  v58 = a1;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    v16 = std::panicking::panic_count::is_zero_slow_path() ^ 1;
  else
    v16 = 0;
  if ( (unsigned __int8)core::sync::atomic::atomic_load(v15 + 20, 0LL) )
  {
    v61 = v15 + 16;
    v62 = v16;
    core::result::unwrap_failed(aCalledResultUn_5, 43LL, &v61, &off_1D4788, &off_1D4958);
  }
  v36 = (volatile __int32 *)(v15 + 16);
  v37 = v16;
  v17 = (_QWORD *)(a2 + 56);
  v49 = 0LL;
  v50 = (_BYTE *)(&dword_0 + 1);
  v51 = 0LL;
  *(_QWORD *)&v35 = 32LL;
  BYTE8(v35) = 3;
  v33.m256i_i64[0] = 0LL;
  v33.m256i_i64[2] = 0LL;
  *(_QWORD *)&v34 = &v49;
  *((_QWORD *)&v34 + 1) = &anon_4be49b5f23b11e5efadbc1996a78d621_0_llvm_1001870993357062971;
  if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt(a2 + 56, &v33) )
    core::result::unwrap_failed(
      anon_4be49b5f23b11e5efadbc1996a78d621_2_llvm_1001870993357062971,
      55LL,
      v77,
      &anon_7f295c9beed7725822dd3881ae5006b0_15_llvm_2380350054417695862,
      &anon_4be49b5f23b11e5efadbc1996a78d621_4_llvm_1001870993357062971);
  v20 = v49;
  v21 = v50;
  if ( *v17 == -1LL )
    core::panicking::panic_const::panic_const_add_overflow(&off_1D4970, &v33, v18, v19);
  v22 = v51;
  *(_QWORD *)(a2 + 56) = *v17 + 1LL;
  if ( *(_BYTE *)(a2 + 40) == 2 )
    core::option::unwrap_failed(&off_1D4988);
  v2 = v58;
  if ( !v21 || v22 < 0 )
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_33_llvm_17008735617955824143, 162LL);
  std::path::Path::_join(&v43, *(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), v21);
  if ( v20 )
    _rust_dealloc(v21, v20, 1LL);
  v33.m256i_i64[0] = 0x1B600000000LL;
  v33.m256i_i32[2] = 16777472;
  v33.m256i_i16[6] = 1;
  v23 = *((_QWORD *)&v43 + 1);
  v24 = v44;
  core::slice::raw::from_raw_parts::precondition_check(*((_QWORD *)&v43 + 1), 1LL, 1LL, v44);
  std::fs::OpenOptions::_open(v59, &v33, v23, v24);
  if ( v59[0] )
  {
    v33.m256i_i8[0] = 4;
    v33.m256i_i64[1] = v60;
    v25 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 64LL, 0LL);
    if ( !v25 )
      alloc::alloc::handle_alloc_error(8LL, 64LL);
    v26 = *(_OWORD *)v33.m256i_i8;
    v27 = *(_OWORD *)&v33.m256i_u64[2];
    v28 = v34;
    v25[3] = v35;
    v25[2] = v28;
    v25[1] = v27;
    *v25 = v26;
    v2[2] = v25;
    v2[3] = &anon_106514630be1c9ef1de9e84b8238e531_22_llvm_16179947721019886102;
    v2[1] = 0x8000000000000000LL;
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v43);
    if ( (v37 & 1) != 0 )
      goto LABEL_63;
    goto LABEL_62;
  }
  *(_OWORD *)&v69[4] = v43;
  v70 = v44;
  *(_DWORD *)v2 = v59[1];
  v29 = *(_OWORD *)v69;
  v2[2] = *(_QWORD *)&v69[12];
  v2[3] = v70;
  *(_OWORD *)((char *)v2 + 4) = v29;
  if ( (v37 & 1) == 0 )
  {
LABEL_62:
    v30 = v36;
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
    {
      *((_BYTE *)v30 + 4) = 1;
    }
  }
LABEL_63:
  v31 = v36;
  if ( _InterlockedExchange(v36, 0) == 2 )
    std::sys::sync::mutex::futex::Mutex::wake(v31);
  return v2;
}
