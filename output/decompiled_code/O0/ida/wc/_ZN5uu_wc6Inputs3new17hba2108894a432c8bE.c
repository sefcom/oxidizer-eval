_QWORD *__fastcall uu_wc::Inputs::new(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  void *v4; // r12
  const void *v5; // r15
  void *v6; // r14
  void *v7; // r13
  _OWORD *v8; // rax
  __int128 v9; // xmm0
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v14; // rax
  void **v15; // rcx
  signed __int64 v16; // rdx
  __int128 v17; // [rsp+0h] [rbp-308h] BYREF
  __int64 v18; // [rsp+10h] [rbp-2F8h] BYREF
  int v19; // [rsp+1Ch] [rbp-2ECh] BYREF
  const char *v20; // [rsp+20h] [rbp-2E8h] BYREF
  __int64 v21; // [rsp+28h] [rbp-2E0h]
  void **v22; // [rsp+30h] [rbp-2D8h]
  const char **v23; // [rsp+38h] [rbp-2D0h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+40h] [rbp-2C8h]
  void **v25; // [rsp+48h] [rbp-2C0h]
  __int64 (__fastcall *v26)(); // [rsp+50h] [rbp-2B8h]
  _QWORD v27[22]; // [rsp+58h] [rbp-2B0h] BYREF
  __int128 v28; // [rsp+108h] [rbp-200h]
  __int128 v29; // [rsp+118h] [rbp-1F0h]
  char v30[8]; // [rsp+128h] [rbp-1E0h] BYREF
  char v31[8]; // [rsp+130h] [rbp-1D8h] BYREF
  char **v32; // [rsp+138h] [rbp-1D0h] BYREF
  __int64 v33; // [rsp+140h] [rbp-1C8h]
  const char ***v34; // [rsp+148h] [rbp-1C0h]
  __int128 v35; // [rsp+150h] [rbp-1B8h]
  __int128 v36; // [rsp+160h] [rbp-1A8h]
  __int128 v37; // [rsp+170h] [rbp-198h]
  __int64 v38; // [rsp+180h] [rbp-188h]
  __int64 (__fastcall *v39)(__int64); // [rsp+188h] [rbp-180h]
  _OWORD v40[3]; // [rsp+190h] [rbp-178h] BYREF
  __int64 v41; // [rsp+1C0h] [rbp-148h]
  __int128 v42; // [rsp+1C8h] [rbp-140h] BYREF
  __int64 v43; // [rsp+1D8h] [rbp-130h]
  void *src[23]; // [rsp+1E0h] [rbp-128h] BYREF
  __int64 (__fastcall *v45)(__int64); // [rsp+298h] [rbp-70h] BYREF
  __int128 v46; // [rsp+2A0h] [rbp-68h]
  __int128 v47; // [rsp+2B0h] [rbp-58h]
  __int128 v48; // [rsp+2C0h] [rbp-48h]
  __int64 v49; // [rsp+2D0h] [rbp-38h]

  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(&v45, a2, aFiles, 5LL, &off_118A60);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v27,
    a2,
    anon_77474d128c52bab738a0ce88bc24ae41_36_llvm_9737630618734806200,
    11LL);
  v20 = anon_77474d128c52bab738a0ce88bc24ae41_36_llvm_9737630618734806200;
  v21 = 11LL;
  if ( v27[0] )
  {
    *(_OWORD *)&src[6] = *(_OWORD *)&v27[7];
    *(_OWORD *)&src[4] = *(_OWORD *)&v27[5];
    *(_OWORD *)&src[2] = *(_OWORD *)&v27[3];
    *(_OWORD *)src = *(_OWORD *)&v27[1];
    v23 = &v20;
    v24 = <&T as core::fmt::Display>::fmt;
    v25 = src;
    v26 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v32 = &anon_56f426745e7d4c5372634db4f0431a2b_3_llvm_8267291718986063344;
    v33 = 2LL;
    v34 = &v23;
    v35 = 2uLL;
    core::panicking::panic_fmt(&v32, &off_118A78);
  }
  if ( v45 )
  {
    if ( v27[1] )
    {
      v39 = v45;
      v40[0] = v46;
      v40[1] = v47;
      v40[2] = v48;
      v41 = v49;
      v2 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(
             v40,
             a2,
             v27[1]);
      if ( !v2 || (v3 = v39(v2)) == 0 )
        core::option::unwrap_failed(&off_118A90);
      if ( !v41 )
        core::panicking::panic_const::panic_const_sub_overflow(&anon_77474d128c52bab738a0ce88bc24ae41_3_llvm_9737630618734806200);
      --v41;
      if ( *(_QWORD *)(v3 + 8) && *(__int64 *)(v3 + 16) >= 0 )
      {
        std::sys::os_str::bytes::Slice::to_string_lossy(src);
        v4 = src[0];
        v5 = src[1];
        v6 = src[2];
        if ( src[0] == (void *)0x8000000000000000LL )
        {
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(v27, src[2], 0LL);
          v4 = (void *)v27[1];
          if ( v27[0] )
            alloc::raw_vec::handle_error(v27[1], v27[2]);
          v7 = (void *)v27[2];
          core::intrinsics::copy_nonoverlapping::precondition_check(v5, v27[2], 1LL, 1LL, v6);
          memcpy(v7, v5, (size_t)v6);
          v5 = v7;
        }
        *((_QWORD *)&v28 + 1) = v4;
        *(_QWORD *)&v29 = v5;
        *((_QWORD *)&v29 + 1) = v6;
        *(_QWORD *)&v28 = 0x8000000000000001LL;
        v8 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v8 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v9 = v28;
        v8[1] = v29;
        *v8 = v9;
        a1[1] = v8;
        a1[2] = &anon_56f426745e7d4c5372634db4f0431a2b_25_llvm_8267291718986063344;
        *a1 = 3LL;
        return a1;
      }
LABEL_47:
      core::panicking::panic_nounwind(anon_dd263a7f757787748cb25eec96e5d9c9_4_llvm_2301497830685427482, 162LL);
    }
    v27[7] = v49;
    *(_OWORD *)&v27[5] = v48;
    *(_OWORD *)&v27[3] = v47;
    *(_OWORD *)&v27[1] = v46;
    v27[0] = v45;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v42, v27);
    *a1 = 1LL;
    *(_OWORD *)(a1 + 1) = v42;
    v12 = v43;
