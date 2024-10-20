void *__fastcall uu_sync::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int128 v14; // [rsp+0h] [rbp-1EF8h]
  __int64 v15; // [rsp+18h] [rbp-1EE0h] BYREF
  __int128 v16; // [rsp+20h] [rbp-1ED8h]
  _BYTE v17[588]; // [rsp+30h] [rbp-1EC8h] BYREF
  int v18; // [rsp+27Ch] [rbp-1C7Ch]
  _OWORD v19[37]; // [rsp+288h] [rbp-1C70h] BYREF
  _OWORD v20[37]; // [rsp+4D8h] [rbp-1A20h] BYREF
  _OWORD v21[37]; // [rsp+728h] [rbp-17D0h] BYREF
  _OWORD v22[37]; // [rsp+978h] [rbp-1580h] BYREF
  _DWORD v23[178]; // [rsp+BC8h] [rbp-1330h] BYREF
  _BYTE v24[588]; // [rsp+E90h] [rbp-1068h] BYREF
  __int16 v25; // [rsp+10DEh] [rbp-E1Ah]
  _DWORD v26[178]; // [rsp+10E0h] [rbp-E18h] BYREF
  _BYTE v27[712]; // [rsp+13A8h] [rbp-B50h] BYREF
  _BYTE v28[712]; // [rsp+1670h] [rbp-888h] BYREF
  _QWORD src[89]; // [rsp+1938h] [rbp-5C0h] BYREF
  _BYTE desta[760]; // [rsp+1C00h] [rbp-2F8h] BYREF

  *(_QWORD *)&v24[56] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v23, desta);
  uucore::format_usage((unsigned int)&v15);
  v4 = v15;
  if ( v15 != 0x8000000000000000LL )
    *(_OWORD *)v17 = v16;
  if ( *(_QWORD *)&v23[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v23[116], aOptionFile);
  *(_QWORD *)&v23[116] = v4;
  *(_OWORD *)&v23[118] = *(_OWORD *)v17;
  memcpy(v26, v23, 0x2BCuLL);
  *(_QWORD *)&v26[175] = *(_QWORD *)&v23[175] | 0x8000000080LL;
  v26[177] = v23[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v17[528] = aFileSystem;
  *(_QWORD *)&v17[536] = 11LL;
  memcpy(v19, v17, 0x220uLL);
  v19[35] = *(_OWORD *)&v17[560];
  *(_QWORD *)((char *)&v19[36] + 4) = *(_QWORD *)&v17[580];
  HIDWORD(v19[36]) = v18;
  *(_QWORD *)&v19[34] = aFileSystem;
  *((_QWORD *)&v19[34] + 1) = 11LL;
  LODWORD(v19[36]) = 102;
  v5 = *((_QWORD *)&v19[7] + 1);
  if ( *((_QWORD *)&v19[7] + 1) == *((_QWORD *)&v19[6] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v19[6] + 8);
  v6 = *(_QWORD *)&v19[7];
  v7 = 16 * v5;
  *(_QWORD *)(*(_QWORD *)&v19[7] + v7) = aData;
  *(_QWORD *)(v6 + v7 + 8) = 4LL;
  *((_QWORD *)&v19[7] + 1) = v5 + 1;
  memcpy(v21, v19, sizeof(v21));
  *(_QWORD *)v17 = 0LL;
  *(_QWORD *)&v17[8] = 1LL;
  *(_QWORD *)&v17[16] = 0LL;
  alloc::string::String::push_str(v17, aSyncTheFileSys, 69LL);
  v8 = *(_QWORD *)v17;
  *(_OWORD *)v24 = *(_OWORD *)&v17[8];
  if ( *(_QWORD *)v17 != 0x8000000000000000LL )
    v14 = *(_OWORD *)v24;
  if ( *((_QWORD *)&v21[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v21[27] + 8, aSyncTheFileSys);
  *((_QWORD *)&v21[27] + 1) = v8;
  v21[28] = v14;
  memcpy(v17, v21, sizeof(v17));
  *(_WORD *)((char *)&v18 + 1) = *(_WORD *)((char *)&v21[36] + 13);
  HIBYTE(v18) = HIBYTE(v21[36]);
  LOBYTE(v18) = 2;
  clap_builder::builder::command::Command::arg_internal(v26, v17);
  memcpy(v28, v26, sizeof(v28));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v17[528] = aData;
  *(_QWORD *)&v17[536] = 4LL;
  memcpy(v20, v17, 0x220uLL);
  v20[35] = *(_OWORD *)&v17[560];
  *(_QWORD *)((char *)&v20[36] + 4) = *(_QWORD *)&v17[580];
  HIDWORD(v20[36]) = v18;
  *(_QWORD *)&v20[34] = aData;
  *((_QWORD *)&v20[34] + 1) = 4LL;
  LODWORD(v20[36]) = 100;
  v9 = *((_QWORD *)&v20[7] + 1);
  if ( *((_QWORD *)&v20[7] + 1) == *((_QWORD *)&v20[6] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v20[6] + 8);
  v10 = *(_QWORD *)&v20[7];
  v11 = 16 * v9;
  *(_QWORD *)(*(_QWORD *)&v20[7] + v11) = aFileSystem;
  *(_QWORD *)(v10 + v11 + 8) = 11LL;
  *((_QWORD *)&v20[7] + 1) = v9 + 1;
  memcpy(v22, v20, sizeof(v22));
  *(_QWORD *)v17 = 0LL;
  *(_QWORD *)&v17[8] = 1LL;
  *(_QWORD *)&v17[16] = 0LL;
  alloc::string::String::push_str(v17, aSyncOnlyFileDa, 54LL);
  v12 = *(_QWORD *)v17;
  *(_OWORD *)v24 = *(_OWORD *)&v17[8];
  if ( *(_QWORD *)v17 != 0x8000000000000000LL )
    v14 = *(_OWORD *)v24;
  if ( *((_QWORD *)&v22[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v22[27] + 8, aSyncOnlyFileDa);
  *((_QWORD *)&v22[27] + 1) = v12;
  v22[28] = v14;
  memcpy(v17, v22, sizeof(v17));
  *(_WORD *)((char *)&v18 + 1) = *(_WORD *)((char *)&v22[36] + 13);
  HIBYTE(v18) = HIBYTE(v22[36]);
  LOBYTE(v18) = 2;
  clap_builder::builder::command::Command::arg_internal(v28, v17);
  memcpy(v27, v28, sizeof(v27));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v24);
  *(_QWORD *)&v24[528] = aFiles;
  *(_QWORD *)&v24[536] = 5LL;
  memcpy(v17, v24, sizeof(v17));
  LOWORD(v18) = 513;
  HIWORD(v18) = v25;
  clap_builder::builder::command::Command::arg_internal(v27, v17);
  memcpy(dest, v27, 0x2C8uLL);
  return dest;
}
