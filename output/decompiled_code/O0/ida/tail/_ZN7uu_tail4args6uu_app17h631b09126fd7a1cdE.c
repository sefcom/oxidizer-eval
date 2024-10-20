void *__fastcall uu_tail::args::uu_app(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // r14
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // r14
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v30; // r14
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rcx
  void *v41; // rbx
  __int128 v43; // [rsp+0h] [rbp-7548h] BYREF
  __int64 v44; // [rsp+10h] [rbp-7538h]
  _OWORD v45[37]; // [rsp+20h] [rbp-7528h] BYREF
  void *v46; // [rsp+278h] [rbp-72D0h]
  __int128 v47; // [rsp+280h] [rbp-72C8h]
  __int64 v48; // [rsp+290h] [rbp-72B8h]
  __int64 v49; // [rsp+298h] [rbp-72B0h] BYREF
  __int128 v50; // [rsp+2A0h] [rbp-72A8h]
  _OWORD v51[37]; // [rsp+2B0h] [rbp-7298h] BYREF
  _BYTE v52[589]; // [rsp+500h] [rbp-7048h] BYREF
  _BYTE v53[3]; // [rsp+74Dh] [rbp-6DFBh]
  _BYTE v54[588]; // [rsp+758h] [rbp-6DF0h] BYREF
  int v55; // [rsp+9A4h] [rbp-6BA4h]
  _BYTE v56[592]; // [rsp+9A8h] [rbp-6BA0h] BYREF
  _BYTE v57[592]; // [rsp+BF8h] [rbp-6950h] BYREF
  _OWORD v58[37]; // [rsp+E48h] [rbp-6700h] BYREF
  _OWORD v59[37]; // [rsp+1098h] [rbp-64B0h] BYREF
  _OWORD v60[37]; // [rsp+12E8h] [rbp-6260h] BYREF
  _OWORD v61[37]; // [rsp+1538h] [rbp-6010h] BYREF
  _OWORD v62[37]; // [rsp+1788h] [rbp-5DC0h] BYREF
  _OWORD v63[37]; // [rsp+19D8h] [rbp-5B70h] BYREF
  _OWORD v64[37]; // [rsp+1C28h] [rbp-5920h] BYREF
  _OWORD v65[37]; // [rsp+1E78h] [rbp-56D0h] BYREF
  _OWORD v66[37]; // [rsp+20C8h] [rbp-5480h] BYREF
  _QWORD v67[74]; // [rsp+2318h] [rbp-5230h] BYREF
  _QWORD v68[74]; // [rsp+2568h] [rbp-4FE0h] BYREF
  _DWORD v69[178]; // [rsp+27B8h] [rbp-4D90h] BYREF
  __int128 v70; // [rsp+2A80h] [rbp-4AC8h] BYREF
  __int64 v71; // [rsp+2A90h] [rbp-4AB8h]
  __int64 v72; // [rsp+2A98h] [rbp-4AB0h]
  __int64 v73; // [rsp+2AA0h] [rbp-4AA8h]
  _BYTE v74[544]; // [rsp+2AA8h] [rbp-4AA0h] BYREF
  __int64 v75; // [rsp+2CC8h] [rbp-4880h]
  _OWORD v76[37]; // [rsp+2CD8h] [rbp-4870h] BYREF
  _OWORD v77[37]; // [rsp+2F28h] [rbp-4620h] BYREF
  _OWORD v78[37]; // [rsp+3178h] [rbp-43D0h] BYREF
  _OWORD v79[37]; // [rsp+33C8h] [rbp-4180h] BYREF
  _OWORD v80[37]; // [rsp+3618h] [rbp-3F30h] BYREF
  _OWORD v81[37]; // [rsp+3868h] [rbp-3CE0h] BYREF
  _QWORD v82[74]; // [rsp+3AB8h] [rbp-3A90h] BYREF
  _QWORD v83[74]; // [rsp+3D08h] [rbp-3840h] BYREF
  _QWORD v84[74]; // [rsp+3F58h] [rbp-35F0h] BYREF
  _DWORD v85[178]; // [rsp+41A8h] [rbp-33A0h] BYREF
  _QWORD v86[89]; // [rsp+4470h] [rbp-30D8h] BYREF
  _BYTE v87[712]; // [rsp+4738h] [rbp-2E10h] BYREF
  _BYTE v88[712]; // [rsp+4A00h] [rbp-2B48h] BYREF
  _BYTE v89[712]; // [rsp+4CC8h] [rbp-2880h] BYREF
  _BYTE v90[712]; // [rsp+4F90h] [rbp-25B8h] BYREF
  _QWORD v91[89]; // [rsp+5258h] [rbp-22F0h] BYREF
  _BYTE v92[712]; // [rsp+5520h] [rbp-2028h] BYREF
  _BYTE v93[712]; // [rsp+57E8h] [rbp-1D60h] BYREF
  _BYTE v94[712]; // [rsp+5AB0h] [rbp-1A98h] BYREF
  _BYTE v95[712]; // [rsp+5D78h] [rbp-17D0h] BYREF
  _BYTE v96[712]; // [rsp+6040h] [rbp-1508h] BYREF
  _QWORD v97[89]; // [rsp+6308h] [rbp-1240h] BYREF
  _BYTE v98[712]; // [rsp+65D0h] [rbp-F78h] BYREF
  _BYTE v99[592]; // [rsp+6898h] [rbp-CB0h] BYREF
  _QWORD v100[74]; // [rsp+6AE8h] [rbp-A60h] BYREF
  _QWORD v101[74]; // [rsp+6D38h] [rbp-810h] BYREF
  _QWORD src[89]; // [rsp+6F88h] [rbp-5C0h] BYREF
  _BYTE dest[760]; // [rsp+7250h] [rbp-2F8h] BYREF

  v97[66] = 0LL;
  v91[88] = 0LL;
  v86[21] = 0LL;
  *(_QWORD *)&v79[21] = 0LL;
  v67[64] = 0LL;
  *(_QWORD *)&v60[35] = 0LL;
  *(_QWORD *)&v52[24] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(dest, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v69, dest);
  uucore::format_usage((unsigned int)&v49);
  v4 = v49;
  if ( v49 != 0x8000000000000000LL )
    v45[0] = v50;
  if ( *(_QWORD *)&v69[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v69[116], aFlagFile);
  *(_QWORD *)&v69[116] = v4;
  *(_OWORD *)&v69[118] = v45[0];
  memcpy(v85, v69, 0x2BCuLL);
  *(_QWORD *)&v85[175] = *(_QWORD *)&v69[175] | 0x8000000080LL;
  v85[177] = v69[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aBytes_0;
  *((_QWORD *)&v45[33] + 1) = 5LL;
  memcpy(v61, v45, 0x220uLL);
  v61[35] = v45[35];
  *(_QWORD *)&v61[34] = aBytes_0;
  *((_QWORD *)&v61[34] + 1) = 5LL;
  LODWORD(v61[36]) = 99;
  *(_QWORD *)((char *)&v61[36] + 4) = *(_QWORD *)((char *)&v45[36] + 4) | 0x2000000000LL;
  HIDWORD(v61[36]) = HIDWORD(v45[36]);
  *(_QWORD *)&v45[0] = aBytes_0;
  *((_QWORD *)&v45[0] + 1) = 5LL;
  *(_QWORD *)&v45[1] = aLines;
  *((_QWORD *)&v45[1] + 1) = 5LL;
  *(_QWORD *)&v45[2] = 0LL;
  *((_QWORD *)&v45[2] + 1) = 2LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v61[8], v45);
  memcpy(v76, v61, sizeof(v76));
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aNumberOfBytesT, 24LL);
  v5 = *(_QWORD *)&v45[0];
  v51[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v43 = v51[0];
  if ( *((_QWORD *)&v76[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v76[27] + 8, aNumberOfBytesT);
  *((_QWORD *)&v76[27] + 1) = v5;
  v76[28] = v43;
  memcpy(v45, v76, sizeof(v45));
  clap_builder::builder::command::Command::arg_internal(v85, v45);
  v46 = a1;
  memcpy(v98, v85, sizeof(v98));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v51);
  *(_QWORD *)&v51[33] = aFollow;
  *((_QWORD *)&v51[33] + 1) = 6LL;
  memcpy(v45, v51, 0x220uLL);
  v45[35] = v51[35];
  *(_QWORD *)((char *)&v45[36] + 4) = *(_QWORD *)((char *)&v51[36] + 4);
  HIDWORD(v45[36]) = HIDWORD(v51[36]);
  *(_QWORD *)&v45[34] = aFollow;
  *((_QWORD *)&v45[34] + 1) = 6LL;
  LODWORD(v45[36]) = 102;
  *(_QWORD *)&v51[0] = aDescriptor;
  *((_QWORD *)&v51[0] + 1) = 10LL;
  *(_QWORD *)&v51[1] = 0LL;
  *((_QWORD *)&v51[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v43, v51);
  alloc::raw_vec::RawVec<T,A>::current_memory(v51, &v45[26]);
  if ( *((_QWORD *)&v51[0] + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
      &v45[27],
      *(_QWORD *)&v51[0],
      *((_QWORD *)&v51[0] + 1),
      *(_QWORD *)&v51[1]);
  *(_QWORD *)&v45[27] = v44;
  v45[26] = v43;
  v70 = v45[0];
  memcpy(v74, (char *)&v45[2] + 8, sizeof(v74));
  v71 = 1LL;
  v72 = 0LL;
  v73 = 1LL;
  v75 = *((_QWORD *)&v45[36] + 1) | 0x80LL;
  *(_QWORD *)&v45[0] = aDescriptor;
  *((_QWORD *)&v45[0] + 1) = 10LL;
  *(_QWORD *)&v45[1] = aName;
  *((_QWORD *)&v45[1] + 1) = 4LL;
  *(_QWORD *)&v45[2] = 0LL;
  *((_QWORD *)&v45[2] + 1) = 2LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v51, v45);
  v47 = v51[0];
  v48 = *(_QWORD *)&v51[1];
  clap_builder::builder::arg::Arg::value_parser(v82, &v70);
  v6 = v82[18];
  if ( v82[18] == v82[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v82[16]);
  v7 = v82[17];
  v8 = 16 * v6;
  *(_QWORD *)(v82[17] + v8) = aFollow;
  *(_QWORD *)(v7 + v8 + 8) = 6LL;
  v82[18] = v6 + 1;
  memcpy(v77, v82, sizeof(v77));
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aPrintTheFileAs, 26LL);
  v9 = *(_QWORD *)&v45[0];
  v51[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v43 = v51[0];
  if ( *((_QWORD *)&v77[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v77[27] + 8, aPrintTheFileAs);
  *((_QWORD *)&v77[27] + 1) = v9;
  v77[28] = v43;
  memcpy(v45, v77, sizeof(v45));
  clap_builder::builder::command::Command::arg_internal(v98, v45);
  memcpy(v97, v98, sizeof(v97));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aLines;
  *((_QWORD *)&v45[33] + 1) = 5LL;
  memcpy(v62, v45, 0x220uLL);
  v62[35] = v45[35];
  *(_QWORD *)&v62[34] = aLines;
  *((_QWORD *)&v62[34] + 1) = 5LL;
  LODWORD(v62[36]) = 110;
  *(_QWORD *)((char *)&v62[36] + 4) = *(_QWORD *)((char *)&v45[36] + 4) | 0x2000000000LL;
  HIDWORD(v62[36]) = HIDWORD(v45[36]);
  *(_QWORD *)&v45[0] = aBytes_0;
  *((_QWORD *)&v45[0] + 1) = 5LL;
  *(_QWORD *)&v45[1] = aLines;
  *((_QWORD *)&v45[1] + 1) = 5LL;
  *(_QWORD *)&v45[2] = 0LL;
  *((_QWORD *)&v45[2] + 1) = 2LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v62[8], v45);
  memcpy(v78, v62, sizeof(v78));
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aNumberOfLinesT, 24LL);
  v10 = *(_QWORD *)&v45[0];
  v51[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v43 = v51[0];
  if ( *((_QWORD *)&v78[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v78[27] + 8, aNumberOfLinesT);
  *((_QWORD *)&v78[27] + 1) = v10;
  v78[28] = v43;
  memcpy(v45, v78, sizeof(v45));
  clap_builder::builder::command::Command::arg_internal(v97, v45);
  memcpy(v96, v97, sizeof(v96));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v51);
  *(_QWORD *)&v51[33] = aPid;
  *((_QWORD *)&v51[33] + 1) = 3LL;
  memcpy(v45, v51, 0x220uLL);
  v45[35] = v51[35];
  v45[36] = v51[36];
  *(_QWORD *)&v45[34] = aPid;
  *((_QWORD *)&v45[34] + 1) = 3LL;
  *(_QWORD *)&v51[0] = aPid_0;
  *((_QWORD *)&v51[0] + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(v79, v45);
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aWithFTerminate, 45LL);
  v11 = *(_QWORD *)&v45[0];
  v51[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v51[0];
  if ( *((_QWORD *)&v79[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v79[27] + 8, aWithFTerminate);
  *((_QWORD *)&v79[27] + 1) = v11;
  v79[28] = v45[0];
  memcpy(v83, v79, sizeof(v83));
  v12 = v83[18];
  if ( v83[18] == v83[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v83[16]);
  v13 = v83[17];
  v14 = 16 * v12;
  *(_QWORD *)(v83[17] + v14) = aPid;
  *(_QWORD *)(v13 + v14 + 8) = 3LL;
  v83[18] = v12 + 1;
  memcpy(v45, v83, sizeof(v45));
  clap_builder::builder::command::Command::arg_internal(v96, v45);
  memcpy(v95, v96, sizeof(v95));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aQuiet;
  *((_QWORD *)&v45[33] + 1) = 5LL;
  memcpy(v58, v45, 0x220uLL);
  v58[35] = v45[35];
  *(_QWORD *)((char *)&v58[36] + 4) = *(_QWORD *)((char *)&v45[36] + 4);
  HIDWORD(v58[36]) = HIDWORD(v45[36]);
  *(_QWORD *)&v58[34] = aQuiet;
  *((_QWORD *)&v58[34] + 1) = 5LL;
  LODWORD(v58[36]) = 113;
  v15 = *((_QWORD *)&v58[19] + 1);
  if ( *((_QWORD *)&v58[19] + 1) == *((_QWORD *)&v58[18] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v58[18] + 8);
  v16 = *(_QWORD *)&v58[19];
  v17 = 3 * v15;
  *(_QWORD *)(*(_QWORD *)&v58[19] + 8 * v17) = &unk_2CF40;
  *(_QWORD *)(v16 + 8 * v17 + 8) = 6LL;
  *(_BYTE *)(v16 + 8 * v17 + 16) = 1;
  *((_QWORD *)&v58[19] + 1) = v15 + 1;
  memcpy(v99, v58, sizeof(v99));
  *(_QWORD *)&v45[0] = aQuiet;
  *((_QWORD *)&v45[0] + 1) = 5LL;
  *(_QWORD *)&v45[1] = aVerbose;
  *((_QWORD *)&v45[1] + 1) = 7LL;
  *(_QWORD *)&v45[2] = 0LL;
  *((_QWORD *)&v45[2] + 1) = 2LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v99[128], v45);
  memcpy(v63, v99, sizeof(v63));
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aNeverOutputHea, 38LL);
  v18 = *(_QWORD *)&v45[0];
  v51[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v43 = v51[0];
  if ( *((_QWORD *)&v63[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v63[27] + 8, aNeverOutputHea);
  *((_QWORD *)&v63[27] + 1) = v18;
  v63[28] = v43;
  memcpy(v45, v63, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v63[36] + 13);
  HIBYTE(v45[36]) = HIBYTE(v63[36]);
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v95, v45);
  memcpy(v94, v95, sizeof(v94));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v51);
  *(_QWORD *)&v51[33] = aSleepInterval;
  *((_QWORD *)&v51[33] + 1) = 14LL;
  memcpy(v45, v51, 0x240uLL);
  *(_QWORD *)((char *)&v45[36] + 4) = *(_QWORD *)((char *)&v51[36] + 4);
  HIDWORD(v45[36]) = HIDWORD(v51[36]);
  LODWORD(v45[36]) = 115;
  *(_QWORD *)&v51[0] = aN;
  *((_QWORD *)&v51[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v100, v45);
  v100[68] = aSleepInterval;
  v100[69] = 14LL;
  memcpy(v80, v100, sizeof(v80));
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aNumberOfSecond, 72LL);
  v19 = *(_QWORD *)&v45[0];
  v51[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v43 = v51[0];
  if ( *((_QWORD *)&v80[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v80[27] + 8, aNumberOfSecond);
  *((_QWORD *)&v80[27] + 1) = v19;
  v80[28] = v43;
  memcpy(v45, v80, sizeof(v45));
  clap_builder::builder::command::Command::arg_internal(v94, v45);
  memcpy(v93, v94, sizeof(v93));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v51);
  *(_QWORD *)&v51[33] = aMaxUnchangedSt;
  *((_QWORD *)&v51[33] + 1) = 19LL;
  memcpy(v45, v51, sizeof(v45));
  *(_QWORD *)&v51[0] = aN;
  *((_QWORD *)&v51[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v101, v45);
  v101[68] = aMaxUnchangedSt;
  v101[69] = 19LL;
  memcpy(v81, v101, sizeof(v81));
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aReopenAFileWhi, 254LL);
  v20 = *(_QWORD *)&v45[0];
  v51[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v43 = v51[0];
  if ( *((_QWORD *)&v81[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v81[27] + 8, aReopenAFileWhi);
  *((_QWORD *)&v81[27] + 1) = v20;
  v81[28] = v43;
  memcpy(v45, v81, sizeof(v45));
  clap_builder::builder::command::Command::arg_internal(v93, v45);
  memcpy(v92, v93, sizeof(v92));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aVerbose;
  *((_QWORD *)&v45[33] + 1) = 7LL;
  memcpy(v65, v45, 0x220uLL);
  v65[35] = v45[35];
  *(_QWORD *)((char *)&v65[36] + 4) = *(_QWORD *)((char *)&v45[36] + 4);
  HIDWORD(v65[36]) = HIDWORD(v45[36]);
  *(_QWORD *)&v65[34] = aVerbose;
  *((_QWORD *)&v65[34] + 1) = 7LL;
  LODWORD(v65[36]) = 118;
  *(_QWORD *)&v45[0] = aQuiet;
  *((_QWORD *)&v45[0] + 1) = 5LL;
  *(_QWORD *)&v45[1] = aVerbose;
  *((_QWORD *)&v45[1] + 1) = 7LL;
  *(_QWORD *)&v45[2] = 0LL;
  *((_QWORD *)&v45[2] + 1) = 2LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v65[8], v45);
  memcpy(v64, v65, sizeof(v64));
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aAlwaysOutputHe, 39LL);
  v21 = *(_QWORD *)&v45[0];
  v51[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v43 = v51[0];
  if ( *((_QWORD *)&v64[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v64[27] + 8, aAlwaysOutputHe);
  *((_QWORD *)&v64[27] + 1) = v21;
  v64[28] = v43;
  memcpy(v45, v64, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v64[36] + 13);
  HIBYTE(v45[36]) = HIBYTE(v64[36]);
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v92, v45);
  memcpy(v91, v92, sizeof(v91));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aZeroTerminated;
  *((_QWORD *)&v45[33] + 1) = 15LL;
  memcpy(v54, v45, 0x220uLL);
  *(_OWORD *)&v54[560] = v45[35];
  *(_QWORD *)&v54[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v55 = HIDWORD(v45[36]);
  *(_QWORD *)&v54[544] = aZeroTerminated;
  *(_QWORD *)&v54[552] = 15LL;
  *(_DWORD *)&v54[576] = 122;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aLineDelimiterI, 34LL);
  v22 = *(_QWORD *)&v45[0];
  v51[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v43 = v51[0];
  if ( *(_QWORD *)&v54[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v54[440], aLineDelimiterI);
  *(_QWORD *)&v54[440] = v22;
  *(_OWORD *)&v54[448] = v43;
  memcpy(v45, v54, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v55 + 1);
  HIBYTE(v45[36]) = HIBYTE(v55);
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v91, v45);
  memcpy(v90, v91, sizeof(v90));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aUsePolling;
  *((_QWORD *)&v45[33] + 1) = 11LL;
  memcpy(v84, v45, sizeof(v84));
  v23 = v84[39];
  if ( v84[39] == v84[37] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v84[37]);
  v24 = v84[38];
  v25 = 3 * v23;
  *(_QWORD *)(v84[38] + 8 * v25) = &unk_21F20;
  *(_QWORD *)(v24 + 8 * v25 + 8) = 16LL;
  *(_BYTE *)(v24 + 8 * v25 + 16) = 0;
  v84[39] = v23 + 1;
  memcpy(v66, v84, sizeof(v66));
  v26 = *((_QWORD *)&v66[19] + 1);
  if ( *((_QWORD *)&v66[19] + 1) == *((_QWORD *)&v66[18] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v66[18] + 8);
  v27 = *(_QWORD *)&v66[19];
  v28 = 3 * v26;
  *(_QWORD *)(*(_QWORD *)&v66[19] + 8 * v28) = &unk_2D0FC;
  *(_QWORD *)(v27 + 8 * v28 + 8) = 3LL;
  *(_BYTE *)(v27 + 8 * v28 + 16) = 0;
  *((_QWORD *)&v66[19] + 1) = v26 + 1;
  memcpy(v56, v66, 0x220uLL);
  *(_OWORD *)&v56[560] = v66[35];
  *(_OWORD *)&v56[576] = v66[36];
  *(_QWORD *)&v56[544] = aUsePolling;
  *(_QWORD *)&v56[552] = 11LL;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aDisableInotify, 49LL);
  v29 = *(_QWORD *)&v45[0];
  v51[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v43 = v51[0];
  if ( *(_QWORD *)&v56[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v56[440], aDisableInotify);
  *(_QWORD *)&v56[440] = v29;
  *(_OWORD *)&v56[448] = v43;
  memcpy(v45, v56, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)&v56[589];
  HIBYTE(v45[36]) = v56[591];
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v90, v45);
  memcpy(v89, v90, sizeof(v89));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aRetry;
  *((_QWORD *)&v45[33] + 1) = 5LL;
  memcpy(v59, v45, 0x220uLL);
  v59[35] = v45[35];
  v59[36] = v45[36];
  *(_QWORD *)&v59[34] = aRetry;
  *((_QWORD *)&v59[34] + 1) = 5LL;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aKeepTryingToOp, 48LL);
  v30 = *(_QWORD *)&v45[0];
  v51[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v51[0];
  if ( *((_QWORD *)&v59[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v59[27] + 8, aKeepTryingToOp);
  *((_QWORD *)&v59[27] + 1) = v30;
  v59[28] = v45[0];
  memcpy(v67, v59, sizeof(v67));
  v31 = v67[18];
  if ( v67[18] == v67[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v67[16]);
  v32 = v67[17];
  v33 = 16 * v31;
  *(_QWORD *)(v67[17] + v33) = aRetry;
  *(_QWORD *)(v32 + v33 + 8) = 5LL;
  v67[18] = v31 + 1;
  memcpy(v45, v67, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v67[73] + 5);
  HIBYTE(v45[36]) = HIBYTE(v67[73]);
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v89, v45);
  memcpy(v88, v89, sizeof(v88));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = asc_2CB84;
  *((_QWORD *)&v45[33] + 1) = 1LL;
  memcpy(v60, v45, 0x240uLL);
  *(_QWORD *)((char *)&v60[36] + 4) = *(_QWORD *)((char *)&v45[36] + 4);
  HIDWORD(v60[36]) = HIDWORD(v45[36]);
  LODWORD(v60[36]) = 70;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aSameAsFollowNa, 29LL);
  v34 = *(_QWORD *)&v45[0];
  v51[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v51[0];
  if ( *((_QWORD *)&v60[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v60[27] + 8, aSameAsFollowNa);
  *((_QWORD *)&v60[27] + 1) = v34;
  v60[28] = v45[0];
  memcpy(v68, v60, sizeof(v68));
  v35 = v68[18];
  if ( v68[18] == v68[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v68[16]);
  v36 = v68[17];
  v37 = 16 * v35;
  *(_QWORD *)(v68[17] + v37) = asc_2CB84;
  *(_QWORD *)(v36 + v37 + 8) = 1LL;
  v68[18] = v35 + 1;
  memcpy(v45, v68, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v68[73] + 5);
  HIBYTE(v45[36]) = HIBYTE(v68[73]);
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v88, v45);
  memcpy(v87, v88, sizeof(v87));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aPresumeInputPi;
  *((_QWORD *)&v45[33] + 1) = 19LL;
  memcpy(v57, v45, 0x220uLL);
  *(_OWORD *)&v57[560] = v45[35];
  *(_OWORD *)&v57[576] = v45[36];
  *(_QWORD *)&v57[544] = aPresumeInputPi_0;
  *(_QWORD *)&v57[552] = 18LL;
  v38 = *(_QWORD *)&v57[312];
  if ( *(_QWORD *)&v57[312] == *(_QWORD *)&v57[296] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v57[296]);
  v39 = *(_QWORD *)&v57[304];
  v40 = 3 * v38;
  *(_QWORD *)(*(_QWORD *)&v57[304] + 8 * v40) = aPresumeInputPi;
  *(_QWORD *)(v39 + 8 * v40 + 8) = 19LL;
  *(_BYTE *)(v39 + 8 * v40 + 16) = 0;
  *(_QWORD *)&v57[312] = v38 + 1;
  memcpy(v45, v57, 0x248uLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)&v57[589];
  HIBYTE(v45[36]) = v57[591];
  DWORD2(v45[36]) = *(_DWORD *)&v57[584] | 4;
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v87, v45);
  memcpy(v86, v87, sizeof(v86));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  v41 = v46;
  *(_QWORD *)&v45[33] = aFiles;
  *((_QWORD *)&v45[33] + 1) = 5LL;
  *(_OWORD *)v52 = v45[0];
  memcpy(&v52[40], (char *)&v45[2] + 8, 0x224uLL);
  *(_WORD *)v53 = *(_WORD *)((char *)&v45[36] + 13);
  v53[2] = HIBYTE(v45[36]);
  *(_QWORD *)&v52[16] = 1LL;
  *(_QWORD *)&v52[24] = 1LL;
  *(_QWORD *)&v52[32] = -1LL;
  v52[588] = 1;
  if ( *(_QWORD *)&v52[80] >= 4uLL && *(_QWORD *)&v52[80] != 5LL )
  {
    if ( **(_QWORD **)&v52[96] )
      (**(void (__fastcall ***)(_QWORD))&v52[96])(*(_QWORD *)&v52[88]);
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v52[88]);
  }
  *(_QWORD *)&v52[80] = 2LL;
  memcpy(v45, v52, 0x24DuLL);
  BYTE13(v45[36]) = 3;
  HIWORD(v45[36]) = *(_WORD *)&v53[1];
  clap_builder::builder::command::Command::arg_internal(v86, v45);
  memcpy(v41, v86, 0x2C8uLL);
  return v41;
}
