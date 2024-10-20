void *__fastcall uu_printenv::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r15
  __int64 v5; // r15
  __int128 v7; // [rsp+0h] [rbp-1538h]
  __int64 v8; // [rsp+18h] [rbp-1520h] BYREF
  __int128 v9; // [rsp+20h] [rbp-1518h]
  _BYTE v10[588]; // [rsp+30h] [rbp-1508h] BYREF
  int v11; // [rsp+27Ch] [rbp-12BCh]
  _BYTE v12[588]; // [rsp+288h] [rbp-12B0h] BYREF
  int v13; // [rsp+4D4h] [rbp-1064h]
  _DWORD v14[178]; // [rsp+4D8h] [rbp-1060h] BYREF
  __int128 v15; // [rsp+7A0h] [rbp-D98h] BYREF
  _BYTE v16[548]; // [rsp+7C8h] [rbp-D70h] BYREF
  __int16 v17; // [rsp+9EDh] [rbp-B4Bh]
  char v18; // [rsp+9EFh] [rbp-B49h]
  _DWORD v19[178]; // [rsp+9F8h] [rbp-B40h] BYREF
  _BYTE v20[712]; // [rsp+CC0h] [rbp-878h] BYREF
  _QWORD src[89]; // [rsp+F88h] [rbp-5B0h] BYREF
  _BYTE desta[744]; // [rsp+1250h] [rbp-2E8h] BYREF

  *(_QWORD *)&v14[16] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v14, desta);
  uucore::format_usage((unsigned int)&v8);
  v4 = v8;
  if ( v8 != 0x8000000000000000LL )
    *(_OWORD *)v10 = v9;
  if ( *(_QWORD *)&v14[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v14[116], aOptionVariable);
  *(_QWORD *)&v14[116] = v4;
  *(_OWORD *)&v14[118] = *(_OWORD *)v10;
  memcpy(v19, v14, 0x2BCuLL);
  *(_QWORD *)&v19[175] = *(_QWORD *)&v14[175] | 0x8000000080LL;
  v19[177] = v14[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v10);
  *(_QWORD *)&v10[528] = &unk_1671C;
  *(_QWORD *)&v10[536] = 4LL;
  memcpy(v12, v10, 0x220uLL);
  *(_OWORD *)&v12[560] = *(_OWORD *)&v10[560];
  *(_QWORD *)&v12[580] = *(_QWORD *)&v10[580];
  v13 = v11;
  *(_QWORD *)&v12[544] = &unk_1671C;
  *(_QWORD *)&v12[552] = 4LL;
  *(_DWORD *)&v12[576] = 48;
  *(_QWORD *)v10 = 0LL;
  *(_QWORD *)&v10[8] = 1LL;
  *(_QWORD *)&v10[16] = 0LL;
  alloc::string::String::push_str(v10, aEndEachOutputL, 52LL);
  v5 = *(_QWORD *)v10;
  v15 = *(_OWORD *)&v10[8];
  if ( *(_QWORD *)v10 != 0x8000000000000000LL )
    v7 = v15;
  if ( *(_QWORD *)&v12[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v12[440], aEndEachOutputL);
  *(_QWORD *)&v12[440] = v5;
  *(_OWORD *)&v12[448] = v7;
  memcpy(v10, v12, sizeof(v10));
  *(_WORD *)((char *)&v11 + 1) = *(_WORD *)((char *)&v13 + 1);
  HIBYTE(v11) = HIBYTE(v13);
  LOBYTE(v11) = 2;
  clap_builder::builder::command::Command::arg_internal(v19, v10);
  memcpy(v20, v19, sizeof(v20));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(&v15);
  *(_QWORD *)&v16[488] = aVariables;
  *(_QWORD *)&v16[496] = 9LL;
  *(_OWORD *)v10 = v15;
  memcpy(&v10[40], v16, 0x224uLL);
  *(_WORD *)((char *)&v11 + 1) = v17;
  HIBYTE(v11) = v18;
  *(_QWORD *)&v10[16] = 1LL;
  *(_QWORD *)&v10[24] = 1LL;
  *(_QWORD *)&v10[32] = -1LL;
  LOBYTE(v11) = 1;
  clap_builder::builder::command::Command::arg_internal(v20, v10);
  memcpy(dest, v20, 0x2C8uLL);
  return dest;
}
