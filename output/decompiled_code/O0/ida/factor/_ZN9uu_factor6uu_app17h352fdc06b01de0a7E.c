void *__fastcall uu_factor::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int128 v8; // [rsp+0h] [rbp-1A48h]
  __int64 v9; // [rsp+18h] [rbp-1A30h] BYREF
  __int128 v10; // [rsp+20h] [rbp-1A28h]
  _BYTE v11[592]; // [rsp+30h] [rbp-1A18h] BYREF
  _BYTE v12[588]; // [rsp+280h] [rbp-17C8h] BYREF
  int v13; // [rsp+4CCh] [rbp-157Ch]
  _BYTE v14[592]; // [rsp+4D0h] [rbp-1578h] BYREF
  _BYTE v15[588]; // [rsp+720h] [rbp-1328h] BYREF
  __int16 v16; // [rsp+96Dh] [rbp-10DBh]
  char v17; // [rsp+96Fh] [rbp-10D9h]
  _DWORD v18[178]; // [rsp+978h] [rbp-10D0h] BYREF
  _DWORD v19[178]; // [rsp+C40h] [rbp-E08h] BYREF
  _BYTE v20[712]; // [rsp+F08h] [rbp-B40h] BYREF
  _BYTE v21[712]; // [rsp+11D0h] [rbp-878h] BYREF
  _QWORD src[89]; // [rsp+1498h] [rbp-5B0h] BYREF
  _BYTE desta[744]; // [rsp+1760h] [rbp-2E8h] BYREF

  *(_QWORD *)&v18[44] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v18, desta);
  uucore::format_usage((unsigned int)&v9);
  v4 = v9;
  if ( v9 != 0x8000000000000000LL )
    *(_OWORD *)v11 = v10;
  if ( *(_QWORD *)&v18[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v18[116], aOptionNumber);
  *(_QWORD *)&v18[116] = v4;
  *(_OWORD *)&v18[118] = *(_OWORD *)v11;
  memcpy(v19, v18, 0x2BCuLL);
  *(_QWORD *)&v19[175] = *(_QWORD *)&v18[175] | 0x4008800040088LL;
  v19[177] = v18[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[528] = aNumber;
  *(_QWORD *)&v15[536] = 6LL;
  memcpy(v11, v15, 0x24CuLL);
  *(_WORD *)&v11[589] = v16;
  v11[591] = v17;
  v11[588] = 1;
  clap_builder::builder::command::Command::arg_internal(v19, v11);
  memcpy(v21, v19, sizeof(v21));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v11);
  *(_QWORD *)&v11[528] = aExponents;
  *(_QWORD *)&v11[536] = 9LL;
  memcpy(v12, v11, 0x220uLL);
  *(_OWORD *)&v12[560] = *(_OWORD *)&v11[560];
  *(_QWORD *)&v12[580] = *(_QWORD *)&v11[580];
  v13 = *(_DWORD *)&v11[588];
  *(_QWORD *)&v12[544] = aExponents;
  *(_QWORD *)&v12[552] = 9LL;
  *(_DWORD *)&v12[576] = 104;
  *(_QWORD *)v11 = 0LL;
  *(_QWORD *)&v11[8] = 1LL;
  *(_QWORD *)&v11[16] = 0LL;
  alloc::string::String::push_str(v11, aPrintFactorsIn, 29LL);
  v5 = *(_QWORD *)v11;
  *(_OWORD *)v15 = *(_OWORD *)&v11[8];
  if ( *(_QWORD *)v11 != 0x8000000000000000LL )
    v8 = *(_OWORD *)v15;
  if ( *(_QWORD *)&v12[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v12[440], aPrintFactorsIn);
  *(_QWORD *)&v12[440] = v5;
  *(_OWORD *)&v12[448] = v8;
  memcpy(v11, v12, 0x24CuLL);
  *(_WORD *)&v11[589] = *(_WORD *)((char *)&v13 + 1);
  v11[591] = HIBYTE(v13);
  v11[588] = 2;
  clap_builder::builder::command::Command::arg_internal(v21, v11);
  memcpy(v20, v21, sizeof(v20));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v11);
  *(_QWORD *)&v11[528] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *(_QWORD *)&v11[536] = 4LL;
  memcpy(v14, v11, 0x220uLL);
  *(_OWORD *)&v14[560] = *(_OWORD *)&v11[560];
  *(_OWORD *)&v14[576] = *(_OWORD *)&v11[576];
  *(_QWORD *)&v14[544] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *(_QWORD *)&v14[552] = 4LL;
  *(_QWORD *)v11 = 0LL;
  *(_QWORD *)&v11[8] = 1LL;
  *(_QWORD *)&v11[16] = 0LL;
  alloc::string::String::push_str(v11, aPrintHelpInfor, 23LL);
  v6 = *(_QWORD *)v11;
  *(_OWORD *)v15 = *(_OWORD *)&v11[8];
  if ( *(_QWORD *)v11 != 0x8000000000000000LL )
    v8 = *(_OWORD *)v15;
  if ( *(_QWORD *)&v14[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v14[440], aPrintHelpInfor);
  *(_QWORD *)&v14[440] = v6;
  *(_OWORD *)&v14[448] = v8;
  memcpy(v11, v14, 0x24CuLL);
  *(_WORD *)&v11[589] = *(_WORD *)&v14[589];
  v11[591] = v14[591];
  v11[588] = 5;
  clap_builder::builder::command::Command::arg_internal(v20, v11);
  memcpy(dest, v20, 0x2C8uLL);
  return dest;
}
