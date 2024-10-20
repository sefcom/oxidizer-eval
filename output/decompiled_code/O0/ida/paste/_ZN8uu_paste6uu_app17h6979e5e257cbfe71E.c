void *__fastcall uu_paste::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int128 v13; // [rsp+0h] [rbp-2418h] BYREF
  __int64 v14; // [rsp+10h] [rbp-2408h]
  _OWORD v15[37]; // [rsp+20h] [rbp-23F8h] BYREF
  __int64 v16; // [rsp+278h] [rbp-21A0h] BYREF
  __int128 v17; // [rsp+280h] [rbp-2198h]
  _OWORD v18[37]; // [rsp+290h] [rbp-2188h] BYREF
  _BYTE v19[588]; // [rsp+4E0h] [rbp-1F38h] BYREF
  int v20; // [rsp+72Ch] [rbp-1CECh]
  _BYTE v21[588]; // [rsp+730h] [rbp-1CE8h] BYREF
  int v22; // [rsp+97Ch] [rbp-1A9Ch]
  _OWORD v23[37]; // [rsp+980h] [rbp-1A98h] BYREF
  _DWORD v24[178]; // [rsp+BD0h] [rbp-1848h] BYREF
  _DWORD v25[178]; // [rsp+E98h] [rbp-1580h] BYREF
  _QWORD v26[89]; // [rsp+1160h] [rbp-12B8h] BYREF
  _BYTE v27[712]; // [rsp+1428h] [rbp-FF0h] BYREF
  _BYTE v28[712]; // [rsp+16F0h] [rbp-D28h] BYREF
  _BYTE v29[592]; // [rsp+19B8h] [rbp-A60h] BYREF
  _QWORD src[89]; // [rsp+1C08h] [rbp-810h] BYREF
  _BYTE v31[592]; // [rsp+1ED0h] [rbp-548h] BYREF
  _BYTE desta[760]; // [rsp+2120h] [rbp-2F8h] BYREF

  v26[81] = 0LL;
  *((_QWORD *)&v18[21] + 1) = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v24, desta);
  uucore::format_usage((unsigned int)&v16);
  v4 = v16;
  if ( v16 != 0x8000000000000000LL )
    v15[0] = v17;
  if ( *(_QWORD *)&v24[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v24[116], aOptionsFile);
  *(_QWORD *)&v24[116] = v4;
  *(_OWORD *)&v24[118] = v15[0];
  memcpy(v25, v24, 0x2BCuLL);
  *(_QWORD *)&v25[175] = *(_QWORD *)&v24[175] | 0x8000000080LL;
  v25[177] = v24[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[33] = aSerial_0;
  *((_QWORD *)&v15[33] + 1) = 6LL;
  memcpy(v19, v15, 0x220uLL);
  *(_OWORD *)&v19[560] = v15[35];
  *(_QWORD *)&v19[580] = *(_QWORD *)((char *)&v15[36] + 4);
  v20 = HIDWORD(v15[36]);
  *(_QWORD *)&v19[544] = aSerial_0;
  *(_QWORD *)&v19[552] = 6LL;
  *(_DWORD *)&v19[576] = 115;
  *(_QWORD *)&v15[0] = 0LL;
  *((_QWORD *)&v15[0] + 1) = 1LL;
  *(_QWORD *)&v15[1] = 0LL;
  alloc::string::String::push_str(v15, aPasteOneFileAt, 47LL);
  v5 = *(_QWORD *)&v15[0];
  v18[0] = *(_OWORD *)((char *)v15 + 8);
  if ( *(_QWORD *)&v15[0] != 0x8000000000000000LL )
    v13 = v18[0];
  if ( *(_QWORD *)&v19[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v19[440], aPasteOneFileAt);
  *(_QWORD *)&v19[440] = v5;
  *(_OWORD *)&v19[448] = v13;
  memcpy(v15, v19, 0x24CuLL);
  *(_WORD *)((char *)&v15[36] + 13) = *(_WORD *)((char *)&v20 + 1);
  HIBYTE(v15[36]) = HIBYTE(v20);
  BYTE12(v15[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v25, v15);
  memcpy(v28, v25, sizeof(v28));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[33] = aDelimiters_0;
  *((_QWORD *)&v15[33] + 1) = 10LL;
  memcpy(v23, v15, 0x220uLL);
  v23[35] = v15[35];
  *(_QWORD *)((char *)&v23[36] + 4) = *(_QWORD *)((char *)&v15[36] + 4);
  HIDWORD(v23[36]) = HIDWORD(v15[36]);
  *(_QWORD *)&v23[34] = aDelimiters_0;
  *((_QWORD *)&v23[34] + 1) = 10LL;
  LODWORD(v23[36]) = 100;
  *(_QWORD *)&v15[0] = 0LL;
  *((_QWORD *)&v15[0] + 1) = 1LL;
  *(_QWORD *)&v15[1] = 0LL;
  alloc::string::String::push_str(v15, aReuseCharacter, 42LL);
  v6 = *(_QWORD *)&v15[0];
  v18[0] = *(_OWORD *)((char *)v15 + 8);
  if ( *(_QWORD *)&v15[0] != 0x8000000000000000LL )
    v13 = v18[0];
  if ( *((_QWORD *)&v23[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v23[27] + 8, aReuseCharacter);
  *((_QWORD *)&v23[27] + 1) = v6;
  v23[28] = v13;
  memcpy(v15, v23, sizeof(v15));
  *(_QWORD *)&v18[0] = &unk_15970;
  *((_QWORD *)&v18[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v31, v15);
  memcpy(v18, v31, sizeof(v18));
  *(_QWORD *)&v15[0] = asc_1E11A;
  *((_QWORD *)&v15[0] + 1) = 1LL;
  *(_QWORD *)&v15[1] = 0LL;
  *((_QWORD *)&v15[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v13, v15);
  if ( *(_QWORD *)&v18[23] )
  {
    if ( *(_QWORD *)&v18[23] > 0xFFFFFFFFFFFFFFFuLL )
      goto LABEL_32;
    v7 = 16LL * *(_QWORD *)&v18[23];
    *(_QWORD *)&v15[0] = *((_QWORD *)&v18[23] + 1);
    *((_QWORD *)&v15[0] + 1) = 8LL;
    v8 = 16LL;
  }
  else
  {
    v8 = 8LL;
    v7 = 0LL;
  }
  *(_QWORD *)((char *)v15 + v8) = v7;
  if ( *((_QWORD *)&v15[0] + 1) && *(_QWORD *)&v15[1] )
    _rust_dealloc(*(_QWORD *)&v15[0]);
  *(_QWORD *)&v18[24] = v14;
  v18[23] = v13;
  memcpy(v15, v18, 0x248uLL);
  *((_QWORD *)&v15[36] + 1) = *((_QWORD *)&v18[36] + 1) | 0x400LL;
  clap_builder::builder::command::Command::arg_internal(v28, v15);
  memcpy(v27, v28, sizeof(v27));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = aFile_0;
  *((_QWORD *)&v18[33] + 1) = 4LL;
  memcpy(v15, v18, sizeof(v15));
  *(_QWORD *)&v18[0] = aFile;
  *((_QWORD *)&v18[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v29, v15);
  v29[588] = 1;
  memcpy(v18, v29, sizeof(v18));
  *(_QWORD *)&v15[0] = asc_1E11B;
  *((_QWORD *)&v15[0] + 1) = 1LL;
  *(_QWORD *)&v15[1] = 0LL;
  *((_QWORD *)&v15[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v13, v15);
  if ( !*(_QWORD *)&v18[23] )
  {
    v10 = 8LL;
    v9 = 0LL;
    goto LABEL_24;
  }
  if ( *(_QWORD *)&v18[23] > 0xFFFFFFFFFFFFFFFuLL )
LABEL_32:
    core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
  v9 = 16LL * *(_QWORD *)&v18[23];
  *(_QWORD *)&v15[0] = *((_QWORD *)&v18[23] + 1);
  *((_QWORD *)&v15[0] + 1) = 8LL;
  v10 = 16LL;
LABEL_24:
  *(_QWORD *)((char *)v15 + v10) = v9;
  if ( *((_QWORD *)&v15[0] + 1) && *(_QWORD *)&v15[1] )
    _rust_dealloc(*(_QWORD *)&v15[0]);
  *(_QWORD *)&v18[24] = v14;
  v18[23] = v13;
  memcpy(v15, v18, 0x24DuLL);
  BYTE13(v15[36]) = 3;
  HIWORD(v15[36]) = HIWORD(v18[36]);
  clap_builder::builder::command::Command::arg_internal(v27, v15);
  memcpy(v26, v27, sizeof(v26));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[33] = aZeroTerminated_0;
  *((_QWORD *)&v15[33] + 1) = 15LL;
  memcpy(v21, v15, 0x220uLL);
  *(_OWORD *)&v21[560] = v15[35];
  *(_QWORD *)&v21[580] = *(_QWORD *)((char *)&v15[36] + 4);
  v22 = HIDWORD(v15[36]);
  *(_QWORD *)&v21[544] = aZeroTerminated_0;
  *(_QWORD *)&v21[552] = 15LL;
  *(_DWORD *)&v21[576] = 122;
  *(_QWORD *)&v15[0] = 0LL;
  *((_QWORD *)&v15[0] + 1) = 1LL;
  *(_QWORD *)&v15[1] = 0LL;
  alloc::string::String::push_str(v15, aLineDelimiterI, 34LL);
  v11 = *(_QWORD *)&v15[0];
  v18[0] = *(_OWORD *)((char *)v15 + 8);
  if ( *(_QWORD *)&v15[0] != 0x8000000000000000LL )
    v13 = v18[0];
  if ( *(_QWORD *)&v21[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v21[440], aLineDelimiterI);
  *(_QWORD *)&v21[440] = v11;
  *(_OWORD *)&v21[448] = v13;
  memcpy(v15, v21, 0x24CuLL);
  *(_WORD *)((char *)&v15[36] + 13) = *(_WORD *)((char *)&v22 + 1);
  HIBYTE(v15[36]) = HIBYTE(v22);
  BYTE12(v15[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v26, v15);
  memcpy(dest, v26, 0x2C8uLL);
  return dest;
}
