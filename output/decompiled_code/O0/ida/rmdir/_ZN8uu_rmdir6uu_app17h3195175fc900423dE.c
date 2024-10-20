void *__fastcall uu_rmdir::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // r14
  __int128 v9; // [rsp+0h] [rbp-1F68h]
  __int64 v10; // [rsp+28h] [rbp-1F40h] BYREF
  __int128 v11; // [rsp+30h] [rbp-1F38h]
  _BYTE v12[592]; // [rsp+40h] [rbp-1F28h] BYREF
  _BYTE v13[589]; // [rsp+290h] [rbp-1CD8h] BYREF
  _BYTE v14[3]; // [rsp+4DDh] [rbp-1A8Bh]
  _BYTE v15[588]; // [rsp+4E0h] [rbp-1A88h] BYREF
  int v16; // [rsp+72Ch] [rbp-183Ch]
  _BYTE v17[588]; // [rsp+730h] [rbp-1838h] BYREF
  int v18; // [rsp+97Ch] [rbp-15ECh]
  _BYTE v19[592]; // [rsp+980h] [rbp-15E8h] BYREF
  _DWORD v20[178]; // [rsp+BD0h] [rbp-1398h] BYREF
  _QWORD v21[89]; // [rsp+E98h] [rbp-10D0h] BYREF
  _BYTE v22[712]; // [rsp+1160h] [rbp-E08h] BYREF
  _BYTE v23[712]; // [rsp+1428h] [rbp-B40h] BYREF
  _BYTE v24[712]; // [rsp+16F0h] [rbp-878h] BYREF
  _QWORD src[89]; // [rsp+19B8h] [rbp-5B0h] BYREF
  _BYTE desta[744]; // [rsp+1C80h] [rbp-2E8h] BYREF

  v21[22] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v20, desta);
  uucore::format_usage((unsigned int)&v10);
  v4 = v10;
  if ( v10 != 0x8000000000000000LL )
    *(_OWORD *)v12 = v11;
  if ( *(_QWORD *)&v20[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v20[116], aOptionDirector);
  *(_QWORD *)&v20[116] = v4;
  *(_OWORD *)&v20[118] = *(_OWORD *)v12;
  memcpy(v21, v20, 0x2BCuLL);
  *(_QWORD *)((char *)&v21[87] + 4) = *(_QWORD *)&v20[175] | 0x8000000080LL;
  HIDWORD(v21[88]) = v20[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[528] = aIgnoreFailOnNo;
  *(_QWORD *)&v12[536] = 24LL;
  memcpy(v19, v12, 0x220uLL);
  *(_OWORD *)&v19[560] = *(_OWORD *)&v12[560];
  *(_OWORD *)&v19[576] = *(_OWORD *)&v12[576];
  *(_QWORD *)&v19[544] = aIgnoreFailOnNo;
  *(_QWORD *)&v19[552] = 24LL;
  *(_QWORD *)v12 = 0LL;
  *(_QWORD *)&v12[8] = 1LL;
  *(_QWORD *)&v12[16] = 0LL;
  alloc::string::String::push_str(v12, aIgnoreEachFail, 67LL);
  v5 = *(_QWORD *)v12;
  if ( *(_QWORD *)v12 != 0x8000000000000000LL )
    v9 = *(_OWORD *)&v12[8];
  if ( *(_QWORD *)&v19[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v19[440], aIgnoreEachFail);
  *(_QWORD *)&v19[440] = v5;
  *(_OWORD *)&v19[448] = v9;
  memcpy(v12, v19, 0x24CuLL);
  *(_WORD *)&v12[589] = *(_WORD *)&v19[589];
  v12[591] = v19[591];
  v12[588] = 2;
  clap_builder::builder::command::Command::arg_internal(v21, v12);
  memcpy(v24, v21, sizeof(v24));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[528] = aParents;
  *(_QWORD *)&v12[536] = 7LL;
  memcpy(v15, v12, 0x220uLL);
  *(_OWORD *)&v15[560] = *(_OWORD *)&v12[560];
  *(_QWORD *)&v15[580] = *(_QWORD *)&v12[580];
  v16 = *(_DWORD *)&v12[588];
  *(_QWORD *)&v15[544] = aParents;
  *(_QWORD *)&v15[552] = 7LL;
  *(_DWORD *)&v15[576] = 112;
  *(_QWORD *)v12 = 0LL;
  *(_QWORD *)&v12[8] = 1LL;
  *(_QWORD *)&v12[16] = 0LL;
  alloc::string::String::push_str(v12, aRemoveDirector, 108LL);
  v6 = *(_QWORD *)v12;
  if ( *(_QWORD *)v12 != 0x8000000000000000LL )
    v9 = *(_OWORD *)&v12[8];
  if ( *(_QWORD *)&v15[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v15[440], aRemoveDirector);
  *(_QWORD *)&v15[440] = v6;
  *(_OWORD *)&v15[448] = v9;
  memcpy(v12, v15, 0x24CuLL);
  *(_WORD *)&v12[589] = *(_WORD *)((char *)&v16 + 1);
  v12[591] = HIBYTE(v16);
  v12[588] = 2;
  clap_builder::builder::command::Command::arg_internal(v24, v12);
  memcpy(v23, v24, sizeof(v23));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[528] = aVerbose;
  *(_QWORD *)&v12[536] = 7LL;
  memcpy(v17, v12, 0x220uLL);
  *(_OWORD *)&v17[560] = *(_OWORD *)&v12[560];
  *(_QWORD *)&v17[580] = *(_QWORD *)&v12[580];
  v18 = *(_DWORD *)&v12[588];
  *(_QWORD *)&v17[544] = aVerbose;
  *(_QWORD *)&v17[552] = 7LL;
  *(_DWORD *)&v17[576] = 118;
  *(_QWORD *)v12 = 0LL;
  *(_QWORD *)&v12[8] = 1LL;
  *(_QWORD *)&v12[16] = 0LL;
  alloc::string::String::push_str(v12, aOutputADiagnos, 49LL);
  v7 = *(_QWORD *)v12;
  if ( *(_QWORD *)v12 != 0x8000000000000000LL )
    v9 = *(_OWORD *)&v12[8];
  if ( *(_QWORD *)&v17[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v17[440], aOutputADiagnos);
  *(_QWORD *)&v17[440] = v7;
  *(_OWORD *)&v17[448] = v9;
  memcpy(v12, v17, 0x24CuLL);
  *(_WORD *)&v12[589] = *(_WORD *)((char *)&v18 + 1);
  v12[591] = HIBYTE(v18);
  v12[588] = 2;
  clap_builder::builder::command::Command::arg_internal(v23, v12);
  memcpy(v22, v23, sizeof(v22));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[528] = aDirs;
  *(_QWORD *)&v12[536] = 4LL;
  *(_OWORD *)v13 = *(_OWORD *)v12;
  memcpy(&v13[40], &v12[40], 0x224uLL);
  *(_WORD *)v14 = *(_WORD *)&v12[589];
  v14[2] = v12[591];
  *(_QWORD *)&v13[16] = 1LL;
  *(_QWORD *)&v13[24] = 1LL;
  *(_QWORD *)&v13[32] = -1LL;
  v13[588] = 1;
  if ( *(_QWORD *)&v13[80] >= 4uLL && *(_QWORD *)&v13[80] != 5LL )
  {
    if ( **(_QWORD **)&v13[96] )
      (**(void (__fastcall ***)(_QWORD))&v13[96])(*(_QWORD *)&v13[88]);
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v13[88]);
  }
  *(_QWORD *)&v13[80] = 2LL;
  memcpy(v12, v13, 0x24DuLL);
  v12[589] = 4;
  *(_WORD *)&v12[590] = *(_WORD *)&v14[1];
  clap_builder::builder::command::Command::arg_internal(v22, v12);
  memcpy(dest, v22, 0x2C8uLL);
  return dest;
}
