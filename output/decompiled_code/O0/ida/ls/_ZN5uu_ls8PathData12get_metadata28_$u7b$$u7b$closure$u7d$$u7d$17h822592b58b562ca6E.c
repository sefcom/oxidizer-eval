_QWORD *__fastcall uu_ls::PathData::get_metadata::{{closure}}(_QWORD *dest, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r15
  _QWORD *v6; // rbx
  size_t *v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  const void *v10; // r13
  size_t v11; // r12
  unsigned __int64 v12; // rbp
  void *v13; // rbx
  char v14; // al
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r14
  _QWORD *v20; // [rsp+0h] [rbp-398h]
  _QWORD v21[3]; // [rsp+8h] [rbp-390h] BYREF
  _QWORD v22[2]; // [rsp+20h] [rbp-378h] BYREF
  _BYTE v23[8]; // [rsp+30h] [rbp-368h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-360h]
  unsigned __int64 v25; // [rsp+40h] [rbp-358h]
  void *v26; // [rsp+48h] [rbp-350h]
  size_t v27; // [rsp+50h] [rbp-348h]
  _QWORD v28[4]; // [rsp+68h] [rbp-330h] BYREF
  _QWORD v29[6]; // [rsp+88h] [rbp-310h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-2E0h] BYREF
  unsigned __int64 v31; // [rsp+C0h] [rbp-2D8h] BYREF
  _QWORD src[20]; // [rsp+C8h] [rbp-2D0h] BYREF
  _QWORD v33[22]; // [rsp+168h] [rbp-230h] BYREF
  _QWORD v34[22]; // [rsp+218h] [rbp-180h] BYREF
  _BYTE desta[160]; // [rsp+2C8h] [rbp-D0h] BYREF

  v4 = dest;
  if ( (*(_BYTE *)(a2 + 296) & 1) != 0 )
  {
    if ( *(_QWORD *)(a2 + 32) && *(__int64 *)(a2 + 40) >= 0 )
    {
      v20 = dest;
      std::sys::pal::unix::fs::stat(&v30);
      goto LABEL_12;
    }
LABEL_35:
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
  }
  if ( *(_QWORD *)(a2 + 256) )
  {
    std::fs::DirEntry::metadata(v33);
    if ( v33[0] == 2LL )
    {
      *dest = 2LL;
      std::io::error::repr_bitpacked::decode_repr(&v30, v33[1]);
      if ( (unsigned __int8)v30 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v31);
    }
    else
    {
      memcpy(dest, v33, 0xB0uLL);
    }
    return v4;
  }
  if ( !*(_QWORD *)(a2 + 32) || *(__int64 *)(a2 + 40) < 0 )
    goto LABEL_35;
  v20 = dest;
  std::sys::pal::unix::fs::lstat(&v30);
LABEL_12:
  v5 = v31;
  if ( v30 != 2 )
    memcpy(desta, src, sizeof(desta));
  v6 = (_QWORD *)(a2 + 32);
  v7 = (size_t *)(a2 + 40);
  if ( v30 != 2 )
  {
    v4 = v20;
    *v20 = v30;
    v20[1] = v5;
    memcpy(v20 + 2, desta, 0xA0uLL);
    return v4;
  }
  v21[1] = v31;
  v8 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(a3);
  if ( v8 || (v8 = <std::io::stdio::Stdout as std::io::Write>::flush(a3 + 32)) != 0 )
  {
    v21[0] = v8;
    core::result::unwrap_failed(aCalledResultUn_2, 43LL, v21, &off_1FE618, &off_1FF1C0);
  }
  v9 = v5 & 3;
  if ( v9 >= 2 )
  {
    if ( (_DWORD)v9 == 2 )
    {
      if ( HIDWORD(v5) == 9 && (*(_BYTE *)(a2 + 296) & 1) != 0 && *(_QWORD *)(a2 + 256) )
      {
        std::fs::DirEntry::metadata(v34);
        if ( v34[0] == 2LL )
        {
          *v20 = 2LL;
          std::io::error::repr_bitpacked::decode_repr(&v30, v34[1]);
          if ( (unsigned __int8)v30 >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v31);
          v4 = v20;
        }
        else
        {
          v4 = v20;
          memcpy(v20, v34, 0xB0uLL);
        }
        std::io::error::repr_bitpacked::decode_repr(&v30, v5);
        if ( (unsigned __int8)v30 >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v31);
        return v4;
      }
    }
    else if ( (unsigned __int8)std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v5)) == 41 )
    {
      core::hint::unreachable_unchecked::precondition_check();
    }
  }
  v21[2] = v5;
  v10 = (const void *)*v6;
  v11 = *v7;
  core::slice::raw::from_raw_parts::precondition_check(*v6, 1LL, 1LL, *v7);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v30, v11, 0LL);
  v12 = v31;
  if ( v30 )
    alloc::raw_vec::handle_error(v31, src[0]);
  v13 = (void *)src[0];
  core::intrinsics::copy_nonoverlapping::precondition_check(v10, src[0], 1LL, 1LL, v11);
  memcpy(v13, v10, v11);
  v14 = *(_BYTE *)(a2 + 297);
  v24 = v5;
  v25 = v12;
  v26 = v13;
  v27 = v11;
  v15 = v14 & 1;
  v23[1] = v15;
  v23[0] = 2;
  _InterlockedExchange(&uucore::mods::error::EXIT_CODE, v15 + 1);
  v16 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v17 = *(_QWORD *)(v16 + 8);
  v18 = *(_QWORD *)(v16 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v17, 1LL, 1LL, v18);
  v22[0] = v17;
  v22[1] = v18;
  v28[0] = v22;
  v28[1] = <&T as core::fmt::Display>::fmt;
  v28[2] = v23;
  v28[3] = <uu_ls::LsError as core::fmt::Display>::fmt;
  v29[0] = &unk_1FF1D8;
  v29[1] = 3LL;
  v29[4] = 0LL;
  v29[2] = v28;
  v29[3] = 2LL;
  std::io::stdio::_eprint(v29);
  core::ptr::drop_in_place<uu_ls::LsError>(v23);
  v4 = v20;
  *v20 = 2LL;
  return v4;
}
