        __int64 a4)
{
  unsigned __int64 v6; // rbp
  int v7; // ebx
  unsigned __int64 v8; // r15
  int v9; // ebx
  unsigned __int64 v10; // r12
  __int64 v11; // r14
  __off_t v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r13
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // r15
  __int64 v19; // rbx
  int v20; // ebx
  __off_t v21; // rsi
  int v23; // [rsp+4h] [rbp-174h] BYREF
  int v24; // [rsp+8h] [rbp-170h] BYREF
  char v25; // [rsp+Fh] [rbp-169h] BYREF
  __int64 v26; // [rsp+10h] [rbp-168h]
  __int64 v27; // [rsp+18h] [rbp-160h] BYREF
  __int64 v28; // [rsp+20h] [rbp-158h]
  __int64 v29; // [rsp+28h] [rbp-150h]
  __int64 v30; // [rsp+30h] [rbp-148h]
  int v31; // [rsp+3Ch] [rbp-13Ch]
  unsigned __int64 v32; // [rsp+40h] [rbp-138h]
  unsigned __int64 v33; // [rsp+48h] [rbp-130h]
  __off_t offset; // [rsp+50h] [rbp-128h]
  _DWORD v35[2]; // [rsp+58h] [rbp-120h] BYREF
  __int64 v36; // [rsp+60h] [rbp-118h]
  int v37; // [rsp+68h] [rbp-110h] BYREF
  int fd; // [rsp+6Ch] [rbp-10Ch]
  unsigned __int64 v39; // [rsp+70h] [rbp-108h]
  _QWORD v40[2]; // [rsp+78h] [rbp-100h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-F0h]
  char v42; // [rsp+90h] [rbp-E8h]
  _QWORD v43[10]; // [rsp+98h] [rbp-E0h] BYREF
  __off_t length; // [rsp+E8h] [rbp-90h]

  v27 = 0x1B600000000LL;
  LODWORD(v28) = 1;
  WORD2(v28) = 0;
  std::fs::OpenOptions::_open(v35, &v27, a1, a2);
  if ( v35[0] )
    return v36;
  v23 = v35[1];
  v27 = 0x1B600000000LL;
  LODWORD(v28) = 16777472;
  WORD2(v28) = 1;
  std::fs::OpenOptions::_open(&v37, &v27, a3, a4);
  if ( v37 )
  {
    v6 = v39;
LABEL_41:
    std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)v23);
    close(v23);
    return v6;
  }
  v7 = fd;
  v24 = fd;
  std::fs::File::metadata(v43, &v23);
  if ( v43[0] == 2LL )
  {
    v6 = v43[1];
LABEL_40:
    std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)v24);
    close(v24);
    goto LABEL_41;
  }
  v8 = length;
  if ( length < 0 )
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v25, &unk_182DD8, &off_182F30);
  if ( ftruncate(v7, length) < 0 )
  {
    v6 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
    goto LABEL_40;
  }
  v9 = v23;
  v10 = 0x1000000LL;
  if ( v8 < 0x1000000 )
    v10 = v8;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v27, v10, 1LL);
  v26 = v28;
  if ( v27 )
    alloc::raw_vec::handle_error(v26, v29);
  v11 = v29;
  v12 = lseek(v9, 0LL, 3);
  v13 = lseek(v9, v12, 4);
  v30 = v12;
  if ( v12 != -1 && v13 != -1 )
  {
    v14 = v10 - 1;
    v33 = v8;
    v31 = v9;
    v32 = v10 - 1;
    while ( v30 >= -1 && v13 >= -1 )
    {
      if ( !v8 )
        core::panicking::panic(
          anon_d6a1a7366457195d1067c1353ddc908a_4_llvm_6178963345535870772,
          27LL,
          &anon_d6a1a7366457195d1067c1353ddc908a_6_llvm_6178963345535870772);
      offset = v13;
      v15 = v13 - v30;
      v40[0] = 0LL;
      v40[1] = v13 - v30;
      v41 = v14;
      v42 = 1;
      while ( 1 )
      {
        v16 = (v42 & 1) != 0 ? 0LL : v41;
        v42 = 0;
        if ( !<core::ops::range::Range<T> as core::iter::range::RangeIteratorImpl>::spec_nth(v40, v16) )
          break;
        v18 = v15 - v17;
        if ( __OFSUB__(v15, v17) )
          core::panicking::panic_const::panic_const_sub_overflow(&off_182F48);
        if ( v18 >= v10 )
          v18 = v10;
        if ( !v11 )
          core::panicking::panic_nounwind(anon_dd6310c77d121ecce151d075805ee620_25_llvm_1613436602710632571, 166LL);
        v19 = v30 + v17;
        if ( __OFADD__(v30, v17) )
          core::panicking::panic_const::panic_const_add_overflow(&off_182F60, v16);
        v6 = std::os::unix::fs::FileExt::read_exact_at(&v23, v11, v18, v19);
        if ( !v6 )
        {
          v6 = std::os::unix::fs::FileExt::write_all_at(&v24, v11, v18, v19);
          if ( !v6 )
            continue;
        }
        goto LABEL_38;
      }
      v20 = v31;
      v21 = lseek(v31, offset, 3);
      v13 = lseek(v20, v21, 4);
      v30 = v21;
      v8 = v33;
      v14 = v32;
      if ( v21 == -1 || v13 == -1 )
        goto LABEL_33;
    }
    v6 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
LABEL_38:
    if ( v26 )
      _rust_dealloc(v11, v26, 1LL);
    goto LABEL_40;
  }
LABEL_33:
  if ( v26 )
    _rust_dealloc(v11, v26, 1LL);
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)v24);
  close(v24);
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)v23);
  close(v23);
  return 0LL;
}