LABEL_30:
    a1[3] = v12;
    return a1;
  }
  if ( !v27[1] )
  {
    *a1 = 0LL;
    return a1;
  }
  v10 = *(_BYTE **)(v27[1] + 8LL);
  if ( !v10 )
    goto LABEL_47;
  v11 = *(_QWORD *)(v27[1] + 16LL);
  if ( v11 < 0 )
    goto LABEL_47;
  if ( v11 == 1 && *v10 == 45 )
  {
    BYTE8(v17) = 0;
    *(_QWORD *)&v17 = 0x8000000000000001LL;
    std::io::stdio::stdin();
    v19 = 0;
    std::fs::File::metadata(v27, &v19);
    if ( v27[0] == 2LL )
    {
      std::io::error::repr_bitpacked::decode_repr(v30);
      if ( v30[0] >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v31);
      goto LABEL_29;
    }
    if ( (v27[7] & 0xF000) == 0x8000 && v27[10] < 0xA00001uLL )
    {
      uu_wc::files0_iter_stdin(v27);
      core::iter::adapters::try_process(&v23, v27);
      v16 = (signed __int64)v23;
      v14 = (__int64)v24;
      v15 = v25;
      goto LABEL_39;
    }
LABEL_29:
    *a1 = 2LL;
    *(_OWORD *)(a1 + 1) = v17;
    v12 = v18;
    goto LABEL_30;
  }
  *(_QWORD *)&v17 = 0x8000000000000000LL;
  *((_QWORD *)&v17 + 1) = v10;
  v18 = v11;
  std::sys::pal::unix::fs::stat(v27);
  if ( v27[0] == 2LL )
  {
    src[1] = (void *)v27[1];
    goto LABEL_27;
  }
  memcpy(src, v27, 0xB0uLL);
  if ( src[0] == (char *)&dword_0 + 2 )
  {
LABEL_27:
    std::io::error::repr_bitpacked::decode_repr(v27);
    if ( LOBYTE(v27[0]) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v27[1]);
    goto LABEL_29;
  }
  if ( ((__int64)src[7] & 0xF000) != 0x8000 || src[10] > (void *)0xA00000 )
    goto LABEL_29;
  uu_wc::files0_iter_file(&v32, *((_QWORD *)&v17 + 1), v18);
  v14 = v33;
  v15 = (void **)v34;
  if ( v32 == (char **)0x8000000000000001LL )
    goto LABEL_40;
  v27[9] = v38;
  *(_OWORD *)&v27[7] = v37;
  *(_OWORD *)&v27[5] = v36;
  *(_OWORD *)&v27[3] = v35;
  v27[0] = v32;
  v27[1] = v33;
  v27[2] = v34;
  core::iter::adapters::try_process(&v20, v27);
  v16 = (signed __int64)v20;
  v14 = v21;
  v15 = v22;
LABEL_39:
  if ( v16 > (__int64)0x8000000000000001LL )
  {
    *a1 = 1LL;
    a1[1] = v16;
    a1[2] = v14;
    a1[3] = v15;
    goto LABEL_41;
  }
LABEL_40:
  a1[1] = v14;
  a1[2] = v15;
  *a1 = 3LL;
LABEL_41:
  if ( (__int64)v17 >= (__int64)0x8000000000000002LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v27, &v17);
    if ( v27[1] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v18, v27[0], v27[1], v27[2]);
  }
  return a1;
}
