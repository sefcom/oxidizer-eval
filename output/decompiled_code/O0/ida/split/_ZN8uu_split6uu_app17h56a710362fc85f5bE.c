void *__fastcall uu_split::uu_app(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // r14
  void *v16; // r13
  __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // r14
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  __int128 v24; // [rsp+0h] [rbp-74A8h] BYREF
  __int64 v25; // [rsp+10h] [rbp-7498h]
  _OWORD v26[37]; // [rsp+20h] [rbp-7488h] BYREF
  _OWORD v27[37]; // [rsp+270h] [rbp-7238h] BYREF
  void *v28; // [rsp+4C0h] [rbp-6FE8h]
  __int64 v29; // [rsp+4C8h] [rbp-6FE0h] BYREF
  __int128 v30; // [rsp+4D0h] [rbp-6FD8h]
  _BYTE v31[588]; // [rsp+4E0h] [rbp-6FC8h] BYREF
  int v32; // [rsp+72Ch] [rbp-6D7Ch]
  _BYTE v33[592]; // [rsp+730h] [rbp-6D78h] BYREF
  _OWORD v34[37]; // [rsp+980h] [rbp-6B28h] BYREF
  _OWORD v35[37]; // [rsp+BD0h] [rbp-68D8h] BYREF
  _BYTE v36[592]; // [rsp+E20h] [rbp-6688h] BYREF
  _DWORD v37[178]; // [rsp+1070h] [rbp-6438h] BYREF
  _OWORD v38[37]; // [rsp+1338h] [rbp-6170h] BYREF
  _OWORD v39[37]; // [rsp+1588h] [rbp-5F20h] BYREF
  _OWORD v40[37]; // [rsp+17D8h] [rbp-5CD0h] BYREF
  _OWORD v41[37]; // [rsp+1A28h] [rbp-5A80h] BYREF
  _OWORD v42[37]; // [rsp+1C78h] [rbp-5830h] BYREF
  _OWORD v43[37]; // [rsp+1EC8h] [rbp-55E0h] BYREF
  _OWORD v44[37]; // [rsp+2118h] [rbp-5390h] BYREF
  _QWORD v45[74]; // [rsp+2368h] [rbp-5140h] BYREF
  _OWORD v46[37]; // [rsp+25B8h] [rbp-4EF0h] BYREF
  _OWORD v47[37]; // [rsp+2808h] [rbp-4CA0h] BYREF
  _DWORD v48[148]; // [rsp+2A58h] [rbp-4A50h] BYREF
  _OWORD v49[37]; // [rsp+2CA8h] [rbp-4800h] BYREF
  _OWORD v50[37]; // [rsp+2EF8h] [rbp-45B0h] BYREF
  _OWORD v51[37]; // [rsp+3148h] [rbp-4360h] BYREF
  _QWORD v52[89]; // [rsp+3398h] [rbp-4110h] BYREF
  _BYTE v53[712]; // [rsp+3660h] [rbp-3E48h] BYREF
  _BYTE v54[712]; // [rsp+3928h] [rbp-3B80h] BYREF
  _BYTE v55[712]; // [rsp+3BF0h] [rbp-38B8h] BYREF
  _BYTE v56[712]; // [rsp+3EB8h] [rbp-35F0h] BYREF
  _BYTE v57[712]; // [rsp+4180h] [rbp-3328h] BYREF
  _QWORD v58[89]; // [rsp+4448h] [rbp-3060h] BYREF
  _BYTE v59[712]; // [rsp+4710h] [rbp-2D98h] BYREF
  _BYTE v60[712]; // [rsp+49D8h] [rbp-2AD0h] BYREF
  _BYTE v61[712]; // [rsp+4CA0h] [rbp-2808h] BYREF
  _BYTE v62[712]; // [rsp+4F68h] [rbp-2540h] BYREF
  _QWORD v63[89]; // [rsp+5230h] [rbp-2278h] BYREF
  _BYTE v64[712]; // [rsp+54F8h] [rbp-1FB0h] BYREF
  _BYTE v65[712]; // [rsp+57C0h] [rbp-1CE8h] BYREF
  _BYTE v66[712]; // [rsp+5A88h] [rbp-1A20h] BYREF
  _BYTE v67[712]; // [rsp+5D50h] [rbp-1758h] BYREF
  _BYTE v68[712]; // [rsp+6018h] [rbp-1490h] BYREF
  _QWORD v69[74]; // [rsp+62E0h] [rbp-11C8h] BYREF
  _BYTE v70[592]; // [rsp+6530h] [rbp-F78h] BYREF
  _QWORD src[89]; // [rsp+6780h] [rbp-D28h] BYREF
  _BYTE v72[592]; // [rsp+6A48h] [rbp-A60h] BYREF
  _BYTE v73[592]; // [rsp+6C98h] [rbp-810h] BYREF
  _BYTE v74[712]; // [rsp+6EE8h] [rbp-5C0h] BYREF
  _BYTE dest[760]; // [rsp+71B0h] [rbp-2F8h] BYREF

  v69[51] = 0LL;
  v63[73] = 0LL;
  v58[6] = 0LL;
  v52[28] = 0LL;
  v45[34] = 0LL;
  *(_QWORD *)&v38[20] = 0LL;
  *((_QWORD *)&v27[32] + 1) = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(dest, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v74, dest);
  clap_builder::builder::command::Command::after_help(v37, v74);
  uucore::format_usage((unsigned int)&v29);
  v4 = v29;
  if ( v29 != 0x8000000000000000LL )
    v26[0] = v30;
  if ( *(_QWORD *)&v37[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v37[116], aOptionInputPre);
  *(_QWORD *)&v37[116] = v4;
  *(_OWORD *)&v37[118] = v26[0];
  memcpy(v52, v37, 0x2BCuLL);
  *(_QWORD *)((char *)&v52[87] + 4) = *(_QWORD *)&v37[175] | 0x8000000080LL;
  HIDWORD(v52[88]) = v37[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_6_llvm_15963415444986902846;
  *((_QWORD *)&v27[33] + 1) = 5LL;
  memcpy(v26, v27, 0x220uLL);
  v26[35] = v27[35];
  *(_QWORD *)&v26[34] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_6_llvm_15963415444986902846;
  *((_QWORD *)&v26[34] + 1) = 5LL;
  LODWORD(v26[36]) = 98;
  *(_QWORD *)((char *)&v26[36] + 4) = *(_QWORD *)((char *)&v27[36] + 4) | 0x2000000000LL;
  HIDWORD(v26[36]) = HIDWORD(v27[36]);
  *(_QWORD *)&v27[0] = aSize;
  *((_QWORD *)&v27[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v38, v26);
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::string::String::push_str(v26, aPutSizeBytesPe, 30LL);
  v5 = *(_QWORD *)&v26[0];
  v27[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v24 = v27[0];
  if ( *((_QWORD *)&v38[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v38[27] + 8, aPutSizeBytesPe);
  *((_QWORD *)&v38[27] + 1) = v5;
  v38[28] = v24;
  memcpy(v26, v38, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v52, v26);
  memcpy(v68, v52, sizeof(v68));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_7_llvm_15963415444986902846;
  *((_QWORD *)&v27[33] + 1) = 10LL;
  memcpy(v26, v27, 0x220uLL);
  v26[35] = v27[35];
  *(_QWORD *)&v26[34] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_7_llvm_15963415444986902846;
  *((_QWORD *)&v26[34] + 1) = 10LL;
  LODWORD(v26[36]) = 67;
  *(_QWORD *)((char *)&v26[36] + 4) = *(_QWORD *)((char *)&v27[36] + 4) | 0x2000000000LL;
  HIDWORD(v26[36]) = HIDWORD(v27[36]);
  *(_QWORD *)&v27[0] = aSize;
  *((_QWORD *)&v27[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v39, v26);
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::string::String::push_str(v26, aPutAtMostSizeB, 47LL);
  v6 = *(_QWORD *)&v26[0];
  v27[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v24 = v27[0];
  if ( *((_QWORD *)&v39[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v39[27] + 8, aPutAtMostSizeB);
  *((_QWORD *)&v39[27] + 1) = v6;
  v39[28] = v24;
  memcpy(v26, v39, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v68, v26);
  memcpy(v67, v68, sizeof(v67));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_8_llvm_15963415444986902846;
  *((_QWORD *)&v27[33] + 1) = 5LL;
  memcpy(v26, v27, 0x220uLL);
  v26[35] = v27[35];
  *(_QWORD *)&v26[34] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_8_llvm_15963415444986902846;
  *((_QWORD *)&v26[34] + 1) = 5LL;
  LODWORD(v26[36]) = 108;
  *(_QWORD *)((char *)&v26[36] + 4) = *(_QWORD *)((char *)&v27[36] + 4) | 0x2000000000LL;
  HIDWORD(v26[36]) = HIDWORD(v27[36]);
  *(_QWORD *)&v27[0] = aNumber;
  *((_QWORD *)&v27[0] + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v72, v26);
  memcpy(v26, v72, sizeof(v26));
  *(_QWORD *)&v27[0] = a1000;
  *((_QWORD *)&v27[0] + 1) = 4LL;
  *(_QWORD *)&v27[1] = 0LL;
  *((_QWORD *)&v27[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v24, v27);
  alloc::raw_vec::RawVec<T,A>::current_memory(v27, &v26[23]);
  if ( *((_QWORD *)&v27[0] + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
      &v26[24],
      *(_QWORD *)&v27[0],
      *((_QWORD *)&v27[0] + 1),
      *(_QWORD *)&v27[1]);
  *(_QWORD *)&v26[24] = v25;
  v26[23] = v24;
  memcpy(v40, v26, sizeof(v40));
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::string::String::push_str(v26, aPutNumberLines, 40LL);
  v7 = *(_QWORD *)&v26[0];
  v27[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v24 = v27[0];
  if ( *((_QWORD *)&v40[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v40[27] + 8, aPutNumberLines);
  *((_QWORD *)&v40[27] + 1) = v7;
  v40[28] = v24;
  memcpy(v26, v40, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v67, v26);
  memcpy(v66, v67, sizeof(v66));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_11_llvm_15963415444986902846;
  *((_QWORD *)&v27[33] + 1) = 6LL;
  memcpy(v26, v27, 0x220uLL);
  v26[35] = v27[35];
  *(_QWORD *)&v26[34] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_11_llvm_15963415444986902846;
  *((_QWORD *)&v26[34] + 1) = 6LL;
  LODWORD(v26[36]) = 110;
  *(_QWORD *)((char *)&v26[36] + 4) = *(_QWORD *)((char *)&v27[36] + 4) | 0x2000000000LL;
  HIDWORD(v26[36]) = HIDWORD(v27[36]);
  *(_QWORD *)&v27[0] = aChunks;
  *((_QWORD *)&v27[0] + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v41, v26);
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::string::String::push_str(v26, aGenerateChunks, 51LL);
  v8 = *(_QWORD *)&v26[0];
  v27[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v24 = v27[0];
  if ( *((_QWORD *)&v41[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v41[27] + 8, aGenerateChunks);
  *((_QWORD *)&v41[27] + 1) = v8;
  v41[28] = v24;
  memcpy(v26, v41, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v66, v26);
  memcpy(v65, v66, sizeof(v65));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_9_llvm_15963415444986902846;
  *((_QWORD *)&v27[33] + 1) = 17LL;
  memcpy(v26, v27, 0x220uLL);
  v26[35] = v27[35];
  *(_QWORD *)&v26[36] = *(_QWORD *)&v27[36];
  *(_QWORD *)&v26[34] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_9_llvm_15963415444986902846;
  *((_QWORD *)&v26[34] + 1) = 17LL;
  *((_QWORD *)&v26[36] + 1) = *((_QWORD *)&v27[36] + 1) | 0x20LL;
  *(_QWORD *)&v27[0] = aSuffix;
  *((_QWORD *)&v27[0] + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v73, v26);
  memcpy(v26, v73, sizeof(v26));
  v27[0] = 1uLL;
  *((_QWORD *)&v27[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v24, v27);
  alloc::raw_vec::RawVec<T,A>::current_memory(v27, &v26[23]);
  if ( *((_QWORD *)&v27[0] + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
      &v26[24],
      *(_QWORD *)&v27[0],
      *((_QWORD *)&v27[0] + 1),
      *(_QWORD *)&v27[1]);
  *(_QWORD *)&v26[24] = v25;
  v26[23] = v24;
  memcpy(v42, v26, sizeof(v42));
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::string::String::push_str(v26, aAdditionalSuff, 48LL);
  v9 = *(_QWORD *)&v26[0];
  v27[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v24 = v27[0];
  if ( *((_QWORD *)&v42[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v42[27] + 8, aAdditionalSuff);
  *((_QWORD *)&v42[27] + 1) = v9;
  v42[28] = v24;
  memcpy(v26, v42, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v65, v26);
  memcpy(v64, v65, sizeof(v64));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aFilter;
  *((_QWORD *)&v27[33] + 1) = 6LL;
  memcpy(v26, v27, 0x220uLL);
  v26[35] = v27[35];
  *(_QWORD *)&v26[36] = *(_QWORD *)&v27[36];
  *(_QWORD *)&v26[34] = aFilter;
  *((_QWORD *)&v26[34] + 1) = 6LL;
  *((_QWORD *)&v26[36] + 1) = *((_QWORD *)&v27[36] + 1) | 0x20LL;
  *(_QWORD *)&v27[0] = aCommand_0;
  *((_QWORD *)&v27[0] + 1) = 7LL;
  clap_builder::builder::arg::Arg::value_names(v69, v26);
  BYTE5(v69[73]) = 6;
  memcpy(v43, v69, sizeof(v43));
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::string::String::push_str(v26, aWriteToShellCo, 82LL);
  v10 = *(_QWORD *)&v26[0];
  v27[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v24 = v27[0];
  if ( *((_QWORD *)&v43[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v43[27] + 8, aWriteToShellCo);
  *((_QWORD *)&v43[27] + 1) = v10;
  v43[28] = v24;
  memcpy(v26, v43, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v64, v26);
  memcpy(v63, v64, sizeof(v63));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aElideEmptyFile;
  *((_QWORD *)&v26[33] + 1) = 17LL;
  memcpy(v31, v26, 0x220uLL);
  *(_OWORD *)&v31[560] = v26[35];
  *(_QWORD *)&v31[580] = *(_QWORD *)((char *)&v26[36] + 4);
  v32 = HIDWORD(v26[36]);
  *(_QWORD *)&v31[544] = aElideEmptyFile;
  *(_QWORD *)&v31[552] = 17LL;
  *(_DWORD *)&v31[576] = 101;
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::string::String::push_str(v26, aDoNotGenerateE, 44LL);
  v11 = *(_QWORD *)&v26[0];
  v27[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v24 = v27[0];
  if ( *(_QWORD *)&v31[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v31[440], aDoNotGenerateE);
  *(_QWORD *)&v31[440] = v11;
  *(_OWORD *)&v31[448] = v24;
  memcpy(v26, v31, 0x24CuLL);
  *(_WORD *)((char *)&v26[36] + 13) = *(_WORD *)((char *)&v32 + 1);
  HIBYTE(v26[36]) = HIBYTE(v32);
  BYTE12(v26[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v63, v26);
  v28 = a1;
  memcpy(v62, v63, sizeof(v62));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_13_llvm_15963415444986902846;
  *((_QWORD *)&v26[33] + 1) = 2LL;
  memcpy(v45, v26, 0x240uLL);
  *(_WORD *)((char *)&v45[73] + 5) = *(_WORD *)((char *)&v26[36] + 13);
  HIBYTE(v45[73]) = HIBYTE(v26[36]);
  LODWORD(v45[72]) = 100;
  *(_QWORD *)((char *)&v45[72] + 4) = *(_QWORD *)((char *)&v26[36] + 4);
  BYTE4(v45[73]) = 2;
  *(_QWORD *)&v26[0] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_12_llvm_15963415444986902846;
  *((_QWORD *)&v26[0] + 1) = 16LL;
  *(_QWORD *)&v26[1] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_13_llvm_15963415444986902846;
  *((_QWORD *)&v26[1] + 1) = 2LL;
  *(_QWORD *)&v26[2] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_14_llvm_15963415444986902846;
  *((_QWORD *)&v26[2] + 1) = 12LL;
  *(_QWORD *)&v26[3] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_15_llvm_15963415444986902846;
  *((_QWORD *)&v26[3] + 1) = 2LL;
  *(_QWORD *)&v26[4] = 0LL;
  *((_QWORD *)&v26[4] + 1) = 4LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v45[16], v26);
  memcpy(v44, v45, sizeof(v44));
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::string::String::push_str(v26, aUseNumericSuff, 50LL);
  v12 = *(_QWORD *)&v26[0];
  v27[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v24 = v27[0];
  if ( *((_QWORD *)&v44[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v44[27] + 8, aUseNumericSuff);
  *((_QWORD *)&v44[27] + 1) = v12;
  v44[28] = v24;
  memcpy(v26, v44, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v62, v26);
  memcpy(v61, v62, sizeof(v61));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_12_llvm_15963415444986902846;
  *((_QWORD *)&v26[33] + 1) = 16LL;
  v34[0] = v26[0];
  memcpy((char *)&v34[2] + 8, (char *)&v26[2] + 8, 0x1F8uLL);
  v34[35] = v26[35];
  *(_QWORD *)&v34[36] = *(_QWORD *)&v26[36];
  v34[1] = 1uLL;
  *(_QWORD *)&v34[2] = 1LL;
  *(_QWORD *)&v34[34] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_12_llvm_15963415444986902846;
  *((_QWORD *)&v34[34] + 1) = 16LL;
  *((_QWORD *)&v34[36] + 1) = *((_QWORD *)&v26[36] + 1) | 0x80LL;
  *(_QWORD *)&v26[0] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_12_llvm_15963415444986902846;
  *((_QWORD *)&v26[0] + 1) = 16LL;
  *(_QWORD *)&v26[1] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_13_llvm_15963415444986902846;
  *((_QWORD *)&v26[1] + 1) = 2LL;
  *(_QWORD *)&v26[2] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_14_llvm_15963415444986902846;
  *((_QWORD *)&v26[2] + 1) = 12LL;
  *(_QWORD *)&v26[3] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_15_llvm_15963415444986902846;
  *((_QWORD *)&v26[3] + 1) = 2LL;
  *(_QWORD *)&v26[4] = 0LL;
  *((_QWORD *)&v26[4] + 1) = 4LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v34[8], v26);
  memcpy(v26, v34, sizeof(v26));
  *(_QWORD *)&v27[0] = aFrom;
  *((_QWORD *)&v27[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v46, v26);
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::string::String::push_str(v26, aSameAsDButAllo, 45LL);
  v13 = *(_QWORD *)&v26[0];
  v27[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v24 = v27[0];
  if ( *((_QWORD *)&v46[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v46[27] + 8, aSameAsDButAllo);
  *((_QWORD *)&v46[27] + 1) = v13;
  v46[28] = v24;
  memcpy(v26, v46, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v61, v26);
  memcpy(v60, v61, sizeof(v60));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_15_llvm_15963415444986902846;
  *((_QWORD *)&v26[33] + 1) = 2LL;
  memcpy(v48, v26, 0x240uLL);
  *(_WORD *)((char *)&v48[147] + 1) = *(_WORD *)((char *)&v26[36] + 13);
  HIBYTE(v48[147]) = HIBYTE(v26[36]);
  v48[144] = 120;
  *(_QWORD *)&v48[145] = *(_QWORD *)((char *)&v26[36] + 4);
  LOBYTE(v48[147]) = 2;
  *(_QWORD *)&v26[0] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_12_llvm_15963415444986902846;
  *((_QWORD *)&v26[0] + 1) = 16LL;
  *(_QWORD *)&v26[1] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_13_llvm_15963415444986902846;
  *((_QWORD *)&v26[1] + 1) = 2LL;
  *(_QWORD *)&v26[2] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_14_llvm_15963415444986902846;
  *((_QWORD *)&v26[2] + 1) = 12LL;
  *(_QWORD *)&v26[3] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_15_llvm_15963415444986902846;
  *((_QWORD *)&v26[3] + 1) = 2LL;
  *(_QWORD *)&v26[4] = 0LL;
  *((_QWORD *)&v26[4] + 1) = 4LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v48[32], v26);
  memcpy(v47, v48, sizeof(v47));
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::string::String::push_str(v26, aUseHexSuffixes, 46LL);
  v14 = *(_QWORD *)&v26[0];
  v27[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v24 = v27[0];
  if ( *((_QWORD *)&v47[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v47[27] + 8, aUseHexSuffixes);
  *((_QWORD *)&v47[27] + 1) = v14;
  v47[28] = v24;
  memcpy(v26, v47, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v60, v26);
  memcpy(v59, v60, sizeof(v59));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_14_llvm_15963415444986902846;
  *((_QWORD *)&v26[33] + 1) = 12LL;
  v35[0] = v26[0];
  memcpy((char *)&v35[2] + 8, (char *)&v26[2] + 8, 0x1F8uLL);
  v35[35] = v26[35];
  *(_QWORD *)&v35[36] = *(_QWORD *)&v26[36];
  v35[1] = 1uLL;
  *(_QWORD *)&v35[2] = 1LL;
  *(_QWORD *)&v35[34] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_14_llvm_15963415444986902846;
  *((_QWORD *)&v35[34] + 1) = 12LL;
  *((_QWORD *)&v35[36] + 1) = *((_QWORD *)&v26[36] + 1) | 0x80LL;
  *(_QWORD *)&v26[0] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_12_llvm_15963415444986902846;
  *((_QWORD *)&v26[0] + 1) = 16LL;
  *(_QWORD *)&v26[1] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_13_llvm_15963415444986902846;
  *((_QWORD *)&v26[1] + 1) = 2LL;
  *(_QWORD *)&v26[2] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_14_llvm_15963415444986902846;
  *((_QWORD *)&v26[2] + 1) = 12LL;
  *(_QWORD *)&v26[3] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_15_llvm_15963415444986902846;
  *((_QWORD *)&v26[3] + 1) = 2LL;
  *(_QWORD *)&v26[4] = 0LL;
  *((_QWORD *)&v26[4] + 1) = 4LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v35[8], v26);
  memcpy(v26, v35, sizeof(v26));
  *(_QWORD *)&v27[0] = aFrom;
  *((_QWORD *)&v27[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v49, v26);
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::string::String::push_str(v26, aSameAsXButAllo, 45LL);
  v15 = *(_QWORD *)&v26[0];
  v27[0] = *(_OWORD *)((char *)v26 + 8);
  v16 = v28;
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v24 = v27[0];
  if ( *((_QWORD *)&v49[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v49[27] + 8, aSameAsXButAllo);
  *((_QWORD *)&v49[27] + 1) = v15;
  v49[28] = v24;
  memcpy(v26, v49, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v59, v26);
  memcpy(v58, v59, sizeof(v58));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_16_llvm_15963415444986902846;
  *((_QWORD *)&v27[33] + 1) = 13LL;
  memcpy(v26, v27, 0x220uLL);
  v26[35] = v27[35];
  *(_QWORD *)&v26[34] = anon_4f04ac8a3ef9e065a432e2bbb7f80309_16_llvm_15963415444986902846;
  *((_QWORD *)&v26[34] + 1) = 13LL;
  LODWORD(v26[36]) = 97;
  *(_QWORD *)((char *)&v26[36] + 4) = *(_QWORD *)((char *)&v27[36] + 4) | 0x2000000000LL;
  HIDWORD(v26[36]) = HIDWORD(v27[36]);
  *(_QWORD *)&v27[0] = aN_0;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v50, v26);
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::string::String::push_str(v26, aGenerateSuffix, 41LL);
  v17 = *(_QWORD *)&v26[0];
  v27[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v24 = v27[0];
  if ( *((_QWORD *)&v50[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v50[27] + 8, aGenerateSuffix);
  *((_QWORD *)&v50[27] + 1) = v17;
  v50[28] = v24;
  memcpy(v26, v50, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v58, v26);
  memcpy(v57, v58, sizeof(v57));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aVerbose;
  *((_QWORD *)&v26[33] + 1) = 7LL;
  memcpy(v33, v26, 0x220uLL);
  *(_OWORD *)&v33[560] = v26[35];
  *(_OWORD *)&v33[576] = v26[36];
  *(_QWORD *)&v33[544] = aVerbose;
  *(_QWORD *)&v33[552] = 7LL;
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::string::String::push_str(v26, aPrintADiagnost, 57LL);
  v18 = *(_QWORD *)&v26[0];
  v27[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v24 = v27[0];
  if ( *(_QWORD *)&v33[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v33[440], aPrintADiagnost);
  *(_QWORD *)&v33[440] = v18;
  *(_OWORD *)&v33[448] = v24;
  memcpy(v26, v33, 0x24CuLL);
  *(_WORD *)((char *)&v26[36] + 13) = *(_WORD *)&v33[589];
  HIBYTE(v26[36]) = v33[591];
  BYTE12(v26[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v57, v26);
  memcpy(v56, v57, sizeof(v56));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aSeparator;
  *((_QWORD *)&v27[33] + 1) = 9LL;
  memcpy(v26, v27, 0x220uLL);
  v26[35] = v27[35];
  *(_QWORD *)&v26[34] = aSeparator;
  *((_QWORD *)&v26[34] + 1) = 9LL;
  LODWORD(v26[36]) = 116;
  *(_QWORD *)((char *)&v26[36] + 4) = *(_QWORD *)((char *)&v27[36] + 4) | 0x2000000000LL;
  HIDWORD(v26[36]) = HIDWORD(v27[36]);
  *(_QWORD *)&v27[0] = aSep;
  *((_QWORD *)&v27[0] + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(v70, v26);
  v70[588] = 1;
  memcpy(v51, v70, sizeof(v51));
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::string::String::push_str(v26, aUseSepInsteadO, 91LL);
  v19 = *(_QWORD *)&v26[0];
  v27[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v24 = v27[0];
  if ( *((_QWORD *)&v51[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v51[27] + 8, aUseSepInsteadO);
  *((_QWORD *)&v51[27] + 1) = v19;
  v51[28] = v24;
  memcpy(v26, v51, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v56, v26);
  memcpy(v55, v56, sizeof(v55));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aIoBlksize;
  *((_QWORD *)&v26[33] + 1) = 11LL;
  memcpy(v36, v26, 0x220uLL);
  *(_OWORD *)&v36[560] = v26[35];
  *(_OWORD *)&v36[576] = v26[36];
  *(_QWORD *)&v36[544] = aIoBlksize_0;
  *(_QWORD *)&v36[552] = 10LL;
  v20 = *(_QWORD *)&v36[312];
  if ( *(_QWORD *)&v36[312] == *(_QWORD *)&v36[296] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v36[296]);
  v21 = *(_QWORD *)&v36[304];
  v22 = 3 * v20;
  *(_QWORD *)(*(_QWORD *)&v36[304] + 8 * v22) = aIoBlksize;
  *(_QWORD *)(v21 + 8 * v22 + 8) = 11LL;
  *(_BYTE *)(v21 + 8 * v22 + 16) = 0;
  *(_QWORD *)&v36[312] = v20 + 1;
  memcpy(v26, v36, 0x248uLL);
  *((_QWORD *)&v26[36] + 1) = *(_QWORD *)&v36[584] | 4LL;
  clap_builder::builder::command::Command::arg_internal(v55, v26);
  memcpy(v54, v55, sizeof(v54));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aInput;
  *((_QWORD *)&v26[33] + 1) = 5LL;
  memcpy(v27, v26, sizeof(v27));
  *(_QWORD *)&v26[0] = asc_239B8;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  *((_QWORD *)&v26[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v24, v26);
  alloc::raw_vec::RawVec<T,A>::current_memory(v26, &v27[23]);
  if ( *((_QWORD *)&v26[0] + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
      &v27[24],
      *(_QWORD *)&v26[0],
      *((_QWORD *)&v26[0] + 1),
      *(_QWORD *)&v26[1]);
  *(_QWORD *)&v27[24] = v25;
  v27[23] = v24;
  memcpy(v26, v27, 0x24DuLL);
  BYTE13(v26[36]) = 3;
  HIWORD(v26[36]) = HIWORD(v27[36]);
  clap_builder::builder::command::Command::arg_internal(v54, v26);
  memcpy(v53, v54, sizeof(v53));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aPrefix;
  *((_QWORD *)&v26[33] + 1) = 6LL;
  memcpy(v27, v26, sizeof(v27));
  *(_QWORD *)&v26[0] = asc_239B9;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  *((_QWORD *)&v26[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v24, v26);
  alloc::raw_vec::RawVec<T,A>::current_memory(v26, &v27[23]);
  if ( *((_QWORD *)&v26[0] + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
      &v27[24],
      *(_QWORD *)&v26[0],
      *((_QWORD *)&v26[0] + 1),
      *(_QWORD *)&v26[1]);
  *(_QWORD *)&v27[24] = v25;
  v27[23] = v24;
  memcpy(v26, v27, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v53, v26);
  memcpy(v16, v53, 0x2C8uLL);
  return v16;
}
