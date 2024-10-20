void *__fastcall uu_nproc::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int128 v8; // [rsp+0h] [rbp-1788h]
  __int64 v9; // [rsp+18h] [rbp-1770h] BYREF
  __int128 v10; // [rsp+20h] [rbp-1768h]
  _OWORD v11[37]; // [rsp+30h] [rbp-1758h] BYREF
  _BYTE v12[592]; // [rsp+280h] [rbp-1508h] BYREF
  _OWORD v13[37]; // [rsp+4D0h] [rbp-12B8h] BYREF
  _DWORD v14[178]; // [rsp+728h] [rbp-1060h] BYREF
  _OWORD v15[37]; // [rsp+9F0h] [rbp-D98h] BYREF
  _DWORD v16[178]; // [rsp+C40h] [rbp-B48h] BYREF
  _BYTE v17[712]; // [rsp+F08h] [rbp-880h] BYREF
  _QWORD src[89]; // [rsp+11D0h] [rbp-5B8h] BYREF
  _BYTE desta[752]; // [rsp+1498h] [rbp-2F0h] BYREF

  *(_QWORD *)&v14[14] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v14, desta);
  uucore::format_usage((unsigned int)&v9);
  v4 = v9;
  if ( v9 != 0x8000000000000000LL )
    v11[0] = v10;
  if ( *(_QWORD *)&v14[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v14[116], aOptions);
  *(_QWORD *)&v14[116] = v4;
  *(_OWORD *)&v14[118] = v11[0];
  memcpy(v16, v14, 0x2BCuLL);
  *(_QWORD *)&v16[175] = *(_QWORD *)&v14[175] | 0x8000000080LL;
  v16[177] = v14[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v11);
  *(_QWORD *)&v11[33] = aAll;
  *((_QWORD *)&v11[33] + 1) = 3LL;
  memcpy(v12, v11, 0x220uLL);
  *(_OWORD *)&v12[560] = v11[35];
  *(_OWORD *)&v12[576] = v11[36];
  *(_QWORD *)&v12[544] = aAll;
  *(_QWORD *)&v12[552] = 3LL;
  *(_QWORD *)&v11[0] = 0LL;
  *((_QWORD *)&v11[0] + 1) = 1LL;
  *(_QWORD *)&v11[1] = 0LL;
  alloc::string::String::push_str(v11, aPrintTheNumber_0, 49LL);
  v5 = *(_QWORD *)&v11[0];
  v13[0] = *(_OWORD *)((char *)v11 + 8);
  if ( *(_QWORD *)&v11[0] != 0x8000000000000000LL )
    v8 = v13[0];
  if ( *(_QWORD *)&v12[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v12[440], aPrintTheNumber_0);
  *(_QWORD *)&v12[440] = v5;
  *(_OWORD *)&v12[448] = v8;
  memcpy(v11, v12, 0x24CuLL);
  *(_WORD *)((char *)&v11[36] + 13) = *(_WORD *)&v12[589];
  HIBYTE(v11[36]) = v12[591];
  BYTE12(v11[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v16, v11);
  memcpy(v17, v16, sizeof(v17));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v13);
  *(_QWORD *)&v13[33] = aIgnore;
  *((_QWORD *)&v13[33] + 1) = 6LL;
  memcpy(v11, v13, 0x220uLL);
  v11[35] = v13[35];
  v11[36] = v13[36];
  *(_QWORD *)&v11[34] = aIgnore;
  *((_QWORD *)&v11[34] + 1) = 6LL;
  *(_QWORD *)&v13[0] = aN;
  *((_QWORD *)&v13[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v15, v11);
  *(_QWORD *)&v11[0] = 0LL;
  *((_QWORD *)&v11[0] + 1) = 1LL;
  *(_QWORD *)&v11[1] = 0LL;
  alloc::string::String::push_str(v11, aIgnoreUpToNCor, 20LL);
  v6 = *(_QWORD *)&v11[0];
  v13[0] = *(_OWORD *)((char *)v11 + 8);
  if ( *(_QWORD *)&v11[0] != 0x8000000000000000LL )
    v8 = v13[0];
  if ( *((_QWORD *)&v15[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v15[27] + 8, aIgnoreUpToNCor);
  *((_QWORD *)&v15[27] + 1) = v6;
  v15[28] = v8;
  memcpy(v11, v15, sizeof(v11));
  clap_builder::builder::command::Command::arg_internal(v17, v11);
  memcpy(dest, v17, 0x2C8uLL);
  return dest;
}
