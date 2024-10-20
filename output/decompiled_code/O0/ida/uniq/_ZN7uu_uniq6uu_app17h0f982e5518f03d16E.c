void *__fastcall uu_uniq::uu_app(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r14
  char v17; // bl
  int v18; // ecx
  void *v19; // rbx
  __int128 v21; // [rsp+0h] [rbp-5AF8h] BYREF
  __int64 v22; // [rsp+10h] [rbp-5AE8h]
  _OWORD v23[37]; // [rsp+20h] [rbp-5AD8h] BYREF
  void *v24; // [rsp+278h] [rbp-5880h]
  __int128 v25; // [rsp+280h] [rbp-5878h] BYREF
  __int64 v26; // [rsp+290h] [rbp-5868h]
  __int128 v27; // [rsp+2A0h] [rbp-5858h] BYREF
  __int64 v28; // [rsp+2B0h] [rbp-5848h]
  __int64 v29; // [rsp+2B8h] [rbp-5840h] BYREF
  __int128 v30; // [rsp+2C0h] [rbp-5838h]
  _OWORD v31[37]; // [rsp+2D0h] [rbp-5828h] BYREF
  _BYTE v32[588]; // [rsp+520h] [rbp-55D8h] BYREF
  int v33; // [rsp+76Ch] [rbp-538Ch]
  _BYTE v34[588]; // [rsp+770h] [rbp-5388h] BYREF
  int v35; // [rsp+9BCh] [rbp-513Ch]
  _BYTE v36[588]; // [rsp+9C0h] [rbp-5138h] BYREF
  int v37; // [rsp+C0Ch] [rbp-4EECh]
  _BYTE v38[588]; // [rsp+C10h] [rbp-4EE8h] BYREF
  int v39; // [rsp+E5Ch] [rbp-4C9Ch]
  _BYTE v40[588]; // [rsp+E60h] [rbp-4C98h] BYREF
  int v41; // [rsp+10ACh] [rbp-4A4Ch]
  _OWORD v42[37]; // [rsp+10B0h] [rbp-4A48h] BYREF
  _OWORD v43[37]; // [rsp+1300h] [rbp-47F8h] BYREF
  _OWORD v44[37]; // [rsp+1550h] [rbp-45A8h] BYREF
  _OWORD v45[37]; // [rsp+17A0h] [rbp-4358h] BYREF
  _BYTE v46[588]; // [rsp+19F0h] [rbp-4108h] BYREF
  char v47; // [rsp+1C3Ch] [rbp-3EBCh]
  _BYTE v48[3]; // [rsp+1C3Dh] [rbp-3EBBh]
  _OWORD v49[37]; // [rsp+1C40h] [rbp-3EB8h] BYREF
  _DWORD v50[178]; // [rsp+1E90h] [rbp-3C68h] BYREF
  _OWORD v51[37]; // [rsp+2158h] [rbp-39A0h] BYREF
  _OWORD v52[37]; // [rsp+23A8h] [rbp-3750h] BYREF
  _QWORD v53[74]; // [rsp+25F8h] [rbp-3500h] BYREF
  _QWORD v54[74]; // [rsp+2848h] [rbp-32B0h] BYREF
  _QWORD v55[74]; // [rsp+2A98h] [rbp-3060h] BYREF
  _BYTE v56[712]; // [rsp+2CE8h] [rbp-2E10h] BYREF
  _BYTE v57[712]; // [rsp+2FB0h] [rbp-2B48h] BYREF
  _BYTE v58[712]; // [rsp+3278h] [rbp-2880h] BYREF
  _BYTE v59[712]; // [rsp+3540h] [rbp-25B8h] BYREF
  _QWORD v60[89]; // [rsp+3808h] [rbp-22F0h] BYREF
  _BYTE v61[712]; // [rsp+3AD0h] [rbp-2028h] BYREF
  _BYTE v62[712]; // [rsp+3D98h] [rbp-1D60h] BYREF
  _BYTE v63[712]; // [rsp+4060h] [rbp-1A98h] BYREF
  _BYTE v64[712]; // [rsp+4328h] [rbp-17D0h] BYREF
  _BYTE v65[712]; // [rsp+45F0h] [rbp-1508h] BYREF
  _QWORD v66[89]; // [rsp+48B8h] [rbp-1240h] BYREF
  _BYTE v67[700]; // [rsp+4B80h] [rbp-F78h] BYREF
  __int64 v68; // [rsp+4E3Ch] [rbp-CBCh]
  int v69; // [rsp+4E44h] [rbp-CB4h]
  _QWORD src[89]; // [rsp+4E48h] [rbp-CB0h] BYREF
  _BYTE v71[592]; // [rsp+5110h] [rbp-9E8h] BYREF
  _BYTE v72[592]; // [rsp+5360h] [rbp-798h] BYREF
  _BYTE v73[592]; // [rsp+55B0h] [rbp-548h] BYREF
  _BYTE dest[760]; // [rsp+5800h] [rbp-2F8h] BYREF

  v66[66] = 0LL;
  v60[88] = 0LL;
  v55[6] = 0LL;
  *(_QWORD *)&v46[216] = 0LL;
  *(_QWORD *)&v36[264] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(dest, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v50, dest);
  uucore::format_usage((unsigned int)&v29);
  v4 = v29;
  if ( v29 != 0x8000000000000000LL )
    v23[0] = v30;
  v24 = a1;
  if ( *(_QWORD *)&v50[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v50[116], aOptionInputOut);
  *(_QWORD *)&v50[116] = v4;
  *(_OWORD *)&v50[118] = v23[0];
  memcpy(v67, v50, sizeof(v67));
  v68 = *(_QWORD *)&v50[175] | 0x8000000080LL;
  v69 = v50[177];
  clap_builder::builder::command::Command::after_help(v66, v67);
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_260c126feb8ab3c2b694f5739f14195b_22_llvm_4342503802335753491;
  *((_QWORD *)&v23[33] + 1) = 12LL;
  memcpy(v42, v23, 0x220uLL);
  v42[35] = v23[35];
  *(_QWORD *)((char *)&v42[36] + 4) = *(_QWORD *)((char *)&v23[36] + 4);
  HIDWORD(v42[36]) = HIDWORD(v23[36]);
  *(_QWORD *)&v42[34] = anon_260c126feb8ab3c2b694f5739f14195b_22_llvm_4342503802335753491;
  *((_QWORD *)&v42[34] + 1) = 12LL;
  LODWORD(v42[36]) = 68;
  *(_QWORD *)&v23[0] = aNone;
  *((_QWORD *)&v23[0] + 1) = 4LL;
  *(_QWORD *)&v23[1] = aPrepend;
  *((_QWORD *)&v23[1] + 1) = 7LL;
  *(_QWORD *)&v23[2] = aSeparatesetfal;
  *((_QWORD *)&v23[2] + 1) = 8LL;
  *(_QWORD *)&v23[3] = 0LL;
  *((_QWORD *)&v23[3] + 1) = 3LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v31, v23);
  v25 = v31[0];
  v26 = *(_QWORD *)&v31[1];
  clap_builder::builder::value_parser::ValueParser::new(v23, &v25);
  v5 = *(_QWORD *)&v23[0];
  v31[0] = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 5LL )
    v23[0] = v31[0];
  if ( *(_QWORD *)&v42[5] >= 4uLL && *(_QWORD *)&v42[5] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>((char *)&v42[5] + 8);
  *(_QWORD *)&v42[5] = v5;
  *(_OWORD *)((char *)&v42[5] + 8) = v23[0];
  memcpy(v51, v42, sizeof(v51));
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aPrintAllDuplic, 79LL);
  v6 = *(_QWORD *)&v23[0];
  v31[0] = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v21 = v31[0];
  if ( *((_QWORD *)&v51[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v51[27] + 8, aPrintAllDuplic);
  *((_QWORD *)&v51[27] + 1) = v6;
  v51[28] = v21;
  memcpy(v23, v51, sizeof(v23));
  *(_QWORD *)&v31[0] = aDelimitMethod;
  *((_QWORD *)&v31[0] + 1) = 14LL;
  clap_builder::builder::arg::Arg::value_names(v54, v23);
  v54[2] = 1LL;
  v54[3] = 0LL;
  v54[4] = 1LL;
  memcpy(v31, v54, sizeof(v31));
  *(_QWORD *)&v23[0] = aNone;
  *((_QWORD *)&v23[0] + 1) = 4LL;
  *(_QWORD *)&v23[1] = 0LL;
  *((_QWORD *)&v23[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v21, v23);
  alloc::raw_vec::RawVec<T,A>::current_memory(v23, &v31[26]);
  if ( *((_QWORD *)&v23[0] + 1) && *(_QWORD *)&v23[1] )
    _rust_dealloc(*(_QWORD *)&v23[0], *(_QWORD *)&v23[1], *((_QWORD *)&v23[0] + 1));
  *(_QWORD *)&v31[27] = v22;
  v31[26] = v21;
  memcpy(v23, v31, 0x248uLL);
  *((_QWORD *)&v23[36] + 1) = *((_QWORD *)&v31[36] + 1) | 0x80LL;
  clap_builder::builder::command::Command::arg_internal(v66, v23);
  memcpy(v65, v66, sizeof(v65));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_260c126feb8ab3c2b694f5739f14195b_31_llvm_4342503802335753491;
  *((_QWORD *)&v23[33] + 1) = 5LL;
  memcpy(v49, v23, 0x220uLL);
  v49[35] = v23[35];
  v49[36] = v23[36];
  *(_QWORD *)&v49[34] = anon_260c126feb8ab3c2b694f5739f14195b_31_llvm_4342503802335753491;
  *((_QWORD *)&v49[34] + 1) = 5LL;
  *(_QWORD *)&v23[0] = aSeparatesetfal;
  *((_QWORD *)&v23[0] + 1) = 8LL;
  *(_QWORD *)&v23[1] = aPrepend;
  *((_QWORD *)&v23[1] + 1) = 7LL;
  *(_QWORD *)&v23[2] = aAppend;
  *((_QWORD *)&v23[2] + 1) = 6LL;
  *(_QWORD *)&v23[3] = aBoth;
  *((_QWORD *)&v23[3] + 1) = 4LL;
  *(_QWORD *)&v23[4] = 0LL;
  *((_QWORD *)&v23[4] + 1) = 4LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v31, v23);
  v27 = v31[0];
  v28 = *(_QWORD *)&v31[1];
  clap_builder::builder::value_parser::ValueParser::new(v23, &v27);
  v7 = *(_QWORD *)&v23[0];
  v31[0] = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 5LL )
    v23[0] = v31[0];
  if ( *(_QWORD *)&v49[5] >= 4uLL && *(_QWORD *)&v49[5] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>((char *)&v49[5] + 8);
  *(_QWORD *)&v49[5] = v7;
  *(_OWORD *)((char *)&v49[5] + 8) = v23[0];
  memcpy(v52, v49, sizeof(v52));
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aShowAllItemsSe, 73LL);
  v8 = *(_QWORD *)&v23[0];
  v31[0] = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v21 = v31[0];
  if ( *((_QWORD *)&v52[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v52[27] + 8, aShowAllItemsSe);
  *((_QWORD *)&v52[27] + 1) = v8;
  v52[28] = v21;
  memcpy(v23, v52, sizeof(v23));
  *(_QWORD *)&v31[0] = aGroupMethod;
  *((_QWORD *)&v31[0] + 1) = 12LL;
  clap_builder::builder::arg::Arg::value_names(v55, v23);
  v55[2] = 1LL;
  v55[3] = 0LL;
  v55[4] = 1LL;
  memcpy(v23, v55, sizeof(v23));
  *(_QWORD *)&v31[0] = aSeparatesetfal;
  *((_QWORD *)&v31[0] + 1) = 8LL;
  *(_QWORD *)&v31[1] = 0LL;
  *((_QWORD *)&v31[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v21, v31);
  alloc::raw_vec::RawVec<T,A>::current_memory(v31, &v23[26]);
  if ( *((_QWORD *)&v31[0] + 1) && *(_QWORD *)&v31[1] )
    _rust_dealloc(*(_QWORD *)&v31[0], *(_QWORD *)&v31[1], *((_QWORD *)&v31[0] + 1));
  *(_QWORD *)&v23[27] = v22;
  v23[26] = v21;
  memcpy(v53, v23, 0x248uLL);
  v53[73] = *((_QWORD *)&v23[36] + 1) | 0x80LL;
  *(_QWORD *)&v23[0] = &anon_260c126feb8ab3c2b694f5739f14195b_26_llvm_4342503802335753491;
  *((_QWORD *)&v23[0] + 1) = 8LL;
  *(_QWORD *)&v23[1] = anon_260c126feb8ab3c2b694f5739f14195b_22_llvm_4342503802335753491;
  *((_QWORD *)&v23[1] + 1) = 12LL;
  *(_QWORD *)&v23[2] = anon_260c126feb8ab3c2b694f5739f14195b_29_llvm_4342503802335753491;
  *((_QWORD *)&v23[2] + 1) = 6LL;
  *(_QWORD *)&v23[3] = anon_260c126feb8ab3c2b694f5739f14195b_24_llvm_4342503802335753491;
  *((_QWORD *)&v23[3] + 1) = 5LL;
  *(_QWORD *)&v23[4] = 0LL;
  *((_QWORD *)&v23[4] + 1) = 4LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v53[13], v23);
  memcpy(v23, v53, sizeof(v23));
  clap_builder::builder::command::Command::arg_internal(v65, v23);
  memcpy(v64, v65, sizeof(v64));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_260c126feb8ab3c2b694f5739f14195b_23_llvm_4342503802335753491;
  *((_QWORD *)&v23[33] + 1) = 11LL;
  memcpy(v43, v23, 0x220uLL);
  v43[35] = v23[35];
  *(_QWORD *)((char *)&v43[36] + 4) = *(_QWORD *)((char *)&v23[36] + 4);
  HIDWORD(v43[36]) = HIDWORD(v23[36]);
  *(_QWORD *)&v43[34] = anon_260c126feb8ab3c2b694f5739f14195b_23_llvm_4342503802335753491;
  *((_QWORD *)&v43[34] + 1) = 11LL;
  LODWORD(v43[36]) = 119;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aCompareNoMoreT, 42LL);
  v9 = *(_QWORD *)&v23[0];
  v31[0] = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v21 = v31[0];
  if ( *((_QWORD *)&v43[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v43[27] + 8, aCompareNoMoreT);
  *((_QWORD *)&v43[27] + 1) = v9;
  v43[28] = v21;
  memcpy(v23, v43, sizeof(v23));
  *(_QWORD *)&v31[0] = aN;
  *((_QWORD *)&v31[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v71, v23);
  memcpy(v23, v71, sizeof(v23));
  clap_builder::builder::command::Command::arg_internal(v64, v23);
  memcpy(v63, v64, sizeof(v63));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_260c126feb8ab3c2b694f5739f14195b_24_llvm_4342503802335753491;
  *((_QWORD *)&v23[33] + 1) = 5LL;
  memcpy(v32, v23, 0x220uLL);
  *(_OWORD *)&v32[560] = v23[35];
  *(_QWORD *)&v32[580] = *(_QWORD *)((char *)&v23[36] + 4);
  v33 = HIDWORD(v23[36]);
  *(_QWORD *)&v32[544] = anon_260c126feb8ab3c2b694f5739f14195b_24_llvm_4342503802335753491;
  *(_QWORD *)&v32[552] = 5LL;
  *(_DWORD *)&v32[576] = 99;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aPrefixLinesByT, 41LL);
  v10 = *(_QWORD *)&v23[0];
  v31[0] = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v21 = v31[0];
  if ( *(_QWORD *)&v32[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v32[440], aPrefixLinesByT);
  *(_QWORD *)&v32[440] = v10;
  *(_OWORD *)&v32[448] = v21;
  memcpy(v23, v32, 0x24CuLL);
  *(_WORD *)((char *)&v23[36] + 13) = *(_WORD *)((char *)&v33 + 1);
  HIBYTE(v23[36]) = HIBYTE(v33);
  BYTE12(v23[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v63, v23);
  memcpy(v62, v63, sizeof(v62));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_260c126feb8ab3c2b694f5739f14195b_25_llvm_4342503802335753491;
  *((_QWORD *)&v23[33] + 1) = 11LL;
  memcpy(v34, v23, 0x220uLL);
  *(_OWORD *)&v34[560] = v23[35];
  *(_QWORD *)&v34[580] = *(_QWORD *)((char *)&v23[36] + 4);
  v35 = HIDWORD(v23[36]);
  *(_QWORD *)&v34[544] = anon_260c126feb8ab3c2b694f5739f14195b_25_llvm_4342503802335753491;
  *(_QWORD *)&v34[552] = 11LL;
  *(_DWORD *)&v34[576] = 105;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aIgnoreDifferen, 41LL);
  v11 = *(_QWORD *)&v23[0];
  v31[0] = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v21 = v31[0];
  if ( *(_QWORD *)&v34[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34[440], aIgnoreDifferen);
  *(_QWORD *)&v34[440] = v11;
  *(_OWORD *)&v34[448] = v21;
  memcpy(v23, v34, 0x24CuLL);
  *(_WORD *)((char *)&v23[36] + 13) = *(_WORD *)((char *)&v35 + 1);
  HIBYTE(v23[36]) = HIBYTE(v35);
  BYTE12(v23[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v62, v23);
  memcpy(v61, v62, sizeof(v61));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = &anon_260c126feb8ab3c2b694f5739f14195b_26_llvm_4342503802335753491;
  *((_QWORD *)&v23[33] + 1) = 8LL;
  memcpy(v36, v23, 0x220uLL);
  *(_OWORD *)&v36[560] = v23[35];
  *(_QWORD *)&v36[580] = *(_QWORD *)((char *)&v23[36] + 4);
  v37 = HIDWORD(v23[36]);
  *(_QWORD *)&v36[544] = &anon_260c126feb8ab3c2b694f5739f14195b_26_llvm_4342503802335753491;
  *(_QWORD *)&v36[552] = 8LL;
  *(_DWORD *)&v36[576] = 100;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aOnlyPrintDupli, 26LL);
  v12 = *(_QWORD *)&v23[0];
  v31[0] = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v21 = v31[0];
  if ( *(_QWORD *)&v36[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v36[440], aOnlyPrintDupli);
  *(_QWORD *)&v36[440] = v12;
  *(_OWORD *)&v36[448] = v21;
  memcpy(v23, v36, 0x24CuLL);
  *(_WORD *)((char *)&v23[36] + 13) = *(_WORD *)((char *)&v37 + 1);
  HIBYTE(v23[36]) = HIBYTE(v37);
  BYTE12(v23[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v61, v23);
  memcpy(v60, v61, sizeof(v60));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_260c126feb8ab3c2b694f5739f14195b_28_llvm_4342503802335753491;
  *((_QWORD *)&v23[33] + 1) = 10LL;
  memcpy(v44, v23, 0x220uLL);
  v44[35] = v23[35];
  *(_QWORD *)((char *)&v44[36] + 4) = *(_QWORD *)((char *)&v23[36] + 4);
  HIDWORD(v44[36]) = HIDWORD(v23[36]);
  *(_QWORD *)&v44[34] = anon_260c126feb8ab3c2b694f5739f14195b_28_llvm_4342503802335753491;
  *((_QWORD *)&v44[34] + 1) = 10LL;
  LODWORD(v44[36]) = 115;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aAvoidComparing, 38LL);
  v13 = *(_QWORD *)&v23[0];
  v31[0] = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v21 = v31[0];
  if ( *((_QWORD *)&v44[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v44[27] + 8, aAvoidComparing);
  *((_QWORD *)&v44[27] + 1) = v13;
  v44[28] = v21;
  memcpy(v23, v44, sizeof(v23));
  *(_QWORD *)&v31[0] = aN;
  *((_QWORD *)&v31[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v72, v23);
  memcpy(v23, v72, sizeof(v23));
  clap_builder::builder::command::Command::arg_internal(v60, v23);
  memcpy(v59, v60, sizeof(v59));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_260c126feb8ab3c2b694f5739f14195b_27_llvm_4342503802335753491;
  *((_QWORD *)&v23[33] + 1) = 11LL;
  memcpy(v45, v23, 0x220uLL);
  v45[35] = v23[35];
  *(_QWORD *)((char *)&v45[36] + 4) = *(_QWORD *)((char *)&v23[36] + 4);
  HIDWORD(v45[36]) = HIDWORD(v23[36]);
  *(_QWORD *)&v45[34] = anon_260c126feb8ab3c2b694f5739f14195b_27_llvm_4342503802335753491;
  *((_QWORD *)&v45[34] + 1) = 11LL;
  LODWORD(v45[36]) = 102;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aAvoidComparing_0, 34LL);
  v14 = *(_QWORD *)&v23[0];
  v31[0] = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v21 = v31[0];
  if ( *((_QWORD *)&v45[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v45[27] + 8, aAvoidComparing_0);
  *((_QWORD *)&v45[27] + 1) = v14;
  v45[28] = v21;
  memcpy(v23, v45, sizeof(v23));
  *(_QWORD *)&v31[0] = aN;
  *((_QWORD *)&v31[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v73, v23);
  memcpy(v23, v73, sizeof(v23));
  clap_builder::builder::command::Command::arg_internal(v59, v23);
  memcpy(v58, v59, sizeof(v58));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_260c126feb8ab3c2b694f5739f14195b_29_llvm_4342503802335753491;
  *((_QWORD *)&v23[33] + 1) = 6LL;
  memcpy(v38, v23, 0x220uLL);
  *(_OWORD *)&v38[560] = v23[35];
  *(_QWORD *)&v38[580] = *(_QWORD *)((char *)&v23[36] + 4);
  v39 = HIDWORD(v23[36]);
  *(_QWORD *)&v38[544] = anon_260c126feb8ab3c2b694f5739f14195b_29_llvm_4342503802335753491;
  *(_QWORD *)&v38[552] = 6LL;
  *(_DWORD *)&v38[576] = 117;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aOnlyPrintUniqu, 23LL);
  v15 = *(_QWORD *)&v23[0];
  v31[0] = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v21 = v31[0];
  if ( *(_QWORD *)&v38[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v38[440], aOnlyPrintUniqu);
  *(_QWORD *)&v38[440] = v15;
  *(_OWORD *)&v38[448] = v21;
  memcpy(v23, v38, 0x24CuLL);
  *(_WORD *)((char *)&v23[36] + 13) = *(_WORD *)((char *)&v39 + 1);
  HIBYTE(v23[36]) = HIBYTE(v39);
  BYTE12(v23[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v58, v23);
  memcpy(v57, v58, sizeof(v57));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_260c126feb8ab3c2b694f5739f14195b_30_llvm_4342503802335753491;
  *((_QWORD *)&v23[33] + 1) = 15LL;
  memcpy(v40, v23, 0x220uLL);
  *(_OWORD *)&v40[560] = v23[35];
  *(_QWORD *)&v40[580] = *(_QWORD *)((char *)&v23[36] + 4);
  v41 = HIDWORD(v23[36]);
  *(_QWORD *)&v40[544] = anon_260c126feb8ab3c2b694f5739f14195b_30_llvm_4342503802335753491;
  *(_QWORD *)&v40[552] = 15LL;
  *(_DWORD *)&v40[576] = 122;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aEndLinesWith0B, 34LL);
  v16 = *(_QWORD *)&v23[0];
  v31[0] = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v21 = v31[0];
  if ( *(_QWORD *)&v40[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v40[440], aEndLinesWith0B);
  *(_QWORD *)&v40[440] = v16;
  *(_OWORD *)&v40[448] = v21;
  memcpy(v23, v40, 0x24CuLL);
  *(_WORD *)((char *)&v23[36] + 13) = *(_WORD *)((char *)&v41 + 1);
  HIBYTE(v23[36]) = HIBYTE(v41);
  BYTE12(v23[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v57, v23);
  memcpy(v56, v57, sizeof(v56));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = aFiles;
  *((_QWORD *)&v23[33] + 1) = 5LL;
  memcpy(v46, v23, sizeof(v46));
  *(_WORD *)v48 = *(_WORD *)((char *)&v23[36] + 13);
  v48[2] = HIBYTE(v23[36]);
  v47 = 1;
  if ( *(_QWORD *)&v46[80] >= 6uLL || (v17 = 1, v18 = 47, !_bittest(&v18, *(unsigned int *)&v46[80])) )
  {
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v46[88]);
    v17 = v47;
  }
  *(_QWORD *)&v46[80] = 2LL;
  v23[0] = *(_OWORD *)v46;
  memcpy((char *)&v23[2] + 8, &v46[40], 0x220uLL);
  v23[1] = 1uLL;
  *(_QWORD *)&v23[2] = 2LL;
  DWORD2(v23[36]) = *(_DWORD *)&v46[584] | 4;
  BYTE12(v23[36]) = v17;
  BYTE13(v23[36]) = 3;
  HIWORD(v23[36]) = *(_WORD *)&v48[1];
  clap_builder::builder::command::Command::arg_internal(v56, v23);
  v19 = v24;
  memcpy(v24, v56, 0x2C8uLL);
  return v19;
}
