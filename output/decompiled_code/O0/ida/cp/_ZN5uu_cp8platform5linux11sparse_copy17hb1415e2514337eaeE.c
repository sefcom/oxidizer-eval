unsigned __int64 __fastcall uu_cp::platform::linux::sparse_copy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r12
  int v7; // ebx
  unsigned __int64 v8; // r15
  __int64 v10; // r13
  __int64 v11; // r14
  unsigned __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v18; // rax
  bool v19; // cf
  int v20; // [rsp+Ch] [rbp-1DCh] BYREF
  int v21; // [rsp+10h] [rbp-1D8h] BYREF
  char v22; // [rsp+17h] [rbp-1D1h] BYREF
  __int64 v23; // [rsp+18h] [rbp-1D0h]
  __int64 v24; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-1C0h]
  __int64 v26; // [rsp+30h] [rbp-1B8h]
  _DWORD v27[2]; // [rsp+38h] [rbp-1B0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-1A8h]
  int v29; // [rsp+48h] [rbp-1A0h] BYREF
  int fd; // [rsp+4Ch] [rbp-19Ch]
  unsigned __int64 v31; // [rsp+50h] [rbp-198h]
  _QWORD v32[10]; // [rsp+58h] [rbp-190h] BYREF
  __off_t length; // [rsp+A8h] [rbp-140h]
  _QWORD v34[11]; // [rsp+108h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+160h] [rbp-88h]

  v24 = 0x1B600000000LL;
  LODWORD(v25) = 1;
  WORD2(v25) = 0;
  std::fs::OpenOptions::_open(v27, &v24, a1, a2);
  if ( v27[0] )
    return v28;
  v20 = v27[1];
  v24 = 0x1B600000000LL;
  LODWORD(v25) = 16777472;
  WORD2(v25) = 1;
  std::fs::OpenOptions::_open(&v29, &v24, a3, a4);
  if ( v29 )
  {
    v6 = v31;
LABEL_13:
    std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)v20);
    close(v20);
    return v6;
  }
  v7 = fd;
  v21 = fd;
  std::fs::File::metadata(v32, &v20);
  if ( v32[0] == 2LL )
  {
    v6 = v32[1];
LABEL_12:
    std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)v21);
    close(v21);
    goto LABEL_13;
  }
  v8 = length;
  if ( length < 0 )
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v22, &unk_182DD8, &off_182F78);
  if ( ftruncate(v7, length) < 0 )
  {
    v6 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
    goto LABEL_12;
  }
  std::fs::File::metadata(v34, &v21);
  if ( v34[0] == 2LL )
  {
    v6 = v34[1];
    goto LABEL_12;
  }
  v10 = v35;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v24, v35, 1LL);
  v23 = v25;
  if ( v24 )
    alloc::raw_vec::handle_error(v23, v26);
  v11 = v26;
  if ( v8 )
  {
    if ( !v26 || v10 < 0 )
      core::panicking::panic_nounwind(anon_60fe5ecc8a5a6f6a64f7c14fee2afab1_17_llvm_16066862953719322457, 166LL);
    v12 = 0LL;
    while ( 1 )
    {
      v13 = v11;
      v14 = <std::fs::File as std::io::Read>::read(&v20, v11, v10);
      v6 = v15;
      if ( v14 )
        break;
      if ( v10 < v15 )
        core::slice::index::slice_end_index_len_fail(v15, v10, &off_182F90);
      v16 = 0LL;
      while ( v15 != v16 )
      {
        if ( *(_BYTE *)(v11 + v16++) != 0 )
        {
          v13 = v11;
          v18 = std::os::unix::fs::FileExt::write_all_at(&v21, v11, v15, v12);
          if ( v18 )
          {
            v6 = v18;
            goto LABEL_32;
          }
          break;
        }
      }
      v19 = __CFADD__(v6, v12);
      v12 += v6;
      if ( v19 )
        core::panicking::panic_const::panic_const_add_overflow(&off_182FA8, v13);
      if ( v12 >= v8 )
        goto LABEL_28;
    }
LABEL_32:
    if ( v23 )
      _rust_dealloc(v11, v23, 1LL);
    goto LABEL_12;
  }
LABEL_28:
  if ( v23 )
    _rust_dealloc(v11, v23, 1LL);
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)v21);
  close(v21);
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)v20);
  close(v20);
  return 0LL;
}
