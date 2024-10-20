void *__fastcall uu_pwd::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  __int128 v11; // [rsp+0h] [rbp-1798h]
  __int64 v12; // [rsp+28h] [rbp-1770h] BYREF
  __int128 v13; // [rsp+30h] [rbp-1768h]
  _BYTE v14[588]; // [rsp+40h] [rbp-1758h] BYREF
  int v15; // [rsp+28Ch] [rbp-150Ch]
  _BYTE v16[588]; // [rsp+298h] [rbp-1500h] BYREF
  int v17; // [rsp+4E4h] [rbp-12B4h]
  _OWORD v18[37]; // [rsp+4E8h] [rbp-12B0h] BYREF
  _OWORD v19[37]; // [rsp+738h] [rbp-1060h] BYREF
  _DWORD v20[178]; // [rsp+988h] [rbp-E10h] BYREF
  _DWORD v21[178]; // [rsp+C50h] [rbp-B48h] BYREF
  _BYTE v22[712]; // [rsp+F18h] [rbp-880h] BYREF
  _QWORD src[89]; // [rsp+11E0h] [rbp-5B8h] BYREF
  _BYTE desta[752]; // [rsp+14A8h] [rbp-2F0h] BYREF

  *((_QWORD *)&v19[3] + 1) = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v20, desta);
  uucore::format_usage((unsigned int)&v12);
  v4 = v12;
  if ( v12 != 0x8000000000000000LL )
    *(_OWORD *)v14 = v13;
  if ( *(_QWORD *)&v20[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v20[116], aOptionFile);
  *(_QWORD *)&v20[116] = v4;
  *(_OWORD *)&v20[118] = *(_OWORD *)v14;
  memcpy(v21, v20, 0x2BCuLL);
  *(_QWORD *)&v21[175] = *(_QWORD *)&v20[175] | 0x8000000080LL;
  v21[177] = v20[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v14);
  *(_QWORD *)&v14[528] = aLogical_0;
  *(_QWORD *)&v14[536] = 7LL;
  memcpy(v16, v14, 0x220uLL);
  *(_OWORD *)&v16[560] = *(_OWORD *)&v14[560];
  *(_QWORD *)&v16[580] = *(_QWORD *)&v14[580];
  v17 = v15;
  *(_QWORD *)&v16[544] = aLogical_0;
  *(_QWORD *)&v16[552] = 7LL;
  *(_DWORD *)&v16[576] = 76;
  *(_QWORD *)v14 = 0LL;
  *(_QWORD *)&v14[8] = 1LL;
  *(_QWORD *)&v14[16] = 0LL;
  alloc::string::String::push_str(v14, aUsePwdFromEnvi, 54LL);
  v5 = *(_QWORD *)v14;
  if ( *(_QWORD *)v14 != 0x8000000000000000LL )
    v11 = *(_OWORD *)&v14[8];
  if ( *(_QWORD *)&v16[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v16[440], aUsePwdFromEnvi);
  *(_QWORD *)&v16[440] = v5;
  *(_OWORD *)&v16[448] = v11;
  memcpy(v14, v16, sizeof(v14));
  *(_WORD *)((char *)&v15 + 1) = *(_WORD *)((char *)&v17 + 1);
  HIBYTE(v15) = HIBYTE(v17);
  LOBYTE(v15) = 2;
  clap_builder::builder::command::Command::arg_internal(v21, v14);
  memcpy(v22, v21, sizeof(v22));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v14);
  *(_QWORD *)&v14[528] = aPhysical;
  *(_QWORD *)&v14[536] = 8LL;
  memcpy(v18, v14, 0x220uLL);
  v18[35] = *(_OWORD *)&v14[560];
  *(_QWORD *)((char *)&v18[36] + 4) = *(_QWORD *)&v14[580];
  HIDWORD(v18[36]) = v15;
  *(_QWORD *)&v18[34] = aPhysical;
  *((_QWORD *)&v18[34] + 1) = 8LL;
  LODWORD(v18[36]) = 80;
  v6 = *(_QWORD *)&v18[9];
  if ( *(_QWORD *)&v18[9] == *(_QWORD *)&v18[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v18[8]);
  v7 = *((_QWORD *)&v18[8] + 1);
  v8 = 16 * v6;
  *(_QWORD *)(*((_QWORD *)&v18[8] + 1) + v8) = aLogical_0;
  *(_QWORD *)(v7 + v8 + 8) = 7LL;
  *(_QWORD *)&v18[9] = v6 + 1;
  memcpy(v19, v18, sizeof(v19));
  *(_QWORD *)v14 = 0LL;
  *(_QWORD *)&v14[8] = 1LL;
  *(_QWORD *)&v14[16] = 0LL;
  alloc::string::String::push_str(v14, aAvoidAllSymlin, 18LL);
  v9 = *(_QWORD *)v14;
  if ( *(_QWORD *)v14 != 0x8000000000000000LL )
    v11 = *(_OWORD *)&v14[8];
  if ( *((_QWORD *)&v19[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v19[27] + 8, aAvoidAllSymlin);
  *((_QWORD *)&v19[27] + 1) = v9;
  v19[28] = v11;
  memcpy(v14, v19, sizeof(v14));
  *(_WORD *)((char *)&v15 + 1) = *(_WORD *)((char *)&v19[36] + 13);
  HIBYTE(v15) = HIBYTE(v19[36]);
  LOBYTE(v15) = 2;
  clap_builder::builder::command::Command::arg_internal(v22, v14);
  memcpy(dest, v22, 0x2C8uLL);
  return dest;
}
