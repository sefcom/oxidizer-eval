void *__fastcall uu_csplit::uu_app(void *dest)
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
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r14
  __int128 v16; // [rsp+0h] [rbp-3BA8h]
  _OWORD v17[37]; // [rsp+10h] [rbp-3B98h] BYREF
  __int64 v18; // [rsp+268h] [rbp-3940h] BYREF
  __int128 v19; // [rsp+270h] [rbp-3938h]
  _BYTE v20[588]; // [rsp+280h] [rbp-3928h] BYREF
  int v21; // [rsp+4CCh] [rbp-36DCh]
  _BYTE v22[588]; // [rsp+4D8h] [rbp-36D0h] BYREF
  int v23; // [rsp+724h] [rbp-3484h]
  _BYTE v24[588]; // [rsp+728h] [rbp-3480h] BYREF
  int v25; // [rsp+974h] [rbp-3234h]
  _BYTE v26[592]; // [rsp+978h] [rbp-3230h] BYREF
  _OWORD v27[37]; // [rsp+BC8h] [rbp-2FE0h] BYREF
  _OWORD v28[37]; // [rsp+E18h] [rbp-2D90h] BYREF
  _DWORD v29[178]; // [rsp+1068h] [rbp-2B40h] BYREF
  _OWORD v30[37]; // [rsp+1330h] [rbp-2878h] BYREF
  _OWORD v31[37]; // [rsp+1580h] [rbp-2628h] BYREF
  _OWORD v32[37]; // [rsp+17D0h] [rbp-23D8h] BYREF
  _QWORD v33[89]; // [rsp+1A20h] [rbp-2188h] BYREF
  _BYTE v34[712]; // [rsp+1CE8h] [rbp-1EC0h] BYREF
  _BYTE v35[712]; // [rsp+1FB0h] [rbp-1BF8h] BYREF
  _BYTE v36[712]; // [rsp+2278h] [rbp-1930h] BYREF
  _BYTE v37[712]; // [rsp+2540h] [rbp-1668h] BYREF
  _BYTE v38[712]; // [rsp+2808h] [rbp-13A0h] BYREF
  _QWORD v39[89]; // [rsp+2AD0h] [rbp-10D8h] BYREF
  _BYTE v40[712]; // [rsp+2D98h] [rbp-E10h] BYREF
  _BYTE v41[712]; // [rsp+3060h] [rbp-B48h] BYREF
  _QWORD src[89]; // [rsp+3328h] [rbp-880h] BYREF
  _BYTE v43[712]; // [rsp+35F0h] [rbp-5B8h] BYREF
  _BYTE desta[752]; // [rsp+38B8h] [rbp-2F0h] BYREF

  v39[22] = 0LL;
  v33[44] = 0LL;
  *(_QWORD *)&v26[520] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v29, desta);
  uucore::format_usage((unsigned int)&v18);
  v4 = v18;
  if ( v18 != 0x8000000000000000LL )
    v17[0] = v19;
  if ( *(_QWORD *)&v29[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29[116], aOptionFilePatt);
  *(_QWORD *)&v29[116] = v4;
  *(_OWORD *)&v29[118] = v17[0];
  memcpy(v33, v29, 0x2BCuLL);
  *(_QWORD *)((char *)&v33[87] + 4) = *(_QWORD *)&v29[175] | 0x8800000088LL;
  HIDWORD(v33[88]) = v29[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v20);
  *(_QWORD *)&v20[528] = aSuffixFormat;
  *(_QWORD *)&v20[536] = 13LL;
  memcpy(v17, v20, 0x220uLL);
  v17[35] = *(_OWORD *)&v20[560];
  *(_QWORD *)((char *)&v17[36] + 4) = *(_QWORD *)&v20[580];
  HIDWORD(v17[36]) = v21;
  *(_QWORD *)&v17[34] = aSuffixFormat;
  *((_QWORD *)&v17[34] + 1) = 13LL;
  LODWORD(v17[36]) = 98;
  *(_QWORD *)v20 = aFormat;
  *(_QWORD *)&v20[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v30, v17);
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::string::String::push_str(v17, aUseSprintfForm, 34LL);
  v5 = *(_QWORD *)&v17[0];
  *(_OWORD *)v20 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v16 = *(_OWORD *)v20;
  if ( *((_QWORD *)&v30[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v30[27] + 8, aUseSprintfForm);
  *((_QWORD *)&v30[27] + 1) = v5;
  v30[28] = v16;
  memcpy(v17, v30, sizeof(v17));
  clap_builder::builder::command::Command::arg_internal(v33, v17);
  memcpy(v41, v33, sizeof(v41));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v20);
  *(_QWORD *)&v20[528] = aPrefix;
  *(_QWORD *)&v20[536] = 6LL;
  memcpy(v17, v20, 0x220uLL);
  v17[35] = *(_OWORD *)&v20[560];
  *(_QWORD *)((char *)&v17[36] + 4) = *(_QWORD *)&v20[580];
  HIDWORD(v17[36]) = v21;
  *(_QWORD *)&v17[34] = aPrefix;
  *((_QWORD *)&v17[34] + 1) = 6LL;
  LODWORD(v17[36]) = 102;
  *(_QWORD *)v20 = aPrefix_0;
  *(_QWORD *)&v20[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v31, v17);
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::string::String::push_str(v17, aUsePrefixInste, 26LL);
  v6 = *(_QWORD *)&v17[0];
  *(_OWORD *)v20 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v16 = *(_OWORD *)v20;
  if ( *((_QWORD *)&v31[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v31[27] + 8, aUsePrefixInste);
  *((_QWORD *)&v31[27] + 1) = v6;
  v31[28] = v16;
  memcpy(v17, v31, sizeof(v17));
  clap_builder::builder::command::Command::arg_internal(v41, v17);
  memcpy(v40, v41, sizeof(v40));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v17[33] = aKeepFiles;
  *((_QWORD *)&v17[33] + 1) = 10LL;
  memcpy(v22, v17, 0x220uLL);
  *(_OWORD *)&v22[560] = v17[35];
  *(_QWORD *)&v22[580] = *(_QWORD *)((char *)&v17[36] + 4);
  v23 = HIDWORD(v17[36]);
  *(_QWORD *)&v22[544] = aKeepFiles;
  *(_QWORD *)&v22[552] = 10LL;
  *(_DWORD *)&v22[576] = 107;
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::string::String::push_str(v17, aDoNotRemoveOut, 36LL);
  v7 = *(_QWORD *)&v17[0];
  *(_OWORD *)v20 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v16 = *(_OWORD *)v20;
  if ( *(_QWORD *)&v22[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v22[440], aDoNotRemoveOut);
  *(_QWORD *)&v22[440] = v7;
  *(_OWORD *)&v22[448] = v16;
  memcpy(v17, v22, 0x24CuLL);
  *(_WORD *)((char *)&v17[36] + 13) = *(_WORD *)((char *)&v23 + 1);
  HIBYTE(v17[36]) = HIBYTE(v23);
  BYTE12(v17[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v40, v17);
  memcpy(v39, v40, sizeof(v39));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v17[33] = aSuppressMatche;
  *((_QWORD *)&v17[33] + 1) = 16LL;
  memcpy(v26, v17, 0x220uLL);
  *(_OWORD *)&v26[560] = v17[35];
  *(_OWORD *)&v26[576] = v17[36];
  *(_QWORD *)&v26[544] = aSuppressMatche;
  *(_QWORD *)&v26[552] = 16LL;
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::string::String::push_str(v17, aSuppressTheLin, 35LL);
  v8 = *(_QWORD *)&v17[0];
  *(_OWORD *)v20 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v16 = *(_OWORD *)v20;
  if ( *(_QWORD *)&v26[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v26[440], aSuppressTheLin);
  *(_QWORD *)&v26[440] = v8;
  *(_OWORD *)&v26[448] = v16;
  memcpy(v17, v26, 0x24CuLL);
  *(_WORD *)((char *)&v17[36] + 13) = *(_WORD *)&v26[589];
  HIBYTE(v17[36]) = v26[591];
  BYTE12(v17[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v39, v17);
  memcpy(v38, v39, sizeof(v38));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v20);
  *(_QWORD *)&v20[528] = aDigits;
  *(_QWORD *)&v20[536] = 6LL;
  memcpy(v17, v20, 0x220uLL);
  v17[35] = *(_OWORD *)&v20[560];
  *(_QWORD *)((char *)&v17[36] + 4) = *(_QWORD *)&v20[580];
  HIDWORD(v17[36]) = v21;
  *(_QWORD *)&v17[34] = aDigits;
  *((_QWORD *)&v17[34] + 1) = 6LL;
  LODWORD(v17[36]) = 110;
  *(_QWORD *)v20 = aDigits_0;
  *(_QWORD *)&v20[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v32, v17);
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::string::String::push_str(v17, aUseSpecifiedNu, 43LL);
  v9 = *(_QWORD *)&v17[0];
  *(_OWORD *)v20 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v16 = *(_OWORD *)v20;
  if ( *((_QWORD *)&v32[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v32[27] + 8, aUseSpecifiedNu);
  *((_QWORD *)&v32[27] + 1) = v9;
  v32[28] = v16;
  memcpy(v17, v32, sizeof(v17));
  clap_builder::builder::command::Command::arg_internal(v38, v17);
  memcpy(v37, v38, sizeof(v37));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v17[33] = aQuiet;
  *((_QWORD *)&v17[33] + 1) = 5LL;
  memcpy(v27, v17, 0x220uLL);
  v27[35] = v17[35];
  *(_QWORD *)((char *)&v27[36] + 4) = *(_QWORD *)((char *)&v17[36] + 4);
  HIDWORD(v27[36]) = HIDWORD(v17[36]);
  *(_QWORD *)&v27[34] = aQuiet;
  *((_QWORD *)&v27[34] + 1) = 5LL;
  LODWORD(v27[36]) = 115;
  v10 = *((_QWORD *)&v27[19] + 1);
  if ( *((_QWORD *)&v27[19] + 1) == *((_QWORD *)&v27[18] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v27[18] + 8);
  v11 = *(_QWORD *)&v27[19];
  v12 = 3 * v10;
  *(_QWORD *)(*(_QWORD *)&v27[19] + 8 * v12) = aSilent;
  *(_QWORD *)(v11 + 8 * v12 + 8) = 6LL;
  *(_BYTE *)(v11 + 8 * v12 + 16) = 1;
  *((_QWORD *)&v27[19] + 1) = v10 + 1;
  memcpy(v28, v27, sizeof(v28));
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::string::String::push_str(v17, aDoNotPrintCoun, 40LL);
  v13 = *(_QWORD *)&v17[0];
  *(_OWORD *)v20 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v16 = *(_OWORD *)v20;
  if ( *((_QWORD *)&v28[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v28[27] + 8, aDoNotPrintCoun);
  *((_QWORD *)&v28[27] + 1) = v13;
  v28[28] = v16;
  memcpy(v17, v28, 0x24CuLL);
  *(_WORD *)((char *)&v17[36] + 13) = *(_WORD *)((char *)&v28[36] + 13);
  HIBYTE(v17[36]) = HIBYTE(v28[36]);
  BYTE12(v17[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v37, v17);
  memcpy(v36, v37, sizeof(v36));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v17[33] = aElideEmptyFile;
  *((_QWORD *)&v17[33] + 1) = 17LL;
  memcpy(v24, v17, 0x220uLL);
  *(_OWORD *)&v24[560] = v17[35];
  *(_QWORD *)&v24[580] = *(_QWORD *)((char *)&v17[36] + 4);
  v25 = HIDWORD(v17[36]);
  *(_QWORD *)&v24[544] = aElideEmptyFile;
  *(_QWORD *)&v24[552] = 17LL;
  *(_DWORD *)&v24[576] = 122;
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::string::String::push_str(v17, aRemoveEmptyOut, 25LL);
  v14 = *(_QWORD *)&v17[0];
  *(_OWORD *)v20 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v16 = *(_OWORD *)v20;
  if ( *(_QWORD *)&v24[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v24[440], aRemoveEmptyOut);
  *(_QWORD *)&v24[440] = v14;
  *(_OWORD *)&v24[448] = v16;
  memcpy(v17, v24, 0x24CuLL);
  *(_WORD *)((char *)&v17[36] + 13) = *(_WORD *)((char *)&v25 + 1);
  HIBYTE(v17[36]) = HIBYTE(v25);
  BYTE12(v17[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v36, v17);
  memcpy(v35, v36, sizeof(v35));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v20);
  *(_QWORD *)&v20[528] = aFile;
  *(_QWORD *)&v20[536] = 4LL;
  memcpy(v17, v20, 0x248uLL);
  DWORD2(v17[36]) = *(_DWORD *)&v20[584] | 5;
  BYTE12(v17[36]) = v21;
  BYTE13(v17[36]) = 3;
  HIWORD(v17[36]) = HIWORD(v21);
  clap_builder::builder::command::Command::arg_internal(v35, v17);
  memcpy(v34, v35, sizeof(v34));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v20);
  *(_QWORD *)&v20[528] = aPattern_0;
  *(_QWORD *)&v20[536] = 7LL;
  memcpy(v17, v20, 0x248uLL);
  DWORD2(v17[36]) = *(_DWORD *)&v20[584] | 5;
  HIDWORD(v17[36]) = v21 & 0xFFFFFF00 | 1;
  clap_builder::builder::command::Command::arg_internal(v34, v17);
  memcpy(v43, v34, sizeof(v43));
  clap_builder::builder::command::Command::after_help(dest, v43);
  return dest;
}
