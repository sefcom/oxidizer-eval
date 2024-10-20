void *__fastcall uu_ln::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r14
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r14
  __int128 v28; // [rsp+0h] [rbp-5DE8h]
  _OWORD v29[37]; // [rsp+10h] [rbp-5DD8h] BYREF
  __int64 v30; // [rsp+268h] [rbp-5B80h] BYREF
  __int128 v31; // [rsp+270h] [rbp-5B78h]
  __int128 v32; // [rsp+280h] [rbp-5B68h] BYREF
  _QWORD v33[68]; // [rsp+2A8h] [rbp-5B40h] BYREF
  int v34; // [rsp+4C8h] [rbp-5920h]
  unsigned __int16 v35; // [rsp+4CEh] [rbp-591Ah]
  _BYTE v36[588]; // [rsp+4D0h] [rbp-5918h] BYREF
  int v37; // [rsp+71Ch] [rbp-56CCh]
  _BYTE v38[588]; // [rsp+720h] [rbp-56C8h] BYREF
  int v39; // [rsp+96Ch] [rbp-547Ch]
  _BYTE v40[588]; // [rsp+970h] [rbp-5478h] BYREF
  int v41; // [rsp+BBCh] [rbp-522Ch]
  _BYTE v42[588]; // [rsp+BC0h] [rbp-5228h] BYREF
  int v43; // [rsp+E0Ch] [rbp-4FDCh]
  _BYTE v44[588]; // [rsp+E10h] [rbp-4FD8h] BYREF
  int v45; // [rsp+105Ch] [rbp-4D8Ch]
  _BYTE v46[588]; // [rsp+1060h] [rbp-4D88h] BYREF
  int v47; // [rsp+12ACh] [rbp-4B3Ch]
  _OWORD v48[37]; // [rsp+12B0h] [rbp-4B38h] BYREF
  _OWORD v49[37]; // [rsp+1500h] [rbp-48E8h] BYREF
  _OWORD v50[37]; // [rsp+1750h] [rbp-4698h] BYREF
  _OWORD v51[37]; // [rsp+19A0h] [rbp-4448h] BYREF
  _QWORD v52[74]; // [rsp+1BF0h] [rbp-41F8h] BYREF
  _QWORD v53[74]; // [rsp+1E40h] [rbp-3FA8h] BYREF
  _QWORD v54[74]; // [rsp+2090h] [rbp-3D58h] BYREF
  _DWORD v55[178]; // [rsp+22E0h] [rbp-3B08h] BYREF
  _QWORD v56[74]; // [rsp+25A8h] [rbp-3840h] BYREF
  _DWORD v57[178]; // [rsp+27F8h] [rbp-35F0h] BYREF
  _BYTE v58[712]; // [rsp+2AC0h] [rbp-3328h] BYREF
  _QWORD v59[89]; // [rsp+2D88h] [rbp-3060h] BYREF
  _BYTE v60[712]; // [rsp+3050h] [rbp-2D98h] BYREF
  _BYTE v61[712]; // [rsp+3318h] [rbp-2AD0h] BYREF
  _BYTE v62[712]; // [rsp+35E0h] [rbp-2808h] BYREF
  _BYTE v63[712]; // [rsp+38A8h] [rbp-2540h] BYREF
  _QWORD v64[89]; // [rsp+3B70h] [rbp-2278h] BYREF
  _BYTE v65[712]; // [rsp+3E38h] [rbp-1FB0h] BYREF
  _BYTE v66[712]; // [rsp+4100h] [rbp-1CE8h] BYREF
  _BYTE v67[712]; // [rsp+43C8h] [rbp-1A20h] BYREF
  _BYTE v68[712]; // [rsp+4690h] [rbp-1758h] BYREF
  _BYTE v69[712]; // [rsp+4958h] [rbp-1490h] BYREF
  _QWORD v70[89]; // [rsp+4C20h] [rbp-11C8h] BYREF
  _BYTE v71[592]; // [rsp+4EE8h] [rbp-F00h] BYREF
  _QWORD src[89]; // [rsp+5138h] [rbp-CB0h] BYREF
  _BYTE v73[592]; // [rsp+5400h] [rbp-9E8h] BYREF
  _BYTE v74[592]; // [rsp+5650h] [rbp-798h] BYREF
  _BYTE v75[592]; // [rsp+58A0h] [rbp-548h] BYREF
  _BYTE desta[760]; // [rsp+5AF0h] [rbp-2F8h] BYREF

  v70[51] = 0LL;
  v64[73] = 0LL;
  v59[6] = 0LL;
  v52[57] = 0LL;
  *(_QWORD *)&v42[504] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v55, desta);
  uucore::format_usage((unsigned int)&v30);
  v4 = v30;
  if ( v30 != 0x8000000000000000LL )
    v29[0] = v31;
  if ( *(_QWORD *)&v55[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v55[116], aOptionTTargetL);
  *(_QWORD *)&v55[116] = v4;
  *(_OWORD *)&v55[118] = v29[0];
  memcpy(v57, v55, 0x2BCuLL);
  *(_QWORD *)&v57[175] = *(_QWORD *)&v55[175] | 0x8000000080LL;
  v57[177] = v55[177];
  uucore::features::backup_control::arguments::backup(v73);
  memcpy(v29, v73, sizeof(v29));
  clap_builder::builder::command::Command::arg_internal(v57, v29);
  memcpy(v70, v57, sizeof(v70));
  uucore::features::backup_control::arguments::backup_no_args(v74);
  memcpy(v29, v74, sizeof(v29));
  clap_builder::builder::command::Command::arg_internal(v70, v29);
  memcpy(v69, v70, sizeof(v69));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = aForce_0;
  *((_QWORD *)&v29[33] + 1) = 5LL;
  memcpy(v36, v29, 0x220uLL);
  *(_OWORD *)&v36[560] = v29[35];
  *(_QWORD *)&v36[580] = *(_QWORD *)((char *)&v29[36] + 4);
  v37 = HIDWORD(v29[36]);
  *(_QWORD *)&v36[544] = aForce_0;
  *(_QWORD *)&v36[552] = 5LL;
  *(_DWORD *)&v36[576] = 102;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aRemoveExisting, 33LL);
  v5 = *(_QWORD *)&v29[0];
  v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v28 = v32;
  if ( *(_QWORD *)&v36[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v36[440], aRemoveExisting);
  *(_QWORD *)&v36[440] = v5;
  *(_OWORD *)&v36[448] = v28;
  memcpy(v29, v36, 0x24CuLL);
  *(_WORD *)((char *)&v29[36] + 13) = *(_WORD *)((char *)&v37 + 1);
  HIBYTE(v29[36]) = HIBYTE(v37);
  BYTE12(v29[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v69, v29);
  memcpy(v68, v69, sizeof(v68));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = aInteractive_0;
  *((_QWORD *)&v29[33] + 1) = 11LL;
  memcpy(v38, v29, 0x220uLL);
  *(_OWORD *)&v38[560] = v29[35];
  *(_QWORD *)&v38[580] = *(_QWORD *)((char *)&v29[36] + 4);
  v39 = HIDWORD(v29[36]);
  *(_QWORD *)&v38[544] = aInteractive_0;
  *(_QWORD *)&v38[552] = 11LL;
  *(_DWORD *)&v38[576] = 105;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aPromptWhetherT, 51LL);
  v6 = *(_QWORD *)&v29[0];
  v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v28 = v32;
  if ( *(_QWORD *)&v38[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v38[440], aPromptWhetherT);
  *(_QWORD *)&v38[440] = v6;
  *(_OWORD *)&v38[448] = v28;
  memcpy(v29, v38, 0x24CuLL);
  *(_WORD *)((char *)&v29[36] + 13) = *(_WORD *)((char *)&v39 + 1);
  HIBYTE(v29[36]) = HIBYTE(v39);
  BYTE12(v29[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v68, v29);
  memcpy(v67, v68, sizeof(v67));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = aNoDereference_0;
  *((_QWORD *)&v29[33] + 1) = 14LL;
  memcpy(v40, v29, 0x220uLL);
  *(_OWORD *)&v40[560] = v29[35];
  *(_QWORD *)&v40[580] = *(_QWORD *)((char *)&v29[36] + 4);
  v41 = HIDWORD(v29[36]);
  *(_QWORD *)&v40[544] = aNoDereference_0;
  *(_QWORD *)&v40[552] = 14LL;
  *(_DWORD *)&v40[576] = 110;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aTreatLinkNameA, 72LL);
  v7 = *(_QWORD *)&v29[0];
  v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v28 = v32;
  if ( *(_QWORD *)&v40[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v40[440], aTreatLinkNameA);
  *(_QWORD *)&v40[440] = v7;
  *(_OWORD *)&v40[448] = v28;
  memcpy(v29, v40, 0x24CuLL);
  *(_WORD *)((char *)&v29[36] + 13) = *(_WORD *)((char *)&v41 + 1);
  HIBYTE(v29[36]) = HIBYTE(v41);
  BYTE12(v29[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v67, v29);
  memcpy(v66, v67, sizeof(v66));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = aLogical_0;
  *((_QWORD *)&v29[33] + 1) = 7LL;
  memcpy(v48, v29, 0x220uLL);
  v48[35] = v29[35];
  *(_QWORD *)((char *)&v48[36] + 4) = *(_QWORD *)((char *)&v29[36] + 4);
  HIDWORD(v48[36]) = HIDWORD(v29[36]);
  *(_QWORD *)&v48[34] = aLogical_0;
  *((_QWORD *)&v48[34] + 1) = 7LL;
  LODWORD(v48[36]) = 76;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aFollowTargetsT, 38LL);
  v8 = *(_QWORD *)&v29[0];
  v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v29[0] = v32;
  if ( *((_QWORD *)&v48[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v48[27] + 8, aFollowTargetsT);
  *((_QWORD *)&v48[27] + 1) = v8;
  v48[28] = v29[0];
  memcpy(v52, v48, sizeof(v52));
  v9 = v52[18];
  if ( v52[18] == v52[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v52[16]);
  v10 = v52[17];
  v11 = 16 * v9;
  *(_QWORD *)(v52[17] + v11) = &unk_17A30;
  *(_QWORD *)(v10 + v11 + 8) = 8LL;
  v52[18] = v9 + 1;
  memcpy(v29, v52, 0x24CuLL);
  *(_WORD *)((char *)&v29[36] + 13) = *(_WORD *)((char *)&v52[73] + 5);
  HIBYTE(v29[36]) = HIBYTE(v52[73]);
  BYTE12(v29[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v66, v29);
  memcpy(v65, v66, sizeof(v65));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = &unk_17A30;
  *((_QWORD *)&v29[33] + 1) = 8LL;
  memcpy(v42, v29, 0x220uLL);
  *(_OWORD *)&v42[560] = v29[35];
  *(_QWORD *)&v42[580] = *(_QWORD *)((char *)&v29[36] + 4);
  v43 = HIDWORD(v29[36]);
  *(_QWORD *)&v42[544] = &unk_17A30;
  *(_QWORD *)&v42[552] = 8LL;
  *(_DWORD *)&v42[576] = 80;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aMakeHardLinksD, 42LL);
  v12 = *(_QWORD *)&v29[0];
  v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v28 = v32;
  if ( *(_QWORD *)&v42[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v42[440], aMakeHardLinksD);
  *(_QWORD *)&v42[440] = v12;
  *(_OWORD *)&v42[448] = v28;
  memcpy(v29, v42, 0x24CuLL);
  *(_WORD *)((char *)&v29[36] + 13) = *(_WORD *)((char *)&v43 + 1);
  HIBYTE(v29[36]) = HIBYTE(v43);
  BYTE12(v29[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v65, v29);
  memcpy(v64, v65, sizeof(v64));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = aSymbolic;
  *((_QWORD *)&v29[33] + 1) = 8LL;
  memcpy(v49, v29, 0x220uLL);
  v49[35] = v29[35];
  *(_QWORD *)((char *)&v49[36] + 4) = *(_QWORD *)((char *)&v29[36] + 4);
  HIDWORD(v49[36]) = HIDWORD(v29[36]);
  *(_QWORD *)&v49[34] = aSymbolic;
  *((_QWORD *)&v49[34] + 1) = 8LL;
  LODWORD(v49[36]) = 115;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aMakeSymbolicLi, 41LL);
  v13 = *(_QWORD *)&v29[0];
  v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v29[0] = v32;
  if ( *((_QWORD *)&v49[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v49[27] + 8, aMakeSymbolicLi);
  *((_QWORD *)&v49[27] + 1) = v13;
  v49[28] = v29[0];
  memcpy(v53, v49, sizeof(v53));
  v14 = v53[18];
  if ( v53[18] == v53[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v53[16]);
  v15 = v53[17];
  v16 = 16 * v14;
  *(_QWORD *)(v53[17] + v16) = aSymbolic;
  *(_QWORD *)(v15 + v16 + 8) = 8LL;
  v53[18] = v14 + 1;
  memcpy(v29, v53, 0x24CuLL);
  *(_WORD *)((char *)&v29[36] + 13) = *(_WORD *)((char *)&v53[73] + 5);
  HIBYTE(v29[36]) = HIBYTE(v53[73]);
  BYTE12(v29[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v64, v29);
  memcpy(v63, v64, sizeof(v63));
  uucore::features::backup_control::arguments::suffix(v75);
  memcpy(v29, v75, sizeof(v29));
  clap_builder::builder::command::Command::arg_internal(v63, v29);
  memcpy(v62, v63, sizeof(v62));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = aTargetDirector;
  *((_QWORD *)&v29[33] + 1) = 16LL;
  memcpy(v50, v29, 0x220uLL);
  v50[35] = v29[35];
  *(_QWORD *)((char *)&v50[36] + 4) = *(_QWORD *)((char *)&v29[36] + 4);
  HIDWORD(v50[36]) = HIDWORD(v29[36]);
  *(_QWORD *)&v50[34] = aTargetDirector;
  *((_QWORD *)&v50[34] + 1) = 16LL;
  LODWORD(v50[36]) = 116;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aSpecifyTheDire, 50LL);
  v17 = *(_QWORD *)&v29[0];
  v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v28 = v32;
  if ( *((_QWORD *)&v50[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v50[27] + 8, aSpecifyTheDire);
  *((_QWORD *)&v50[27] + 1) = v17;
  v50[28] = v28;
  memcpy(v29, v50, sizeof(v29));
  *(_QWORD *)&v32 = aDirectory;
  *((_QWORD *)&v32 + 1) = 9LL;
  clap_builder::builder::arg::Arg::value_names(v71, v29);
  v71[589] = 4;
  memcpy(v56, v71, sizeof(v56));
  v18 = v56[15];
  if ( v56[15] == v56[13] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v56[13]);
  v19 = v56[14];
  v20 = 16 * v18;
  *(_QWORD *)(v56[14] + v20) = &unk_20A23;
  *(_QWORD *)(v19 + v20 + 8) = 19LL;
  v56[15] = v18 + 1;
  memcpy(v29, v56, sizeof(v29));
  clap_builder::builder::command::Command::arg_internal(v62, v29);
  memcpy(v61, v62, sizeof(v61));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = &unk_20A23;
  *((_QWORD *)&v29[33] + 1) = 19LL;
  memcpy(v44, v29, 0x220uLL);
  *(_OWORD *)&v44[560] = v29[35];
  *(_QWORD *)&v44[580] = *(_QWORD *)((char *)&v29[36] + 4);
  v45 = HIDWORD(v29[36]);
  *(_QWORD *)&v44[544] = &unk_20A23;
  *(_QWORD *)&v44[552] = 19LL;
  *(_DWORD *)&v44[576] = 84;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aTreatLinkNameA_0, 39LL);
  v21 = *(_QWORD *)&v29[0];
  v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v28 = v32;
  if ( *(_QWORD *)&v44[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v44[440], aTreatLinkNameA_0);
  *(_QWORD *)&v44[440] = v21;
  *(_OWORD *)&v44[448] = v28;
  memcpy(v29, v44, 0x24CuLL);
  *(_WORD *)((char *)&v29[36] + 13) = *(_WORD *)((char *)&v45 + 1);
  HIBYTE(v29[36]) = HIBYTE(v45);
  BYTE12(v29[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v61, v29);
  memcpy(v60, v61, sizeof(v60));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = aRelative;
  *((_QWORD *)&v29[33] + 1) = 8LL;
  memcpy(v51, v29, 0x220uLL);
  v51[35] = v29[35];
  *(_QWORD *)((char *)&v51[36] + 4) = *(_QWORD *)((char *)&v29[36] + 4);
  HIDWORD(v51[36]) = HIDWORD(v29[36]);
  *(_QWORD *)&v51[34] = aRelative;
  *((_QWORD *)&v51[34] + 1) = 8LL;
  LODWORD(v51[36]) = 114;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aCreateSymbolic, 47LL);
  v22 = *(_QWORD *)&v29[0];
  v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v29[0] = v32;
  if ( *((_QWORD *)&v51[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v51[27] + 8, aCreateSymbolic);
  *((_QWORD *)&v51[27] + 1) = v22;
  v51[28] = v29[0];
  memcpy(v54, v51, sizeof(v54));
  v23 = v54[24];
  if ( v54[24] == v54[22] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v54[22]);
  v24 = v54[23];
  v25 = 32 * v23;
  *(_QWORD *)(v54[23] + v25) = 0LL;
  *(_QWORD *)(v24 + v25 + 16) = aSymbolic;
  *(_QWORD *)(v24 + v25 + 24) = 8LL;
  v54[24] = v23 + 1;
  memcpy(v29, v54, 0x24CuLL);
  *(_WORD *)((char *)&v29[36] + 13) = *(_WORD *)((char *)&v54[73] + 5);
  HIBYTE(v29[36]) = HIBYTE(v54[73]);
  BYTE12(v29[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v60, v29);
  memcpy(v59, v60, sizeof(v59));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = aVerbose_0;
  *((_QWORD *)&v29[33] + 1) = 7LL;
  memcpy(v46, v29, 0x220uLL);
  *(_OWORD *)&v46[560] = v29[35];
  *(_QWORD *)&v46[580] = *(_QWORD *)((char *)&v29[36] + 4);
  v47 = HIDWORD(v29[36]);
  *(_QWORD *)&v46[544] = aVerbose_0;
  *(_QWORD *)&v46[552] = 7LL;
  *(_DWORD *)&v46[576] = 118;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aPrintNameOfEac, 30LL);
  v26 = *(_QWORD *)&v29[0];
  v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v28 = v32;
  if ( *(_QWORD *)&v46[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v46[440], aPrintNameOfEac);
  *(_QWORD *)&v46[440] = v26;
  *(_OWORD *)&v46[448] = v28;
  memcpy(v29, v46, 0x24CuLL);
  *(_WORD *)((char *)&v29[36] + 13) = *(_WORD *)((char *)&v47 + 1);
  HIBYTE(v29[36]) = HIBYTE(v47);
  BYTE12(v29[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v59, v29);
  memcpy(v58, v59, sizeof(v58));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(&v32);
  v33[61] = aFiles;
  v33[62] = 5LL;
  v29[0] = v32;
  memcpy((char *)&v29[2] + 8, v33, 0x220uLL);
  *(_QWORD *)&v29[1] = 1LL;
  *((_QWORD *)&v29[1] + 1) = 1LL;
  *(_QWORD *)&v29[2] = -1LL;
  DWORD2(v29[36]) = v34 | 1;
  HIDWORD(v29[36]) = (v35 << 16) | 0x201;
  clap_builder::builder::command::Command::arg_internal(v58, v29);
  memcpy(dest, v58, 0x2C8uLL);
  return dest;
}
