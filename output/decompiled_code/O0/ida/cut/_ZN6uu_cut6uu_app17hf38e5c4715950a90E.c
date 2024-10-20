void *__fastcall uu_cut::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  int v5; // ebp
  int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // r14
  __int128 v17; // [rsp+0h] [rbp-5608h]
  _OWORD v18[37]; // [rsp+10h] [rbp-55F8h] BYREF
  __int64 v19; // [rsp+268h] [rbp-53A0h] BYREF
  __int128 v20; // [rsp+270h] [rbp-5398h]
  _BYTE v21[584]; // [rsp+280h] [rbp-5388h] BYREF
  int v22; // [rsp+4C8h] [rbp-5140h]
  __int16 v23; // [rsp+4CEh] [rbp-513Ah]
  _BYTE v24[592]; // [rsp+4D0h] [rbp-5138h] BYREF
  _BYTE v25[592]; // [rsp+720h] [rbp-4EE8h] BYREF
  _BYTE v26[592]; // [rsp+970h] [rbp-4C98h] BYREF
  _BYTE v27[588]; // [rsp+BC0h] [rbp-4A48h] BYREF
  int v28; // [rsp+E0Ch] [rbp-47FCh]
  _BYTE v29[588]; // [rsp+E10h] [rbp-47F8h] BYREF
  int v30; // [rsp+105Ch] [rbp-45ACh]
  _BYTE v31[592]; // [rsp+1060h] [rbp-45A8h] BYREF
  _OWORD v32[37]; // [rsp+12B0h] [rbp-4358h] BYREF
  _OWORD v33[37]; // [rsp+1500h] [rbp-4108h] BYREF
  _OWORD v34[37]; // [rsp+1750h] [rbp-3EB8h] BYREF
  _OWORD v35[37]; // [rsp+19A0h] [rbp-3C68h] BYREF
  _OWORD v36[37]; // [rsp+1BF0h] [rbp-3A18h] BYREF
  _QWORD desta[89]; // [rsp+1E40h] [rbp-37C8h] BYREF
  _DWORD v38[178]; // [rsp+2108h] [rbp-3500h] BYREF
  _BYTE v39[700]; // [rsp+23D0h] [rbp-3238h] BYREF
  int v40; // [rsp+268Ch] [rbp-2F7Ch]
  int v41; // [rsp+2690h] [rbp-2F78h]
  int v42; // [rsp+2694h] [rbp-2F74h]
  _BYTE v43[712]; // [rsp+2698h] [rbp-2F70h] BYREF
  _BYTE v44[712]; // [rsp+2960h] [rbp-2CA8h] BYREF
  _BYTE v45[712]; // [rsp+2C28h] [rbp-29E0h] BYREF
  _BYTE v46[712]; // [rsp+2EF0h] [rbp-2718h] BYREF
  _BYTE v47[712]; // [rsp+31B8h] [rbp-2450h] BYREF
  _QWORD v48[89]; // [rsp+3480h] [rbp-2188h] BYREF
  _BYTE v49[712]; // [rsp+3748h] [rbp-1EC0h] BYREF
  _BYTE v50[712]; // [rsp+3A10h] [rbp-1BF8h] BYREF
  _BYTE v51[712]; // [rsp+3CD8h] [rbp-1930h] BYREF
  _BYTE v52[592]; // [rsp+3FA0h] [rbp-1668h] BYREF
  _BYTE v53[592]; // [rsp+41F0h] [rbp-1418h] BYREF
  _QWORD v54[74]; // [rsp+4440h] [rbp-11C8h] BYREF
  _BYTE v55[592]; // [rsp+4690h] [rbp-F78h] BYREF
  _QWORD src[89]; // [rsp+48E0h] [rbp-D28h] BYREF
  _BYTE v57[592]; // [rsp+4BA8h] [rbp-A60h] BYREF
  _BYTE v58[592]; // [rsp+4DF8h] [rbp-810h] BYREF
  _BYTE v59[712]; // [rsp+5048h] [rbp-5C0h] BYREF
  _BYTE v60[760]; // [rsp+5310h] [rbp-2F8h] BYREF

  v54[51] = 0LL;
  v48[43] = 0LL;
  *(_QWORD *)&v39[520] = 0LL;
  *((_QWORD *)&v33[13] + 1) = 0LL;
  *(_QWORD *)&v24[264] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, sizeof(desta));
  uucore::format_usage((unsigned int)&v19);
  v4 = v19;
  if ( v19 != 0x8000000000000000LL )
    v18[0] = v20;
  if ( desta[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&desta[58], aOptionFile);
  desta[58] = v4;
  *(_OWORD *)&desta[59] = v18[0];
  memcpy(v60, desta, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v59, v60);
  clap_builder::builder::command::Command::after_help(v39, v59);
  v5 = v40;
  v6 = v41;
  v40 |= 0x80u;
  v41 |= 0x80u;
  memcpy(v38, v39, 0x2BCuLL);
  v38[175] = v5 | 0x88;
  v38[176] = v6 | 0x88;
  v38[177] = v42;
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = aBytes_1;
  *((_QWORD *)&v18[33] + 1) = 5LL;
  memcpy(v24, v18, 0x220uLL);
  *(_OWORD *)&v24[560] = v18[35];
  *(_QWORD *)&v24[580] = *(_QWORD *)((char *)&v18[36] + 4);
  *(_DWORD *)&v24[588] = HIDWORD(v18[36]);
  *(_QWORD *)&v24[544] = aBytes_1;
  *(_QWORD *)&v24[552] = 5LL;
  *(_DWORD *)&v24[576] = 98;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(v18, aFilterByteColu, 41LL);
  v7 = *(_QWORD *)&v18[0];
  *(_OWORD *)v21 = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = *(_OWORD *)v21;
  if ( *(_QWORD *)&v24[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v24[440], aFilterByteColu);
  *(_QWORD *)&v24[440] = v7;
  *(_OWORD *)&v24[448] = v17;
  memcpy(v18, v24, 0x248uLL);
  *((_QWORD *)&v18[36] + 1) = *(_QWORD *)&v24[584] | 0x20LL;
  *(_QWORD *)v21 = &unk_17764;
  *(_QWORD *)&v21[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v52, v18);
  v52[588] = 1;
  memcpy(v18, v52, sizeof(v18));
  clap_builder::builder::command::Command::arg_internal(v38, v18);
  memcpy(v51, v38, sizeof(v51));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = aCharacters_0;
  *((_QWORD *)&v18[33] + 1) = 10LL;
  memcpy(v25, v18, 0x220uLL);
  *(_OWORD *)&v25[560] = v18[35];
  *(_QWORD *)&v25[580] = *(_QWORD *)((char *)&v18[36] + 4);
  *(_DWORD *)&v25[588] = HIDWORD(v18[36]);
  *(_QWORD *)&v25[544] = aCharacters_0;
  *(_QWORD *)&v25[552] = 10LL;
  *(_DWORD *)&v25[576] = 99;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(v18, aAliasForCharac, 24LL);
  v8 = *(_QWORD *)&v18[0];
  *(_OWORD *)v21 = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = *(_OWORD *)v21;
  if ( *(_QWORD *)&v25[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v25[440], aAliasForCharac);
  *(_QWORD *)&v25[440] = v8;
  *(_OWORD *)&v25[448] = v17;
  memcpy(v18, v25, 0x248uLL);
  *((_QWORD *)&v18[36] + 1) = *(_QWORD *)&v25[584] | 0x20LL;
  *(_QWORD *)v21 = &unk_17764;
  *(_QWORD *)&v21[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v53, v18);
  v53[588] = 1;
  memcpy(v18, v53, sizeof(v18));
  clap_builder::builder::command::Command::arg_internal(v51, v18);
  memcpy(v50, v51, sizeof(v50));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = aDelimiter_0;
  *((_QWORD *)&v18[33] + 1) = 9LL;
  memcpy(v32, v18, 0x220uLL);
  v32[35] = v18[35];
  *(_QWORD *)((char *)&v32[36] + 4) = *(_QWORD *)((char *)&v18[36] + 4);
  HIDWORD(v32[36]) = HIDWORD(v18[36]);
  *(_QWORD *)&v32[34] = aDelimiter_0;
  *((_QWORD *)&v32[34] + 1) = 9LL;
  LODWORD(v32[36]) = 100;
  if ( *(_QWORD *)&v32[5] >= 4uLL && *(_QWORD *)&v32[5] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>((char *)&v32[5] + 8);
  *(_QWORD *)&v32[5] = 2LL;
  memcpy(v35, v32, sizeof(v35));
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(v18, aSpecifyTheDeli, 91LL);
  v9 = *(_QWORD *)&v18[0];
  *(_OWORD *)v21 = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = *(_OWORD *)v21;
  if ( *((_QWORD *)&v35[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v35[27] + 8, aSpecifyTheDeli);
  *((_QWORD *)&v35[27] + 1) = v9;
  v35[28] = v17;
  memcpy(v18, v35, sizeof(v18));
  *(_QWORD *)v21 = aDelim;
  *(_QWORD *)&v21[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v57, v18);
  memcpy(v18, v57, sizeof(v18));
  clap_builder::builder::command::Command::arg_internal(v50, v18);
  memcpy(v49, v50, sizeof(v49));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = aWhitespaceDeli_0;
  *((_QWORD *)&v18[33] + 1) = 20LL;
  memcpy(v33, v18, 0x240uLL);
  *(_QWORD *)((char *)&v33[36] + 4) = *(_QWORD *)((char *)&v18[36] + 4);
  HIDWORD(v33[36]) = HIDWORD(v18[36]);
  LODWORD(v33[36]) = 119;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(v18, aUseAnyNumberOf, 101LL);
  v10 = *(_QWORD *)&v18[0];
  *(_OWORD *)v21 = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = *(_OWORD *)v21;
  if ( *((_QWORD *)&v33[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v33[27] + 8, aUseAnyNumberOf);
  *((_QWORD *)&v33[27] + 1) = v10;
  v33[28] = v17;
  memcpy(v18, v33, sizeof(v18));
  *(_QWORD *)v21 = aWhitespace;
  *(_QWORD *)&v21[8] = 10LL;
  clap_builder::builder::arg::Arg::value_names(v54, v18);
  BYTE4(v54[73]) = 2;
  memcpy(v18, v54, sizeof(v18));
  clap_builder::builder::command::Command::arg_internal(v49, v18);
  memcpy(v48, v49, sizeof(v48));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = aFields_0;
  *((_QWORD *)&v18[33] + 1) = 6LL;
  memcpy(v26, v18, 0x220uLL);
  *(_OWORD *)&v26[560] = v18[35];
  *(_QWORD *)&v26[580] = *(_QWORD *)((char *)&v18[36] + 4);
  *(_DWORD *)&v26[588] = HIDWORD(v18[36]);
  *(_QWORD *)&v26[544] = aFields_0;
  *(_QWORD *)&v26[552] = 6LL;
  *(_DWORD *)&v26[576] = 102;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(v18, aFilterFieldCol, 42LL);
  v11 = *(_QWORD *)&v18[0];
  *(_OWORD *)v21 = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = *(_OWORD *)v21;
  if ( *(_QWORD *)&v26[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v26[440], aFilterFieldCol);
  *(_QWORD *)&v26[440] = v11;
  *(_OWORD *)&v26[448] = v17;
  memcpy(v18, v26, 0x248uLL);
  *((_QWORD *)&v18[36] + 1) = *(_QWORD *)&v26[584] | 0x20LL;
  *(_QWORD *)v21 = &unk_17764;
  *(_QWORD *)&v21[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v55, v18);
  v55[588] = 1;
  memcpy(v18, v55, sizeof(v18));
  clap_builder::builder::command::Command::arg_internal(v48, v18);
  memcpy(v47, v48, sizeof(v47));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = aComplement_0;
  *((_QWORD *)&v18[33] + 1) = 10LL;
  memcpy(v31, v18, 0x220uLL);
  *(_OWORD *)&v31[560] = v18[35];
  *(_OWORD *)&v31[576] = v18[36];
  *(_QWORD *)&v31[544] = aComplement_0;
  *(_QWORD *)&v31[552] = 10LL;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(v18, aInvertTheFilte, 98LL);
  v12 = *(_QWORD *)&v18[0];
  *(_OWORD *)v21 = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = *(_OWORD *)v21;
  if ( *(_QWORD *)&v31[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v31[440], aInvertTheFilte);
  *(_QWORD *)&v31[440] = v12;
  *(_OWORD *)&v31[448] = v17;
  memcpy(v18, v31, 0x24CuLL);
  *(_WORD *)((char *)&v18[36] + 13) = *(_WORD *)&v31[589];
  HIBYTE(v18[36]) = v31[591];
  BYTE12(v18[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v47, v18);
  memcpy(v46, v47, sizeof(v46));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = aOnlyDelimited_0;
  *((_QWORD *)&v18[33] + 1) = 14LL;
  memcpy(v27, v18, 0x220uLL);
  *(_OWORD *)&v27[560] = v18[35];
  *(_QWORD *)&v27[580] = *(_QWORD *)((char *)&v18[36] + 4);
  v28 = HIDWORD(v18[36]);
  *(_QWORD *)&v27[544] = aOnlyDelimited_0;
  *(_QWORD *)&v27[552] = 14LL;
  *(_DWORD *)&v27[576] = 115;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(v18, aInFieldModeOnl, 59LL);
  v13 = *(_QWORD *)&v18[0];
  *(_OWORD *)v21 = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = *(_OWORD *)v21;
  if ( *(_QWORD *)&v27[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v27[440], aInFieldModeOnl);
  *(_QWORD *)&v27[440] = v13;
  *(_OWORD *)&v27[448] = v17;
  memcpy(v18, v27, 0x24CuLL);
  *(_WORD *)((char *)&v18[36] + 13) = *(_WORD *)((char *)&v28 + 1);
  HIBYTE(v18[36]) = HIBYTE(v28);
  BYTE12(v18[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v46, v18);
  memcpy(v45, v46, sizeof(v45));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = aZeroTerminated_0;
  *((_QWORD *)&v18[33] + 1) = 15LL;
  memcpy(v29, v18, 0x220uLL);
  *(_OWORD *)&v29[560] = v18[35];
  *(_QWORD *)&v29[580] = *(_QWORD *)((char *)&v18[36] + 4);
  v30 = HIDWORD(v18[36]);
  *(_QWORD *)&v29[544] = aZeroTerminated_0;
  *(_QWORD *)&v29[552] = 15LL;
  *(_DWORD *)&v29[576] = 122;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(v18, aInsteadOfFilte, 87LL);
  v14 = *(_QWORD *)&v18[0];
  *(_OWORD *)v21 = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = *(_OWORD *)v21;
  if ( *(_QWORD *)&v29[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29[440], aInsteadOfFilte);
  *(_QWORD *)&v29[440] = v14;
  *(_OWORD *)&v29[448] = v17;
  memcpy(v18, v29, 0x24CuLL);
  *(_WORD *)((char *)&v18[36] + 13) = *(_WORD *)((char *)&v30 + 1);
  HIBYTE(v18[36]) = HIBYTE(v30);
  BYTE12(v18[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v45, v18);
  memcpy(v44, v45, sizeof(v44));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = aOutputDelimite;
  *((_QWORD *)&v18[33] + 1) = 16LL;
  memcpy(v34, v18, 0x220uLL);
  v34[35] = v18[35];
  v34[36] = v18[36];
  *(_QWORD *)&v34[34] = aOutputDelimite;
  *((_QWORD *)&v34[34] + 1) = 16LL;
  if ( *(_QWORD *)&v34[5] >= 4uLL && *(_QWORD *)&v34[5] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>((char *)&v34[5] + 8);
  *(_QWORD *)&v34[5] = 2LL;
  memcpy(v36, v34, sizeof(v36));
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(v18, aInFieldModeRep, 80LL);
  v15 = *(_QWORD *)&v18[0];
  *(_OWORD *)v21 = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = *(_OWORD *)v21;
  if ( *((_QWORD *)&v36[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v36[27] + 8, aInFieldModeRep);
  *((_QWORD *)&v36[27] + 1) = v15;
  v36[28] = v17;
  memcpy(v18, v36, sizeof(v18));
  *(_QWORD *)v21 = aNewDelim;
  *(_QWORD *)&v21[8] = 9LL;
  clap_builder::builder::arg::Arg::value_names(v58, v18);
  memcpy(v18, v58, sizeof(v18));
  clap_builder::builder::command::Command::arg_internal(v44, v18);
  memcpy(v43, v44, sizeof(v43));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v21);
  *(_QWORD *)&v21[528] = aFile;
  *(_QWORD *)&v21[536] = 4LL;
  memcpy(v18, v21, 0x248uLL);
  DWORD2(v18[36]) = v22 | 4;
  WORD6(v18[36]) = 769;
  HIWORD(v18[36]) = v23;
  clap_builder::builder::command::Command::arg_internal(v43, v18);
  memcpy(dest, v43, 0x2C8uLL);
  return dest;
}
