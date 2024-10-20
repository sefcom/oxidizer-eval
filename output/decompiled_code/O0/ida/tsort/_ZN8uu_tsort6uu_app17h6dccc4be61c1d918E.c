void *__fastcall uu_tsort::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-12D8h] BYREF
  __int128 v10; // [rsp+8h] [rbp-12D0h]
  __int128 v11; // [rsp+18h] [rbp-12C0h] BYREF
  __int64 v12; // [rsp+28h] [rbp-12B0h]
  _OWORD v13[37]; // [rsp+30h] [rbp-12A8h] BYREF
  _OWORD v14[37]; // [rsp+280h] [rbp-1058h] BYREF
  _QWORD desta[89]; // [rsp+4D0h] [rbp-E08h] BYREF
  _BYTE v16[712]; // [rsp+798h] [rbp-B40h] BYREF
  _QWORD src[89]; // [rsp+A60h] [rbp-878h] BYREF
  _DWORD v18[178]; // [rsp+D28h] [rbp-5B0h] BYREF
  _BYTE v19[744]; // [rsp+FF0h] [rbp-2E8h] BYREF

  *((_QWORD *)&v14[3] + 1) = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, sizeof(desta));
  uucore::format_usage((unsigned int)&v9);
  v4 = v9;
  if ( v9 != 0x8000000000000000LL )
    v13[0] = v10;
  if ( desta[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&desta[58], aOptionsFile);
  desta[58] = v4;
  *(_OWORD *)&desta[59] = v13[0];
  memcpy(v19, desta, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v18, v19);
  *(_QWORD *)&v18[175] |= 0x8000000080uLL;
  memcpy(v16, v18, sizeof(v16));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v13);
  *(_QWORD *)&v13[33] = aFile;
  *((_QWORD *)&v13[33] + 1) = 4LL;
  memcpy(v14, v13, sizeof(v14));
  *(_QWORD *)&v13[0] = asc_1FA63;
  *((_QWORD *)&v13[0] + 1) = 1LL;
  *(_QWORD *)&v13[1] = 0LL;
  *((_QWORD *)&v13[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v11, v13);
  if ( *(_QWORD *)&v14[23] )
  {
    if ( *(_QWORD *)&v14[23] >> 60 )
      core::panicking::panic_nounwind(
        anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792,
        69LL,
        v5,
        *(_QWORD *)&v14[23] >> 60);
    v6 = 16LL * *(_QWORD *)&v14[23];
    *(_QWORD *)&v13[0] = *((_QWORD *)&v14[23] + 1);
    *((_QWORD *)&v13[0] + 1) = 8LL;
    v7 = 16LL;
  }
  else
  {
    v7 = 8LL;
    v6 = 0LL;
  }
  *(_QWORD *)((char *)v13 + v7) = v6;
  if ( *((_QWORD *)&v13[0] + 1) && *(_QWORD *)&v13[1] )
    _rust_dealloc(*(_QWORD *)&v13[0]);
  *(_QWORD *)&v14[24] = v12;
  v14[23] = v11;
  memcpy(v13, v14, 0x248uLL);
  DWORD2(v13[36]) = DWORD2(v14[36]) | 4;
  BYTE12(v13[36]) = BYTE12(v14[36]);
  BYTE13(v13[36]) = 3;
  HIWORD(v13[36]) = HIWORD(v14[36]);
  clap_builder::builder::command::Command::arg_internal(v16, v13);
  memcpy(dest, v16, 0x2C8uLL);
  return dest;
}
