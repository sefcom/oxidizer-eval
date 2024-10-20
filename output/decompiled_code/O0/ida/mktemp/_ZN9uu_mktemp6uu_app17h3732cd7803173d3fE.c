void *__fastcall uu_mktemp::uu_app(void *dest)
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
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int128 v16; // [rsp+0h] [rbp-41A8h]
  _OWORD v17[37]; // [rsp+10h] [rbp-4198h] BYREF
  __int64 v18; // [rsp+268h] [rbp-3F40h] BYREF
  __int128 v19; // [rsp+270h] [rbp-3F38h]
  __int128 v20; // [rsp+280h] [rbp-3F28h] BYREF
  _QWORD v21[69]; // [rsp+2A8h] [rbp-3F00h] BYREF
  _BYTE v22[588]; // [rsp+4D0h] [rbp-3CD8h] BYREF
  int v23; // [rsp+71Ch] [rbp-3A8Ch]
  _BYTE v24[588]; // [rsp+720h] [rbp-3A88h] BYREF
  int v25; // [rsp+96Ch] [rbp-383Ch]
  _BYTE v26[588]; // [rsp+970h] [rbp-3838h] BYREF
  int v27; // [rsp+BBCh] [rbp-35ECh]
  _BYTE v28[588]; // [rsp+BC0h] [rbp-35E8h] BYREF
  int v29; // [rsp+E0Ch] [rbp-339Ch]
  _OWORD v30[37]; // [rsp+E10h] [rbp-3398h] BYREF
  _OWORD v31[37]; // [rsp+1060h] [rbp-3148h] BYREF
  _OWORD v32[37]; // [rsp+12B0h] [rbp-2EF8h] BYREF
  _QWORD v33[74]; // [rsp+1500h] [rbp-2CA8h] BYREF
  _DWORD v34[178]; // [rsp+1750h] [rbp-2A58h] BYREF
  _QWORD v35[74]; // [rsp+1A18h] [rbp-2790h] BYREF
  _QWORD v36[74]; // [rsp+1C68h] [rbp-2540h] BYREF
  _QWORD v37[74]; // [rsp+1EB8h] [rbp-22F0h] BYREF
  _QWORD v38[89]; // [rsp+2108h] [rbp-20A0h] BYREF
  _QWORD v39[74]; // [rsp+23D0h] [rbp-1DD8h] BYREF
  _BYTE v40[712]; // [rsp+2620h] [rbp-1B88h] BYREF
  _BYTE v41[712]; // [rsp+28E8h] [rbp-18C0h] BYREF
  _BYTE v42[712]; // [rsp+2BB0h] [rbp-15F8h] BYREF
  _BYTE v43[712]; // [rsp+2E78h] [rbp-1330h] BYREF
  _QWORD v44[89]; // [rsp+3140h] [rbp-1068h] BYREF
  _BYTE v45[712]; // [rsp+3408h] [rbp-DA0h] BYREF
  _BYTE v46[712]; // [rsp+36D0h] [rbp-AD8h] BYREF
  _QWORD src[89]; // [rsp+3998h] [rbp-810h] BYREF
  _BYTE v48[592]; // [rsp+3C60h] [rbp-548h] BYREF
  _BYTE desta[760]; // [rsp+3EB0h] [rbp-2F8h] BYREF

  v44[7] = 0LL;
  v38[14] = 0LL;
  *((_QWORD *)&v31[17] + 1) = 0LL;
  *((_QWORD *)&v17[22] + 1) = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v34, desta);
  uucore::format_usage((unsigned int)&v18);
  v4 = v18;
  if ( v18 != 0x8000000000000000LL )
    v17[0] = v19;
  if ( *(_QWORD *)&v34[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34[116], aOptionTemplate);
  *(_QWORD *)&v34[116] = v4;
  *(_OWORD *)&v34[118] = v17[0];
  memcpy(v38, v34, 0x2BCuLL);
  *(_QWORD *)((char *)&v38[87] + 4) = *(_QWORD *)&v34[175] | 0x8000000080LL;
  HIDWORD(v38[88]) = v34[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v17[33] = aDirectory;
  *((_QWORD *)&v17[33] + 1) = 9LL;
  memcpy(v22, v17, 0x220uLL);
  *(_OWORD *)&v22[560] = v17[35];
  *(_QWORD *)&v22[580] = *(_QWORD *)((char *)&v17[36] + 4);
  v23 = HIDWORD(v17[36]);
  *(_QWORD *)&v22[544] = aDirectory;
  *(_QWORD *)&v22[552] = 9LL;
  *(_DWORD *)&v22[576] = 100;
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::string::String::push_str(v17, aMakeADirectory, 34LL);
  v5 = *(_QWORD *)&v17[0];
  v20 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v16 = v20;
  if ( *(_QWORD *)&v22[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v22[440], aMakeADirectory);
  *(_QWORD *)&v22[440] = v5;
  *(_OWORD *)&v22[448] = v16;
  memcpy(v17, v22, 0x24CuLL);
  *(_WORD *)((char *)&v17[36] + 13) = *(_WORD *)((char *)&v23 + 1);
  HIBYTE(v17[36]) = HIBYTE(v23);
  BYTE12(v17[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v38, v17);
  memcpy(v46, v38, sizeof(v46));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v17[33] = aDryRun;
  *((_QWORD *)&v17[33] + 1) = 7LL;
  memcpy(v24, v17, 0x220uLL);
  *(_OWORD *)&v24[560] = v17[35];
  *(_QWORD *)&v24[580] = *(_QWORD *)((char *)&v17[36] + 4);
  v25 = HIDWORD(v17[36]);
  *(_QWORD *)&v24[544] = aDryRun;
  *(_QWORD *)&v24[552] = 7LL;
  *(_DWORD *)&v24[576] = 117;
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::string::String::push_str(v17, aDoNotCreateAny, 52LL);
  v6 = *(_QWORD *)&v17[0];
  v20 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v16 = v20;
  if ( *(_QWORD *)&v24[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v24[440], aDoNotCreateAny);
  *(_QWORD *)&v24[440] = v6;
  *(_OWORD *)&v24[448] = v16;
  memcpy(v17, v24, 0x24CuLL);
  *(_WORD *)((char *)&v17[36] + 13) = *(_WORD *)((char *)&v25 + 1);
  HIBYTE(v17[36]) = HIBYTE(v25);
  BYTE12(v17[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v46, v17);
  memcpy(v45, v46, sizeof(v45));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v17[33] = aQuiet;
  *((_QWORD *)&v17[33] + 1) = 5LL;
  memcpy(v26, v17, 0x220uLL);
  *(_OWORD *)&v26[560] = v17[35];
  *(_QWORD *)&v26[580] = *(_QWORD *)((char *)&v17[36] + 4);
  v27 = HIDWORD(v17[36]);
  *(_QWORD *)&v26[544] = aQuiet;
  *(_QWORD *)&v26[552] = 5LL;
  *(_DWORD *)&v26[576] = 113;
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::string::String::push_str(v17, aFailSilentlyIf, 33LL);
  v7 = *(_QWORD *)&v17[0];
  v20 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v16 = v20;
  if ( *(_QWORD *)&v26[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v26[440], aFailSilentlyIf);
  *(_QWORD *)&v26[440] = v7;
  *(_OWORD *)&v26[448] = v16;
  memcpy(v17, v26, 0x24CuLL);
  *(_WORD *)((char *)&v17[36] + 13) = *(_WORD *)((char *)&v27 + 1);
  HIBYTE(v17[36]) = HIBYTE(v27);
  BYTE12(v17[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v45, v17);
  memcpy(v44, v45, sizeof(v44));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v17[33] = aSuffix;
  *((_QWORD *)&v17[33] + 1) = 6LL;
  memcpy(v30, v17, 0x220uLL);
  v30[35] = v17[35];
  v30[36] = v17[36];
  *(_QWORD *)&v30[34] = aSuffix;
  *((_QWORD *)&v30[34] + 1) = 6LL;
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::string::String::push_str(v17, aAppendSuffixTo, 124LL);
  v8 = *(_QWORD *)&v17[0];
  v20 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v16 = v20;
  if ( *((_QWORD *)&v30[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v30[27] + 8, aAppendSuffixTo);
  *((_QWORD *)&v30[27] + 1) = v8;
  v30[28] = v16;
  memcpy(v17, v30, sizeof(v17));
  *(_QWORD *)&v20 = aSuffix_0;
  *((_QWORD *)&v20 + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v48, v17);
  memcpy(v17, v48, sizeof(v17));
  clap_builder::builder::command::Command::arg_internal(v44, v17);
  memcpy(v43, v44, sizeof(v43));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v17[33] = anon_39ca493e95a1eccf7c7f592fcc33ae19_19_llvm_18443158920372441921;
  *((_QWORD *)&v17[33] + 1) = 1LL;
  memcpy(v32, v17, 0x240uLL);
  *(_QWORD *)((char *)&v32[36] + 4) = *(_QWORD *)((char *)&v17[36] + 4);
  HIDWORD(v32[36]) = HIDWORD(v17[36]);
  LODWORD(v32[36]) = 112;
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::string::String::push_str(v17, aShortFormOfTmp, 22LL);
  v9 = *(_QWORD *)&v17[0];
  v20 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v16 = v20;
  if ( *((_QWORD *)&v32[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v32[27] + 8, aShortFormOfTmp);
  *((_QWORD *)&v32[27] + 1) = v9;
  v32[28] = v16;
  memcpy(v17, v32, sizeof(v17));
  *(_QWORD *)&v20 = aDir;
  *((_QWORD *)&v20 + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(v39, v17);
  v39[2] = 1LL;
  v39[3] = 1LL;
  v39[4] = 1LL;
  memcpy(v35, v39, sizeof(v35));
  if ( v35[10] >= 4uLL && v35[10] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v35[11]);
  v35[10] = 3LL;
  memcpy(v17, v35, 0x24DuLL);
  BYTE13(v17[36]) = 4;
  HIWORD(v17[36]) = HIWORD(v35[73]);
  clap_builder::builder::command::Command::arg_internal(v43, v17);
  memcpy(v42, v43, sizeof(v42));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v17[33] = aTmpdir;
  *((_QWORD *)&v17[33] + 1) = 6LL;
  memcpy(v31, v17, 0x220uLL);
  v31[35] = v17[35];
  v31[36] = v17[36];
  *(_QWORD *)&v31[34] = aTmpdir;
  *((_QWORD *)&v31[34] + 1) = 6LL;
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::string::String::push_str(v17, aInterpretTempl, 256LL);
  v10 = *(_QWORD *)&v17[0];
  v20 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v16 = v20;
  if ( *((_QWORD *)&v31[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v31[27] + 8, aInterpretTempl);
  *((_QWORD *)&v31[27] + 1) = v10;
  v31[28] = v16;
  memcpy(v17, v31, sizeof(v17));
  *(_QWORD *)&v20 = aDir;
  *((_QWORD *)&v20 + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(v37, v17);
  v37[2] = 1LL;
  v37[3] = 0LL;
  v37[4] = 1LL;
  memcpy(v33, v37, 0x248uLL);
  v33[73] = v37[73] | 0x80LL;
  v11 = v33[18];
  if ( v33[18] == v33[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v33[16]);
  v12 = v33[17];
  v13 = 16 * v11;
  *(_QWORD *)(v33[17] + v13) = anon_39ca493e95a1eccf7c7f592fcc33ae19_19_llvm_18443158920372441921;
  *(_QWORD *)(v12 + v13 + 8) = 1LL;
  v33[18] = v11 + 1;
  memcpy(v36, v33, sizeof(v36));
  if ( v36[10] >= 4uLL && v36[10] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v36[11]);
  v36[10] = 3LL;
  memcpy(v17, v36, 0x24DuLL);
  BYTE13(v17[36]) = 4;
  HIWORD(v17[36]) = HIWORD(v36[73]);
  clap_builder::builder::command::Command::arg_internal(v42, v17);
  memcpy(v41, v42, sizeof(v41));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v17[33] = aT;
  *((_QWORD *)&v17[33] + 1) = 1LL;
  memcpy(v28, v17, 0x240uLL);
  *(_QWORD *)&v28[580] = *(_QWORD *)((char *)&v17[36] + 4);
  v29 = HIDWORD(v17[36]);
  *(_DWORD *)&v28[576] = 116;
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::string::String::push_str(v17, aGenerateATempl, 125LL);
  v14 = *(_QWORD *)&v17[0];
  v20 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v16 = v20;
  if ( *(_QWORD *)&v28[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v28[440], aGenerateATempl);
  *(_QWORD *)&v28[440] = v14;
  *(_OWORD *)&v28[448] = v16;
  memcpy(v17, v28, 0x24CuLL);
  *(_WORD *)((char *)&v17[36] + 13) = *(_WORD *)((char *)&v29 + 1);
  HIBYTE(v17[36]) = HIBYTE(v29);
  BYTE12(v17[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v41, v17);
  memcpy(v40, v41, sizeof(v40));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(&v20);
  v21[61] = &unk_18388;
  v21[62] = 8LL;
  v17[0] = v20;
  memcpy((char *)&v17[2] + 8, v21, 0x228uLL);
  v17[1] = 1uLL;
  *(_QWORD *)&v17[2] = 1LL;
  clap_builder::builder::command::Command::arg_internal(v40, v17);
  memcpy(dest, v40, 0x2C8uLL);
  return dest;
}
