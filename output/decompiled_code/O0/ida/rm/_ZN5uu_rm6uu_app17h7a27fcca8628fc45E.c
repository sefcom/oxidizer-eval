void *__fastcall uu_rm::uu_app(void *a1)
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
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  void *v20; // rbx
  __int128 v22; // [rsp+0h] [rbp-53E8h] BYREF
  __int64 v23; // [rsp+10h] [rbp-53D8h]
  __int128 v24; // [rsp+20h] [rbp-53C8h] BYREF
  __int64 v25; // [rsp+30h] [rbp-53B8h]
  __int64 v26; // [rsp+38h] [rbp-53B0h]
  _OWORD v27[37]; // [rsp+40h] [rbp-53A8h] BYREF
  void *v28; // [rsp+290h] [rbp-5158h]
  __int64 v29; // [rsp+298h] [rbp-5150h] BYREF
  __int128 v30; // [rsp+2A0h] [rbp-5148h]
  _BYTE v31[588]; // [rsp+2B0h] [rbp-5138h] BYREF
  int v32; // [rsp+4FCh] [rbp-4EECh]
  _BYTE v33[588]; // [rsp+500h] [rbp-4EE8h] BYREF
  int v34; // [rsp+74Ch] [rbp-4C9Ch]
  _BYTE v35[588]; // [rsp+750h] [rbp-4C98h] BYREF
  int v36; // [rsp+99Ch] [rbp-4A4Ch]
  _BYTE v37[592]; // [rsp+9A0h] [rbp-4A48h] BYREF
  _BYTE v38[592]; // [rsp+BF0h] [rbp-47F8h] BYREF
  _BYTE v39[592]; // [rsp+E40h] [rbp-45A8h] BYREF
  _BYTE v40[592]; // [rsp+1090h] [rbp-4358h] BYREF
  _BYTE v41[592]; // [rsp+12E0h] [rbp-4108h] BYREF
  _OWORD v42[37]; // [rsp+1530h] [rbp-3EB8h] BYREF
  _OWORD v43[36]; // [rsp+1780h] [rbp-3C68h] BYREF
  __int128 v44; // [rsp+19C0h] [rbp-3A28h]
  _OWORD v45[37]; // [rsp+19D0h] [rbp-3A18h] BYREF
  _OWORD v46[37]; // [rsp+1C20h] [rbp-37C8h] BYREF
  _BYTE v47[589]; // [rsp+1E70h] [rbp-3578h] BYREF
  _BYTE v48[3]; // [rsp+20BDh] [rbp-332Bh]
  _DWORD v49[178]; // [rsp+20C0h] [rbp-3328h] BYREF
  _QWORD v50[74]; // [rsp+2388h] [rbp-3060h] BYREF
  _BYTE v51[592]; // [rsp+25D8h] [rbp-2E10h] BYREF
  _BYTE v52[592]; // [rsp+2828h] [rbp-2BC0h] BYREF
  _DWORD v53[178]; // [rsp+2A78h] [rbp-2970h] BYREF
  _BYTE v54[712]; // [rsp+2D40h] [rbp-26A8h] BYREF
  _BYTE v55[712]; // [rsp+3008h] [rbp-23E0h] BYREF
  _QWORD v56[89]; // [rsp+32D0h] [rbp-2118h] BYREF
  _BYTE v57[712]; // [rsp+3598h] [rbp-1E50h] BYREF
  _BYTE v58[712]; // [rsp+3860h] [rbp-1B88h] BYREF
  _BYTE v59[712]; // [rsp+3B28h] [rbp-18C0h] BYREF
  _BYTE v60[712]; // [rsp+3DF0h] [rbp-15F8h] BYREF
  _BYTE v61[712]; // [rsp+40B8h] [rbp-1330h] BYREF
  _QWORD v62[89]; // [rsp+4380h] [rbp-1068h] BYREF
  _BYTE v63[712]; // [rsp+4648h] [rbp-DA0h] BYREF
  _BYTE v64[712]; // [rsp+4910h] [rbp-AD8h] BYREF
  _BYTE v65[592]; // [rsp+4BD8h] [rbp-810h] BYREF
  _QWORD src[89]; // [rsp+4E28h] [rbp-5C0h] BYREF
  _BYTE dest[760]; // [rsp+50F0h] [rbp-2F8h] BYREF

  v62[7] = 0LL;
  v56[29] = 0LL;
  v50[6] = 0LL;
  *(_QWORD *)&v41[216] = 0LL;
  *(_QWORD *)&v31[264] = 0LL;
  v28 = a1;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(dest, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v49, dest);
  uucore::format_usage((unsigned int)&v29);
  v4 = v29;
  if ( v29 != 0x8000000000000000LL )
    v27[0] = v30;
  if ( *(_QWORD *)&v49[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v49[116], aOptionFile);
  *(_QWORD *)&v49[116] = v4;
  *(_OWORD *)&v49[118] = v27[0];
  memcpy(v53, v49, 0x2BCuLL);
  *(_QWORD *)&v53[175] = *(_QWORD *)&v49[175] | 0x8800000088LL;
  v53[177] = v49[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aForce;
  *((_QWORD *)&v27[33] + 1) = 5LL;
  memcpy(v31, v27, 0x220uLL);
  *(_OWORD *)&v31[560] = v27[35];
  *(_QWORD *)&v31[580] = *(_QWORD *)((char *)&v27[36] + 4);
  v32 = HIDWORD(v27[36]);
  *(_QWORD *)&v31[544] = aForce;
  *(_QWORD *)&v31[552] = 5LL;
  *(_DWORD *)&v31[576] = 102;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aIgnoreNonexist, 52LL);
  v5 = *(_QWORD *)&v27[0];
  v24 = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v22 = v24;
  if ( *(_QWORD *)&v31[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v31[440], aIgnoreNonexist);
  *(_QWORD *)&v31[440] = v5;
  *(_OWORD *)&v31[448] = v22;
  memcpy(v27, v31, 0x24CuLL);
  *(_WORD *)((char *)&v27[36] + 13) = *(_WORD *)((char *)&v32 + 1);
  HIBYTE(v27[36]) = HIBYTE(v32);
  BYTE12(v27[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v53, v27);
  memcpy(v64, v53, sizeof(v64));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aPrompt;
  *((_QWORD *)&v27[33] + 1) = 6LL;
  memcpy(v45, v27, 0x240uLL);
  *(_QWORD *)((char *)&v45[36] + 4) = *(_QWORD *)((char *)&v27[36] + 4);
  HIDWORD(v45[36]) = HIDWORD(v27[36]);
  LODWORD(v45[36]) = 105;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aPromptBeforeEv, 27LL);
  v6 = *(_QWORD *)&v27[0];
  v24 = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v27[0] = v24;
  if ( *((_QWORD *)&v45[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v45[27] + 8, aPromptBeforeEv);
  *((_QWORD *)&v45[27] + 1) = v6;
  v45[28] = v27[0];
  memcpy(v51, v45, sizeof(v51));
  *(_QWORD *)&v27[0] = aPromptMore;
  *((_QWORD *)&v27[0] + 1) = 11LL;
  *(_QWORD *)&v27[1] = aInteractive;
  *((_QWORD *)&v27[1] + 1) = 11LL;
  *(_QWORD *)&v27[2] = 0LL;
  *((_QWORD *)&v27[2] + 1) = 2LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v51[128], v27);
  memcpy(v27, v51, 0x24CuLL);
  *(_WORD *)((char *)&v27[36] + 13) = *(_WORD *)&v51[589];
  HIBYTE(v27[36]) = v51[591];
  BYTE12(v27[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v64, v27);
  memcpy(v63, v64, sizeof(v63));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aPromptMore;
  *((_QWORD *)&v27[33] + 1) = 11LL;
  memcpy(v46, v27, 0x240uLL);
  *(_QWORD *)((char *)&v46[36] + 4) = *(_QWORD *)((char *)&v27[36] + 4);
  HIDWORD(v46[36]) = HIDWORD(v27[36]);
  LODWORD(v46[36]) = 73;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aPromptOnceBefo, 161LL);
  v7 = *(_QWORD *)&v27[0];
  v24 = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v27[0] = v24;
  if ( *((_QWORD *)&v46[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v46[27] + 8, aPromptOnceBefo);
  *((_QWORD *)&v46[27] + 1) = v7;
  v46[28] = v27[0];
  memcpy(v52, v46, sizeof(v52));
  *(_QWORD *)&v27[0] = aPrompt;
  *((_QWORD *)&v27[0] + 1) = 6LL;
  *(_QWORD *)&v27[1] = aInteractive;
  *((_QWORD *)&v27[1] + 1) = 11LL;
  *(_QWORD *)&v27[2] = 0LL;
  *((_QWORD *)&v27[2] + 1) = 2LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v52[128], v27);
  memcpy(v27, v52, 0x24CuLL);
  *(_WORD *)((char *)&v27[36] + 13) = *(_WORD *)&v52[589];
  HIBYTE(v27[36]) = v52[591];
  BYTE12(v27[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v63, v27);
  memcpy(v62, v63, sizeof(v62));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aInteractive;
  *((_QWORD *)&v27[33] + 1) = 11LL;
  memcpy(v42, v27, 0x220uLL);
  v42[35] = v27[35];
  v42[36] = v27[36];
  *(_QWORD *)&v42[34] = aInteractive;
  *((_QWORD *)&v42[34] + 1) = 11LL;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aPromptAccordin, 88LL);
  v8 = *(_QWORD *)&v27[0];
  v24 = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v22 = v24;
  if ( *((_QWORD *)&v42[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v42[27] + 8, aPromptAccordin);
  *((_QWORD *)&v42[27] + 1) = v8;
  v42[28] = v22;
  memcpy(v27, v42, sizeof(v27));
  clap_builder::builder::arg::Arg::value_names(v50, v27);
  v50[2] = 1LL;
  v50[3] = 0LL;
  v50[4] = 1LL;
  memcpy(v27, v50, 0x248uLL);
  *((_QWORD *)&v27[36] + 1) = v50[73] | 0x80LL;
  *(_QWORD *)&v24 = aAlways_0;
  *((_QWORD *)&v24 + 1) = 6LL;
  v25 = 0LL;
  v26 = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v22, &v24);
  alloc::raw_vec::RawVec<T,A>::current_memory(&v24, &v27[26]);
  if ( *((_QWORD *)&v24 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v27[27], v24, *((_QWORD *)&v24 + 1), v25);
  *(_QWORD *)&v27[27] = v23;
  v27[26] = v22;
  memcpy(v65, v27, sizeof(v65));
  *(_QWORD *)&v27[0] = aPrompt;
  *((_QWORD *)&v27[0] + 1) = 6LL;
  *(_QWORD *)&v27[1] = aPromptMore;
  *((_QWORD *)&v27[1] + 1) = 11LL;
  *(_QWORD *)&v27[2] = 0LL;
  *((_QWORD *)&v27[2] + 1) = 2LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v65[128], v27);
  memcpy(v27, v65, sizeof(v27));
  clap_builder::builder::command::Command::arg_internal(v62, v27);
  memcpy(v61, v62, sizeof(v61));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aOneFileSystem;
  *((_QWORD *)&v27[33] + 1) = 15LL;
  memcpy(v37, v27, 0x220uLL);
  *(_OWORD *)&v37[560] = v27[35];
  *(_OWORD *)&v37[576] = v27[36];
  *(_QWORD *)&v37[544] = aOneFileSystem;
  *(_QWORD *)&v37[552] = 15LL;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aWhenRemovingAH, 163LL);
  v9 = *(_QWORD *)&v27[0];
  v24 = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v22 = v24;
  if ( *(_QWORD *)&v37[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v37[440], aWhenRemovingAH);
  *(_QWORD *)&v37[440] = v9;
  *(_OWORD *)&v37[448] = v22;
  memcpy(v27, v37, 0x24CuLL);
  *(_WORD *)((char *)&v27[36] + 13) = *(_WORD *)&v37[589];
  HIBYTE(v27[36]) = v37[591];
  BYTE12(v27[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v61, v27);
  memcpy(v60, v61, sizeof(v60));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aNoPreserveRoot;
  *((_QWORD *)&v27[33] + 1) = 16LL;
  memcpy(v38, v27, 0x220uLL);
  *(_OWORD *)&v38[560] = v27[35];
  *(_OWORD *)&v38[576] = v27[36];
  *(_QWORD *)&v38[544] = aNoPreserveRoot;
  *(_QWORD *)&v38[552] = 16LL;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aDoNotTreatSpec, 26LL);
  v10 = *(_QWORD *)&v27[0];
  v24 = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v22 = v24;
  if ( *(_QWORD *)&v38[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v38[440], aDoNotTreatSpec);
  *(_QWORD *)&v38[440] = v10;
  *(_OWORD *)&v38[448] = v22;
  memcpy(v27, v38, 0x24CuLL);
  *(_WORD *)((char *)&v27[36] + 13) = *(_WORD *)&v38[589];
  HIBYTE(v27[36]) = v38[591];
  BYTE12(v27[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v60, v27);
  memcpy(v59, v60, sizeof(v59));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aPreserveRoot;
  *((_QWORD *)&v27[33] + 1) = 13LL;
  memcpy(v39, v27, 0x220uLL);
  *(_OWORD *)&v39[560] = v27[35];
  *(_OWORD *)&v39[576] = v27[36];
  *(_QWORD *)&v39[544] = aPreserveRoot;
  *(_QWORD *)&v39[552] = 13LL;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aDoNotRemoveDef, 27LL);
  v11 = *(_QWORD *)&v27[0];
  v24 = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v22 = v24;
  if ( *(_QWORD *)&v39[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v39[440], aDoNotRemoveDef);
  *(_QWORD *)&v39[440] = v11;
  *(_OWORD *)&v39[448] = v22;
  memcpy(v27, v39, 0x24CuLL);
  *(_WORD *)((char *)&v27[36] + 13) = *(_WORD *)&v39[589];
  HIBYTE(v27[36]) = v39[591];
  BYTE12(v27[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v59, v27);
  memcpy(v58, v59, sizeof(v58));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aRecursive;
  *((_QWORD *)&v27[33] + 1) = 9LL;
  memcpy(v43, v27, sizeof(v43));
  *(_QWORD *)((char *)&v44 + 4) = *(_QWORD *)((char *)&v27[36] + 4);
  HIDWORD(v44) = HIDWORD(v27[36]);
  LODWORD(v44) = 114;
  v12 = *(_QWORD *)&v43[21];
  if ( *(_QWORD *)&v43[21] == *(_QWORD *)&v43[20] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v43[20]);
  v13 = *((_QWORD *)&v43[20] + 1);
  *(_DWORD *)(*((_QWORD *)&v43[20] + 1) + 8 * v12) = 82;
  *(_BYTE *)(v13 + 8 * v12 + 4) = 1;
  *(_QWORD *)&v43[21] = v12 + 1;
  memcpy(v40, v43, 0x220uLL);
  *(_OWORD *)&v40[560] = v43[35];
  *(_OWORD *)&v40[576] = v44;
  *(_QWORD *)&v40[544] = aRecursive;
  *(_QWORD *)&v40[552] = 9LL;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aRemoveDirector, 49LL);
  v14 = *(_QWORD *)&v27[0];
  v24 = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v22 = v24;
  if ( *(_QWORD *)&v40[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v40[440], aRemoveDirector);
  *(_QWORD *)&v40[440] = v14;
  *(_OWORD *)&v40[448] = v22;
  memcpy(v27, v40, 0x24CuLL);
  *(_WORD *)((char *)&v27[36] + 13) = *(_WORD *)&v40[589];
  HIBYTE(v27[36]) = v40[591];
  BYTE12(v27[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v58, v27);
  memcpy(v57, v58, sizeof(v57));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aDir;
  *((_QWORD *)&v27[33] + 1) = 3LL;
  memcpy(v33, v27, 0x220uLL);
  *(_OWORD *)&v33[560] = v27[35];
  *(_QWORD *)&v33[580] = *(_QWORD *)((char *)&v27[36] + 4);
  v34 = HIDWORD(v27[36]);
  *(_QWORD *)&v33[544] = aDir;
  *(_QWORD *)&v33[552] = 3LL;
  *(_DWORD *)&v33[576] = 100;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aRemoveEmptyDir, 24LL);
  v15 = *(_QWORD *)&v27[0];
  v24 = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v22 = v24;
  if ( *(_QWORD *)&v33[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v33[440], aRemoveEmptyDir);
  *(_QWORD *)&v33[440] = v15;
  *(_OWORD *)&v33[448] = v22;
  memcpy(v27, v33, 0x24CuLL);
  *(_WORD *)((char *)&v27[36] + 13) = *(_WORD *)((char *)&v34 + 1);
  HIBYTE(v27[36]) = HIBYTE(v34);
  BYTE12(v27[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v57, v27);
  memcpy(v56, v57, sizeof(v56));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aVerbose;
  *((_QWORD *)&v27[33] + 1) = 7LL;
  memcpy(v35, v27, 0x220uLL);
  *(_OWORD *)&v35[560] = v27[35];
  *(_QWORD *)&v35[580] = *(_QWORD *)((char *)&v27[36] + 4);
  v36 = HIDWORD(v27[36]);
  *(_QWORD *)&v35[544] = aVerbose;
  *(_QWORD *)&v35[552] = 7LL;
  *(_DWORD *)&v35[576] = 118;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aExplainWhatIsB, 26LL);
  v16 = *(_QWORD *)&v27[0];
  v24 = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v22 = v24;
  if ( *(_QWORD *)&v35[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35[440], aExplainWhatIsB);
  *(_QWORD *)&v35[440] = v16;
  *(_OWORD *)&v35[448] = v22;
  memcpy(v27, v35, 0x24CuLL);
  *(_WORD *)((char *)&v27[36] + 13) = *(_WORD *)((char *)&v36 + 1);
  HIBYTE(v27[36]) = HIBYTE(v36);
  BYTE12(v27[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v56, v27);
  memcpy(v55, v56, sizeof(v55));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aPresumeInputTt;
  *((_QWORD *)&v27[33] + 1) = 18LL;
  memcpy(v41, v27, 0x220uLL);
  *(_OWORD *)&v41[560] = v27[35];
  *(_OWORD *)&v41[576] = v27[36];
  *(_QWORD *)&v41[544] = aPresumeInputTt_0;
  *(_QWORD *)&v41[552] = 17LL;
  v17 = *(_QWORD *)&v41[312];
  if ( *(_QWORD *)&v41[312] == *(_QWORD *)&v41[296] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v41[296]);
  v18 = *(_QWORD *)&v41[304];
  v19 = 3 * v17;
  *(_QWORD *)(*(_QWORD *)&v41[304] + 8 * v19) = aPresumeInputTt;
  *(_QWORD *)(v18 + 8 * v19 + 8) = 18LL;
  *(_BYTE *)(v18 + 8 * v19 + 16) = 0;
  *(_QWORD *)&v41[312] = v17 + 1;
  memcpy(v27, v41, 0x248uLL);
  *(_WORD *)((char *)&v27[36] + 13) = *(_WORD *)&v41[589];
  HIBYTE(v27[36]) = v41[591];
  DWORD2(v27[36]) = *(_DWORD *)&v41[584] | 4;
  BYTE12(v27[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v55, v27);
  memcpy(v54, v55, sizeof(v54));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aFiles;
  *((_QWORD *)&v27[33] + 1) = 5LL;
  memcpy(v47, v27, 0x24CuLL);
  *(_WORD *)v48 = *(_WORD *)((char *)&v27[36] + 13);
  v48[2] = HIBYTE(v27[36]);
  v47[588] = 1;
  if ( *(_QWORD *)&v47[80] >= 4uLL && *(_QWORD *)&v47[80] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v47[88]);
  *(_QWORD *)&v47[80] = 2LL;
  v27[0] = *(_OWORD *)v47;
  memcpy((char *)&v27[2] + 8, &v47[40], 0x225uLL);
  *(_QWORD *)&v27[1] = 1LL;
  *((_QWORD *)&v27[1] + 1) = 1LL;
  *(_QWORD *)&v27[2] = -1LL;
  BYTE13(v27[36]) = 2;
  HIWORD(v27[36]) = *(_WORD *)&v48[1];
  clap_builder::builder::command::Command::arg_internal(v54, v27);
  v20 = v28;
  memcpy(v28, v54, 0x2C8uLL);
  return v20;
}
