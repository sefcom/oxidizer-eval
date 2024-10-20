void *__fastcall uu_tac::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // r14
  __int128 v9; // [rsp+0h] [rbp-2478h]
  __int64 v10; // [rsp+18h] [rbp-2460h] BYREF
  __int128 v11; // [rsp+20h] [rbp-2458h]
  _OWORD v12[37]; // [rsp+30h] [rbp-2448h] BYREF
  _BYTE v13[588]; // [rsp+280h] [rbp-21F8h] BYREF
  int v14; // [rsp+4CCh] [rbp-1FACh]
  _BYTE v15[588]; // [rsp+4D0h] [rbp-1FA8h] BYREF
  int v16; // [rsp+71Ch] [rbp-1D5Ch]
  _BYTE v17[584]; // [rsp+720h] [rbp-1D58h] BYREF
  int v18; // [rsp+968h] [rbp-1B10h]
  __int16 v19; // [rsp+96Eh] [rbp-1B0Ah]
  _OWORD v20[37]; // [rsp+970h] [rbp-1B08h] BYREF
  _QWORD desta[89]; // [rsp+BC0h] [rbp-18B8h] BYREF
  _BYTE v22[712]; // [rsp+E88h] [rbp-15F0h] BYREF
  _BYTE v23[712]; // [rsp+1150h] [rbp-1328h] BYREF
  _QWORD v24[89]; // [rsp+1418h] [rbp-1060h] BYREF
  _BYTE v25[712]; // [rsp+16E0h] [rbp-D98h] BYREF
  _QWORD src[89]; // [rsp+19A8h] [rbp-AD0h] BYREF
  _BYTE v27[592]; // [rsp+1C70h] [rbp-808h] BYREF
  _DWORD v28[178]; // [rsp+1EC0h] [rbp-5B8h] BYREF
  _BYTE v29[752]; // [rsp+2188h] [rbp-2F0h] BYREF

  v24[7] = 0LL;
  *(_QWORD *)&v13[464] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, sizeof(desta));
  uucore::format_usage((unsigned int)&v10);
  v4 = v10;
  if ( v10 != 0x8000000000000000LL )
    v12[0] = v11;
  if ( desta[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&desta[58], aOptionFile);
  desta[58] = v4;
  *(_OWORD *)&desta[59] = v12[0];
  memcpy(v29, desta, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v28, v29);
  *(_QWORD *)&v28[175] |= 0x8000000080uLL;
  memcpy(v25, v28, sizeof(v25));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[33] = aBefore;
  *((_QWORD *)&v12[33] + 1) = 6LL;
  memcpy(v13, v12, 0x220uLL);
  *(_OWORD *)&v13[560] = v12[35];
  *(_QWORD *)&v13[580] = *(_QWORD *)((char *)&v12[36] + 4);
  v14 = HIDWORD(v12[36]);
  *(_QWORD *)&v13[544] = aBefore;
  *(_QWORD *)&v13[552] = 6LL;
  *(_DWORD *)&v13[576] = 98;
  *(_QWORD *)&v12[0] = 0LL;
  *((_QWORD *)&v12[0] + 1) = 1LL;
  *(_QWORD *)&v12[1] = 0LL;
  alloc::string::String::push_str(v12, aAttachTheSepar, 44LL);
  v5 = *(_QWORD *)&v12[0];
  *(_OWORD *)v17 = *(_OWORD *)((char *)v12 + 8);
  if ( *(_QWORD *)&v12[0] != 0x8000000000000000LL )
    v9 = *(_OWORD *)v17;
  if ( *(_QWORD *)&v13[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v13[440], aAttachTheSepar);
  *(_QWORD *)&v13[440] = v5;
  *(_OWORD *)&v13[448] = v9;
  memcpy(v12, v13, 0x24CuLL);
  *(_WORD *)((char *)&v12[36] + 13) = *(_WORD *)((char *)&v14 + 1);
  HIBYTE(v12[36]) = HIBYTE(v14);
  BYTE12(v12[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v25, v12);
  memcpy(v24, v25, sizeof(v24));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[33] = aRegex;
  *((_QWORD *)&v12[33] + 1) = 5LL;
  memcpy(v15, v12, 0x220uLL);
  *(_OWORD *)&v15[560] = v12[35];
  *(_QWORD *)&v15[580] = *(_QWORD *)((char *)&v12[36] + 4);
  v16 = HIDWORD(v12[36]);
  *(_QWORD *)&v15[544] = aRegex;
  *(_QWORD *)&v15[552] = 5LL;
  *(_DWORD *)&v15[576] = 114;
  *(_QWORD *)&v12[0] = 0LL;
  *((_QWORD *)&v12[0] + 1) = 1LL;
  *(_QWORD *)&v12[1] = 0LL;
  alloc::string::String::push_str(v12, aInterpretTheSe, 46LL);
  v6 = *(_QWORD *)&v12[0];
  *(_OWORD *)v17 = *(_OWORD *)((char *)v12 + 8);
  if ( *(_QWORD *)&v12[0] != 0x8000000000000000LL )
    v9 = *(_OWORD *)v17;
  if ( *(_QWORD *)&v15[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v15[440], aInterpretTheSe);
  *(_QWORD *)&v15[440] = v6;
  *(_OWORD *)&v15[448] = v9;
  memcpy(v12, v15, 0x24CuLL);
  *(_WORD *)((char *)&v12[36] + 13) = *(_WORD *)((char *)&v16 + 1);
  HIBYTE(v12[36]) = HIBYTE(v16);
  BYTE12(v12[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v24, v12);
  memcpy(v23, v24, sizeof(v23));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[33] = aSeparator;
  *((_QWORD *)&v12[33] + 1) = 9LL;
  memcpy(v20, v12, 0x220uLL);
  v20[35] = v12[35];
  *(_QWORD *)((char *)&v20[36] + 4) = *(_QWORD *)((char *)&v12[36] + 4);
  HIDWORD(v20[36]) = HIDWORD(v12[36]);
  *(_QWORD *)&v20[34] = aSeparator;
  *((_QWORD *)&v20[34] + 1) = 9LL;
  LODWORD(v20[36]) = 115;
  *(_QWORD *)&v12[0] = 0LL;
  *((_QWORD *)&v12[0] + 1) = 1LL;
  *(_QWORD *)&v12[1] = 0LL;
  alloc::string::String::push_str(v12, aUseStringAsThe, 46LL);
  v7 = *(_QWORD *)&v12[0];
  *(_OWORD *)v17 = *(_OWORD *)((char *)v12 + 8);
  if ( *(_QWORD *)&v12[0] != 0x8000000000000000LL )
    v9 = *(_OWORD *)v17;
  if ( *((_QWORD *)&v20[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v20[27] + 8, aUseStringAsThe);
  *((_QWORD *)&v20[27] + 1) = v7;
  v20[28] = v9;
  memcpy(v12, v20, sizeof(v12));
  *(_QWORD *)v17 = aString;
  *(_QWORD *)&v17[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v27, v12);
  memcpy(v12, v27, sizeof(v12));
  clap_builder::builder::command::Command::arg_internal(v23, v12);
  memcpy(v22, v23, sizeof(v22));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v17[528] = aFile;
  *(_QWORD *)&v17[536] = 4LL;
  memcpy(v12, v17, 0x248uLL);
  DWORD2(v12[36]) = v18 | 4;
  WORD6(v12[36]) = 769;
  HIWORD(v12[36]) = v19;
  clap_builder::builder::command::Command::arg_internal(v22, v12);
  memcpy(dest, v22, 0x2C8uLL);
  return dest;
}
