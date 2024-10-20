void *__fastcall uu_mkdir::uu_app(void *dest)
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
  _OWORD v12[37]; // [rsp+40h] [rbp-1F28h] BYREF
  _BYTE v13[589]; // [rsp+290h] [rbp-1CD8h] BYREF
  _BYTE v14[3]; // [rsp+4DDh] [rbp-1A8Bh]
  _BYTE v15[588]; // [rsp+4E0h] [rbp-1A88h] BYREF
  int v16; // [rsp+72Ch] [rbp-183Ch]
  _BYTE v17[588]; // [rsp+730h] [rbp-1838h] BYREF
  int v18; // [rsp+97Ch] [rbp-15ECh]
  _OWORD v19[37]; // [rsp+980h] [rbp-15E8h] BYREF
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
    v12[0] = v11;
  if ( *(_QWORD *)&v20[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v20[116], aOptionDirector);
  *(_QWORD *)&v20[116] = v4;
  *(_OWORD *)&v20[118] = v12[0];
  memcpy(v21, v20, 0x2BCuLL);
  *(_QWORD *)((char *)&v21[87] + 4) = *(_QWORD *)&v20[175] | 0x8000000080LL;
  HIDWORD(v21[88]) = v20[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[33] = aMode;
  *((_QWORD *)&v12[33] + 1) = 4LL;
  memcpy(v19, v12, 0x220uLL);
  v19[35] = v12[35];
  *(_QWORD *)((char *)&v19[36] + 4) = *(_QWORD *)((char *)&v12[36] + 4);
  HIDWORD(v19[36]) = HIDWORD(v12[36]);
  *(_QWORD *)&v19[34] = aMode;
  *((_QWORD *)&v19[34] + 1) = 4LL;
  LODWORD(v19[36]) = 109;
  *(_QWORD *)&v12[0] = 0LL;
  *((_QWORD *)&v12[0] + 1) = 1LL;
  *(_QWORD *)&v12[1] = 0LL;
  alloc::string::String::push_str(v12, aSetFileModeNot, 42LL);
  v5 = *(_QWORD *)&v12[0];
  if ( *(_QWORD *)&v12[0] != 0x8000000000000000LL )
    v9 = *(_OWORD *)((char *)v12 + 8);
  if ( *((_QWORD *)&v19[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v19[27] + 8, aSetFileModeNot);
  *((_QWORD *)&v19[27] + 1) = v5;
  v19[28] = v9;
  memcpy(v12, v19, sizeof(v12));
  clap_builder::builder::command::Command::arg_internal(v21, v12);
  memcpy(v24, v21, sizeof(v24));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[33] = aParents_0;
  *((_QWORD *)&v12[33] + 1) = 7LL;
  memcpy(v15, v12, 0x220uLL);
  *(_OWORD *)&v15[560] = v12[35];
  *(_QWORD *)&v15[580] = *(_QWORD *)((char *)&v12[36] + 4);
  v16 = HIDWORD(v12[36]);
  *(_QWORD *)&v15[544] = aParents_0;
  *(_QWORD *)&v15[552] = 7LL;
  *(_DWORD *)&v15[576] = 112;
  *(_QWORD *)&v12[0] = 0LL;
  *((_QWORD *)&v12[0] + 1) = 1LL;
  *(_QWORD *)&v12[1] = 0LL;
  alloc::string::String::push_str(v12, aMakeParentDire, 33LL);
  v6 = *(_QWORD *)&v12[0];
  if ( *(_QWORD *)&v12[0] != 0x8000000000000000LL )
    v9 = *(_OWORD *)((char *)v12 + 8);
  if ( *(_QWORD *)&v15[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v15[440], aMakeParentDire);
  *(_QWORD *)&v15[440] = v6;
  *(_OWORD *)&v15[448] = v9;
  memcpy(v12, v15, 0x24CuLL);
  *(_WORD *)((char *)&v12[36] + 13) = *(_WORD *)((char *)&v16 + 1);
  HIBYTE(v12[36]) = HIBYTE(v16);
  BYTE12(v12[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v24, v12);
  memcpy(v23, v24, sizeof(v23));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[33] = aVerbose_0;
  *((_QWORD *)&v12[33] + 1) = 7LL;
  memcpy(v17, v12, 0x220uLL);
  *(_OWORD *)&v17[560] = v12[35];
  *(_QWORD *)&v17[580] = *(_QWORD *)((char *)&v12[36] + 4);
  v18 = HIDWORD(v12[36]);
  *(_QWORD *)&v17[544] = aVerbose_0;
  *(_QWORD *)&v17[552] = 7LL;
  *(_DWORD *)&v17[576] = 118;
  *(_QWORD *)&v12[0] = 0LL;
  *((_QWORD *)&v12[0] + 1) = 1LL;
  *(_QWORD *)&v12[1] = 0LL;
  alloc::string::String::push_str(v12, aPrintAMessageF, 42LL);
  v7 = *(_QWORD *)&v12[0];
  if ( *(_QWORD *)&v12[0] != 0x8000000000000000LL )
    v9 = *(_OWORD *)((char *)v12 + 8);
  if ( *(_QWORD *)&v17[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v17[440], aPrintAMessageF);
  *(_QWORD *)&v17[440] = v7;
  *(_OWORD *)&v17[448] = v9;
  memcpy(v12, v17, 0x24CuLL);
  *(_WORD *)((char *)&v12[36] + 13) = *(_WORD *)((char *)&v18 + 1);
  HIBYTE(v12[36]) = HIBYTE(v18);
  BYTE12(v12[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v23, v12);
  memcpy(v22, v23, sizeof(v22));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[33] = aDirs;
  *((_QWORD *)&v12[33] + 1) = 4LL;
  *(_OWORD *)v13 = v12[0];
  memcpy(&v13[40], (char *)&v12[2] + 8, 0x224uLL);
  *(_WORD *)v14 = *(_WORD *)((char *)&v12[36] + 13);
  v14[2] = HIBYTE(v12[36]);
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
  BYTE13(v12[36]) = 4;
  HIWORD(v12[36]) = *(_WORD *)&v14[1];
  clap_builder::builder::command::Command::arg_internal(v22, v12);
  memcpy(dest, v22, 0x2C8uLL);
  return dest;
}
