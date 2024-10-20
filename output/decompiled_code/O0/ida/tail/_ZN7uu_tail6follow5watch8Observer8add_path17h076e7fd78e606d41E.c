        unsigned __int8 a8)
{
  __int64 v9; // rsi
  _OWORD *v16; // rax
  _OWORD *v17; // rbx
  __int128 v18; // xmm0
  __int64 v19; // rsi
  __int128 v20; // kr00_16
  __int64 v21; // r15
  void *v22; // r15
  __int64 v24; // [rsp+8h] [rbp-2F0h]
  char v27[8]; // [rsp+20h] [rbp-2D8h] BYREF
  __int64 v28; // [rsp+28h] [rbp-2D0h]
  __int64 v29; // [rsp+30h] [rbp-2C8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-2C0h]
  __int64 v31; // [rsp+40h] [rbp-2B8h]
  __int64 v32; // [rsp+48h] [rbp-2B0h]
  __int64 v33; // [rsp+50h] [rbp-2A8h]
  __int64 v34; // [rsp+58h] [rbp-2A0h]
  _QWORD v35[2]; // [rsp+60h] [rbp-298h] BYREF
  _QWORD v36[3]; // [rsp+70h] [rbp-288h] BYREF
  __int64 v37; // [rsp+88h] [rbp-270h] BYREF
  __int64 v38; // [rsp+90h] [rbp-268h]
  __int64 v39; // [rsp+98h] [rbp-260h]
  __int128 v40; // [rsp+A0h] [rbp-258h] BYREF
  _OWORD src[10]; // [rsp+B0h] [rbp-248h] BYREF
  _QWORD v42[2]; // [rsp+150h] [rbp-1A8h] BYREF
  _BYTE v43[160]; // [rsp+160h] [rbp-198h] BYREF
  __int64 v44; // [rsp+200h] [rbp-F8h]
  void *v45; // [rsp+208h] [rbp-F0h]
  size_t v46; // [rsp+210h] [rbp-E8h]
  __int64 v47; // [rsp+218h] [rbp-E0h]
  __int64 v48; // [rsp+220h] [rbp-D8h]
  _BYTE dest[160]; // [rsp+228h] [rbp-D0h] BYREF

  v30 = a6;
  v31 = a7;
  if ( *(_BYTE *)(a1 + 142) == 2 )
  {
    if ( a6 )
    {
      if ( *(_QWORD *)a7 )
        (*(void (__fastcall **)(__int64))a7)(a6);
      v9 = *(_QWORD *)(a7 + 8);
      if ( v9 )
        _rust_dealloc(a6, v9, *(_QWORD *)(a7 + 16));
    }
    return 0LL;
  }
  if ( (unsigned __int8)std::path::Path::is_absolute(a2) )
  {
    std::path::Path::to_path_buf(v27);
    goto LABEL_20;
  }
  std::env::current_dir(&v37, a3);
  if ( v37 != 0x8000000000000000LL )
  {
    v35[0] = v37;
    v35[1] = v38;
    v36[0] = v39;
    if ( !v38 || v39 < 0 )
      goto LABEL_33;
    std::path::Path::_join(v27, v38, v39, a2, a3);
    alloc::raw_vec::RawVec<T,A>::current_memory(&v40, v35);
    if ( *((_QWORD *)&v40 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v36, v40, *((_QWORD *)&v40 + 1), *(_QWORD *)&src[0]);
LABEL_20:
    if ( v28 && v29 >= 0 )
    {
      std::sys::pal::unix::fs::stat(&v40);
      v20 = v40;
      if ( (_QWORD)v40 == 2LL )
      {
        std::io::error::repr_bitpacked::decode_repr(&v40, *((_QWORD *)&v40 + 1));
        if ( (unsigned __int8)v40 >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v40 + 8);
      }
      else
      {
        memcpy(dest, src, sizeof(dest));
      }
      v21 = v28;
      if ( v28 )
      {
        if ( v29 >= 0 )
        {
          v34 = v29;
          v36[1] = a6;
          v36[2] = a7;
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v40, a5, 0LL);
          v33 = v21;
          v32 = *((_QWORD *)&v20 + 1);
          v24 = *((_QWORD *)&v40 + 1);
          if ( (_QWORD)v40 )
            alloc::raw_vec::handle_error(*((_QWORD *)&v40 + 1), *(_QWORD *)&src[0]);
          v22 = *(void **)&src[0];
          core::intrinsics::copy_nonoverlapping::precondition_check(a4, *(_QWORD *)&src[0], 1LL, 1LL, a5);
          memcpy(v22, a4, a5);
          v47 = a6;
          v48 = a7;
          v42[0] = v20;
          v42[1] = v32;
          memcpy(v43, dest, sizeof(v43));
          v44 = v24;
          v45 = v22;
          v46 = a5;
          uu_tail::follow::files::FileHandling::insert(a1 + 56, v33, v34, v42, a8);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v40, v27);
          if ( *((_QWORD *)&v40 + 1) )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v29,
              v40,
              *((_QWORD *)&v40 + 1),
              *(_QWORD *)&src[0]);
          return 0LL;
        }
      }
    }
LABEL_33:
    core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
  }
  *(_QWORD *)&v40 = 0x8000000000000000LL;
  *((_QWORD *)&src[0] + 1) = v38;
  v16 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  v17 = v16;
  if ( !v16 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v18 = v40;
  v16[1] = src[0];
  *v16 = v18;
  if ( v30 )
  {
    if ( *(_QWORD *)v31 )
      (*(void (__fastcall **)(__int64))v31)(v30);
    v19 = *(_QWORD *)(v31 + 8);
    if ( v19 )
      _rust_dealloc(v30, v19, *(_QWORD *)(v31 + 16));
  }
  return v17;
}
