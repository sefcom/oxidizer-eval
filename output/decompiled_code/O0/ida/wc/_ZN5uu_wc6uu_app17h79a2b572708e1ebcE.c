void *__fastcall uu_wc::uu_app(void *dest)
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
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // r14
  __int128 v14; // [rsp+0h] [rbp-3D18h]
  _OWORD v15[37]; // [rsp+10h] [rbp-3D08h] BYREF
  __int128 v16; // [rsp+260h] [rbp-3AB8h] BYREF
  __int64 v17; // [rsp+270h] [rbp-3AA8h]
  __int64 v18; // [rsp+278h] [rbp-3AA0h] BYREF
  __int128 v19; // [rsp+280h] [rbp-3A98h]
  _OWORD v20[37]; // [rsp+290h] [rbp-3A88h] BYREF
  _BYTE v21[588]; // [rsp+4E8h] [rbp-3830h] BYREF
  int v22; // [rsp+734h] [rbp-35E4h]
  _BYTE v23[588]; // [rsp+738h] [rbp-35E0h] BYREF
  int v24; // [rsp+984h] [rbp-3394h]
  _BYTE v25[588]; // [rsp+988h] [rbp-3390h] BYREF
  int v26; // [rsp+BD4h] [rbp-3144h]
  _BYTE v27[588]; // [rsp+BD8h] [rbp-3140h] BYREF
  int v28; // [rsp+E24h] [rbp-2EF4h]
  _BYTE v29[588]; // [rsp+E28h] [rbp-2EF0h] BYREF
  int v30; // [rsp+1074h] [rbp-2CA4h]
  _OWORD v31[37]; // [rsp+1078h] [rbp-2CA0h] BYREF
  _BYTE v32[589]; // [rsp+12C8h] [rbp-2A50h] BYREF
  _BYTE v33[3]; // [rsp+1515h] [rbp-2803h]
  _DWORD v34[178]; // [rsp+1518h] [rbp-2800h] BYREF
  _OWORD v35[37]; // [rsp+17E0h] [rbp-2538h] BYREF
  _OWORD v36[37]; // [rsp+1A30h] [rbp-22E8h] BYREF
  _QWORD v37[74]; // [rsp+1C80h] [rbp-2098h] BYREF
  _DWORD v38[178]; // [rsp+1ED0h] [rbp-1E48h] BYREF
  _BYTE v39[712]; // [rsp+2198h] [rbp-1B80h] BYREF
  _BYTE v40[712]; // [rsp+2460h] [rbp-18B8h] BYREF
  _BYTE v41[712]; // [rsp+2728h] [rbp-15F0h] BYREF
  _BYTE v42[712]; // [rsp+29F0h] [rbp-1328h] BYREF
  _QWORD v43[89]; // [rsp+2CB8h] [rbp-1060h] BYREF
  _BYTE v44[712]; // [rsp+2F80h] [rbp-D98h] BYREF
  _BYTE v45[712]; // [rsp+3248h] [rbp-AD0h] BYREF
  _BYTE v46[592]; // [rsp+3510h] [rbp-808h] BYREF
  _QWORD src[89]; // [rsp+3760h] [rbp-5B8h] BYREF
  _BYTE desta[752]; // [rsp+3A28h] [rbp-2F0h] BYREF

  v43[7] = 0LL;
  v37[14] = 0LL;
  *(_QWORD *)&v27[280] = 0LL;
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
    v15[0] = v19;
  if ( *(_QWORD *)&v34[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34[116], aOptionFile);
  *(_QWORD *)&v34[116] = v4;
  *(_OWORD *)&v34[118] = v15[0];
  memcpy(v38, v34, 0x2BCuLL);
  *(_QWORD *)&v38[175] = *(_QWORD *)&v34[175] | 0x8800000088LL;
  v38[177] = v34[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[33] = anon_77474d128c52bab738a0ce88bc24ae41_34_llvm_9737630618734806200;
  *((_QWORD *)&v15[33] + 1) = 5LL;
  memcpy(v21, v15, 0x220uLL);
  *(_OWORD *)&v21[560] = v15[35];
  *(_QWORD *)&v21[580] = *(_QWORD *)((char *)&v15[36] + 4);
  v22 = HIDWORD(v15[36]);
  *(_QWORD *)&v21[544] = anon_77474d128c52bab738a0ce88bc24ae41_34_llvm_9737630618734806200;
  *(_QWORD *)&v21[552] = 5LL;
  *(_DWORD *)&v21[576] = 99;
  *(_QWORD *)&v15[0] = 0LL;
  *((_QWORD *)&v15[0] + 1) = 1LL;
  *(_QWORD *)&v15[1] = 0LL;
  alloc::string::String::push_str(v15, aPrintTheByteCo, 21LL);
  v5 = *(_QWORD *)&v15[0];
  v20[0] = *(_OWORD *)((char *)v15 + 8);
  if ( *(_QWORD *)&v15[0] != 0x8000000000000000LL )
    v14 = v20[0];
  if ( *(_QWORD *)&v21[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v21[440], aPrintTheByteCo);
  *(_QWORD *)&v21[440] = v5;
  *(_OWORD *)&v21[448] = v14;
  memcpy(v15, v21, 0x24CuLL);
  *(_WORD *)((char *)&v15[36] + 13) = *(_WORD *)((char *)&v22 + 1);
  HIBYTE(v15[36]) = HIBYTE(v22);
  BYTE12(v15[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v38, v15);
  memcpy(v45, v38, sizeof(v45));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[33] = anon_77474d128c52bab738a0ce88bc24ae41_35_llvm_9737630618734806200;
  *((_QWORD *)&v15[33] + 1) = 5LL;
  memcpy(v23, v15, 0x220uLL);
  *(_OWORD *)&v23[560] = v15[35];
  *(_QWORD *)&v23[580] = *(_QWORD *)((char *)&v15[36] + 4);
  v24 = HIDWORD(v15[36]);
  *(_QWORD *)&v23[544] = anon_77474d128c52bab738a0ce88bc24ae41_35_llvm_9737630618734806200;
  *(_QWORD *)&v23[552] = 5LL;
  *(_DWORD *)&v23[576] = 109;
  *(_QWORD *)&v15[0] = 0LL;
  *((_QWORD *)&v15[0] + 1) = 1LL;
  *(_QWORD *)&v15[1] = 0LL;
  alloc::string::String::push_str(v15, aPrintTheCharac, 26LL);
  v6 = *(_QWORD *)&v15[0];
  v20[0] = *(_OWORD *)((char *)v15 + 8);
  if ( *(_QWORD *)&v15[0] != 0x8000000000000000LL )
    v14 = v20[0];
  if ( *(_QWORD *)&v23[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v23[440], aPrintTheCharac);
  *(_QWORD *)&v23[440] = v6;
  *(_OWORD *)&v23[448] = v14;
  memcpy(v15, v23, 0x24CuLL);
  *(_WORD *)((char *)&v15[36] + 13) = *(_WORD *)((char *)&v24 + 1);
  HIBYTE(v15[36]) = HIBYTE(v24);
  BYTE12(v15[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v45, v15);
  memcpy(v44, v45, sizeof(v44));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v20);
  *(_QWORD *)&v20[33] = anon_77474d128c52bab738a0ce88bc24ae41_36_llvm_9737630618734806200;
  *((_QWORD *)&v20[33] + 1) = 11LL;
  memcpy(v15, v20, 0x220uLL);
  v15[35] = v20[35];
  v15[36] = v20[36];
  *(_QWORD *)&v15[34] = anon_77474d128c52bab738a0ce88bc24ae41_36_llvm_9737630618734806200;
  *((_QWORD *)&v15[34] + 1) = 11LL;
  *(_QWORD *)&v20[0] = asc_1FD82;
  *((_QWORD *)&v20[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v35, v15);
  *(_QWORD *)&v15[0] = 0LL;
  *((_QWORD *)&v15[0] + 1) = 1LL;
  *(_QWORD *)&v15[1] = 0LL;
  alloc::string::String::push_str(v15, aReadInputFromT, 120LL);
  v7 = *(_QWORD *)&v15[0];
  v20[0] = *(_OWORD *)((char *)v15 + 8);
  if ( *(_QWORD *)&v15[0] != 0x8000000000000000LL )
    v15[0] = v20[0];
  if ( *((_QWORD *)&v35[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v35[27] + 8, aReadInputFromT);
  *((_QWORD *)&v35[27] + 1) = v7;
  v35[28] = v15[0];
  memcpy(v37, v35, sizeof(v37));
  if ( v37[10] >= 4uLL && v37[10] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v37[11]);
  v37[10] = 2LL;
  memcpy(v15, v37, 0x24DuLL);
  BYTE13(v15[36]) = 3;
  HIWORD(v15[36]) = HIWORD(v37[73]);
  clap_builder::builder::command::Command::arg_internal(v44, v15);
  memcpy(v43, v44, sizeof(v43));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[33] = anon_77474d128c52bab738a0ce88bc24ae41_37_llvm_9737630618734806200;
  *((_QWORD *)&v15[33] + 1) = 5LL;
  memcpy(v25, v15, 0x220uLL);
  *(_OWORD *)&v25[560] = v15[35];
  *(_QWORD *)&v25[580] = *(_QWORD *)((char *)&v15[36] + 4);
  v26 = HIDWORD(v15[36]);
  *(_QWORD *)&v25[544] = anon_77474d128c52bab738a0ce88bc24ae41_37_llvm_9737630618734806200;
  *(_QWORD *)&v25[552] = 5LL;
  *(_DWORD *)&v25[576] = 108;
  *(_QWORD *)&v15[0] = 0LL;
  *((_QWORD *)&v15[0] + 1) = 1LL;
  *(_QWORD *)&v15[1] = 0LL;
  alloc::string::String::push_str(v15, aPrintTheNewlin, 24LL);
  v8 = *(_QWORD *)&v15[0];
  v20[0] = *(_OWORD *)((char *)v15 + 8);
  if ( *(_QWORD *)&v15[0] != 0x8000000000000000LL )
    v14 = v20[0];
  if ( *(_QWORD *)&v25[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v25[440], aPrintTheNewlin);
  *(_QWORD *)&v25[440] = v8;
  *(_OWORD *)&v25[448] = v14;
  memcpy(v15, v25, 0x24CuLL);
  *(_WORD *)((char *)&v15[36] + 13) = *(_WORD *)((char *)&v26 + 1);
  HIBYTE(v15[36]) = HIBYTE(v26);
  BYTE12(v15[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v43, v15);
  memcpy(v42, v43, sizeof(v42));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[33] = anon_77474d128c52bab738a0ce88bc24ae41_38_llvm_9737630618734806200;
  *((_QWORD *)&v15[33] + 1) = 15LL;
  memcpy(v27, v15, 0x220uLL);
  *(_OWORD *)&v27[560] = v15[35];
  *(_QWORD *)&v27[580] = *(_QWORD *)((char *)&v15[36] + 4);
  v28 = HIDWORD(v15[36]);
  *(_QWORD *)&v27[544] = anon_77474d128c52bab738a0ce88bc24ae41_38_llvm_9737630618734806200;
  *(_QWORD *)&v27[552] = 15LL;
  *(_DWORD *)&v27[576] = 76;
  *(_QWORD *)&v15[0] = 0LL;
  *((_QWORD *)&v15[0] + 1) = 1LL;
  *(_QWORD *)&v15[1] = 0LL;
  alloc::string::String::push_str(v15, aPrintTheLength, 36LL);
  v9 = *(_QWORD *)&v15[0];
  v20[0] = *(_OWORD *)((char *)v15 + 8);
  if ( *(_QWORD *)&v15[0] != 0x8000000000000000LL )
    v14 = v20[0];
  if ( *(_QWORD *)&v27[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v27[440], aPrintTheLength);
  *(_QWORD *)&v27[440] = v9;
  *(_OWORD *)&v27[448] = v14;
  memcpy(v15, v27, 0x24CuLL);
  *(_WORD *)((char *)&v15[36] + 13) = *(_WORD *)((char *)&v28 + 1);
  HIBYTE(v15[36]) = HIBYTE(v28);
  BYTE12(v15[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v42, v15);
  memcpy(v41, v42, sizeof(v41));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[33] = anon_77474d128c52bab738a0ce88bc24ae41_39_llvm_9737630618734806200;
  *((_QWORD *)&v15[33] + 1) = 5LL;
  memcpy(v31, v15, 0x220uLL);
  v31[35] = v15[35];
  v31[36] = v15[36];
  *(_QWORD *)&v31[34] = anon_77474d128c52bab738a0ce88bc24ae41_39_llvm_9737630618734806200;
  *((_QWORD *)&v31[34] + 1) = 5LL;
  *(_QWORD *)&v15[0] = anon_f24642c09166824134b4a04b26eaa90d_29_llvm_11289963011487936703;
  *((_QWORD *)&v15[0] + 1) = 4LL;
  *(_QWORD *)&v15[1] = anon_f24642c09166824134b4a04b26eaa90d_30_llvm_11289963011487936703;
  *((_QWORD *)&v15[1] + 1) = 6LL;
  *(_QWORD *)&v15[2] = anon_f24642c09166824134b4a04b26eaa90d_31_llvm_11289963011487936703;
  *((_QWORD *)&v15[2] + 1) = 4LL;
  *(_QWORD *)&v15[3] = anon_f24642c09166824134b4a04b26eaa90d_32_llvm_11289963011487936703;
  *((_QWORD *)&v15[3] + 1) = 5LL;
  *(_QWORD *)&v15[4] = 0LL;
  *((_QWORD *)&v15[4] + 1) = 4LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v20, v15);
  v16 = v20[0];
  v17 = *(_QWORD *)&v20[1];
  clap_builder::builder::value_parser::ValueParser::new(v15, &v16);
  v10 = *(_QWORD *)&v15[0];
  v20[0] = *(_OWORD *)((char *)v15 + 8);
  if ( *(_QWORD *)&v15[0] != 5LL )
    v14 = v20[0];
  if ( *(_QWORD *)&v31[5] >= 4uLL && *(_QWORD *)&v31[5] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>((char *)&v31[5] + 8);
  *(_QWORD *)&v31[5] = v10;
  *(_OWORD *)((char *)&v31[5] + 8) = v14;
  memcpy(v15, v31, sizeof(v15));
  *(_QWORD *)&v20[0] = aWhen;
  *((_QWORD *)&v20[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v46, v15);
  v46[584] |= 0x10u;
  memcpy(v36, v46, sizeof(v36));
  *(_QWORD *)&v15[0] = 0LL;
  *((_QWORD *)&v15[0] + 1) = 1LL;
  *(_QWORD *)&v15[1] = 0LL;
  alloc::string::String::push_str(v15, aWhenToPrintALi, 80LL);
  v11 = *(_QWORD *)&v15[0];
  v20[0] = *(_OWORD *)((char *)v15 + 8);
  if ( *(_QWORD *)&v15[0] != 0x8000000000000000LL )
    v14 = v20[0];
  if ( *((_QWORD *)&v36[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v36[27] + 8, aWhenToPrintALi);
  *((_QWORD *)&v36[27] + 1) = v11;
  v36[28] = v14;
  memcpy(v15, v36, sizeof(v15));
  clap_builder::builder::command::Command::arg_internal(v41, v15);
  memcpy(v40, v41, sizeof(v40));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[33] = anon_77474d128c52bab738a0ce88bc24ae41_40_llvm_9737630618734806200;
  *((_QWORD *)&v15[33] + 1) = 5LL;
  memcpy(v29, v15, 0x220uLL);
  *(_OWORD *)&v29[560] = v15[35];
  *(_QWORD *)&v29[580] = *(_QWORD *)((char *)&v15[36] + 4);
  v30 = HIDWORD(v15[36]);
  *(_QWORD *)&v29[544] = anon_77474d128c52bab738a0ce88bc24ae41_40_llvm_9737630618734806200;
  *(_QWORD *)&v29[552] = 5LL;
  *(_DWORD *)&v29[576] = 119;
  *(_QWORD *)&v15[0] = 0LL;
  *((_QWORD *)&v15[0] + 1) = 1LL;
  *(_QWORD *)&v15[1] = 0LL;
  alloc::string::String::push_str(v15, aPrintTheWordCo, 21LL);
  v12 = *(_QWORD *)&v15[0];
  v20[0] = *(_OWORD *)((char *)v15 + 8);
  if ( *(_QWORD *)&v15[0] != 0x8000000000000000LL )
    v14 = v20[0];
  if ( *(_QWORD *)&v29[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29[440], aPrintTheWordCo);
  *(_QWORD *)&v29[440] = v12;
  *(_OWORD *)&v29[448] = v14;
  memcpy(v15, v29, 0x24CuLL);
  *(_WORD *)((char *)&v15[36] + 13) = *(_WORD *)((char *)&v30 + 1);
  HIBYTE(v15[36]) = HIBYTE(v30);
  BYTE12(v15[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v40, v15);
  memcpy(v39, v40, sizeof(v39));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[33] = aFiles;
  *((_QWORD *)&v15[33] + 1) = 5LL;
  memcpy(v32, v15, 0x24CuLL);
  *(_WORD *)v33 = *(_WORD *)((char *)&v15[36] + 13);
  v33[2] = HIBYTE(v15[36]);
  v32[588] = 1;
  if ( *(_QWORD *)&v32[80] >= 4uLL && *(_QWORD *)&v32[80] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v32[88]);
  *(_QWORD *)&v32[80] = 2LL;
  memcpy(v15, v32, 0x24DuLL);
  BYTE13(v15[36]) = 3;
  HIWORD(v15[36]) = *(_WORD *)&v33[1];
  clap_builder::builder::command::Command::arg_internal(v39, v15);
  memcpy(dest, v39, 0x2C8uLL);
  return dest;
}
