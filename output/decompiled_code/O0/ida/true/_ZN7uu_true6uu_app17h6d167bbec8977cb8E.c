void *__fastcall uu_true::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // r14
  __int128 v8; // [rsp+0h] [rbp-1528h]
  _BYTE v9[592]; // [rsp+20h] [rbp-1508h] BYREF
  _BYTE v10[592]; // [rsp+270h] [rbp-12B8h] BYREF
  _BYTE v11[592]; // [rsp+4C0h] [rbp-1068h] BYREF
  _DWORD v12[178]; // [rsp+710h] [rbp-E18h] BYREF
  _BYTE v13[700]; // [rsp+9D8h] [rbp-B50h] BYREF
  int v14; // [rsp+C94h] [rbp-894h]
  int v15; // [rsp+C98h] [rbp-890h]
  int v16; // [rsp+C9Ch] [rbp-88Ch]
  _BYTE v17[712]; // [rsp+CA0h] [rbp-888h] BYREF
  _QWORD src[89]; // [rsp+F68h] [rbp-5C0h] BYREF
  _BYTE desta[760]; // [rsp+1230h] [rbp-2F8h] BYREF

  *(_QWORD *)&v11[56] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v13, desta);
  v4 = v14;
  LODWORD(v2) = v15;
  v14 |= 0x40000u;
  v15 |= 0x40000u;
  memcpy(v12, v13, 0x2BCuLL);
  v12[175] = v4 | 0x140000;
  v12[176] = v2 | 0x140000;
  v12[177] = v16;
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[528] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *(_QWORD *)&v9[536] = 4LL;
  memcpy(v10, v9, 0x220uLL);
  *(_OWORD *)&v10[560] = *(_OWORD *)&v9[560];
  *(_OWORD *)&v10[576] = *(_OWORD *)&v9[576];
  *(_QWORD *)&v10[544] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *(_QWORD *)&v10[552] = 4LL;
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)&v9[8] = 1LL;
  *(_QWORD *)&v9[16] = 0LL;
  alloc::string::String::push_str(v9, aPrintHelpInfor, 22LL);
  v5 = *(_QWORD *)v9;
  if ( *(_QWORD *)v9 != 0x8000000000000000LL )
    v8 = *(_OWORD *)&v9[8];
  if ( *(_QWORD *)&v10[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v10[440]);
  *(_QWORD *)&v10[440] = v5;
  *(_OWORD *)&v10[448] = v8;
  memcpy(v9, v10, 0x24CuLL);
  *(_WORD *)&v9[589] = *(_WORD *)&v10[589];
  v9[591] = v10[591];
  v9[588] = 5;
  clap_builder::builder::command::Command::arg_internal(v12, v9);
  memcpy(v17, v12, sizeof(v17));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[528] = aVersion;
  *(_QWORD *)&v9[536] = 7LL;
  memcpy(v11, v9, 0x220uLL);
  *(_OWORD *)&v11[560] = *(_OWORD *)&v9[560];
  *(_OWORD *)&v11[576] = *(_OWORD *)&v9[576];
  *(_QWORD *)&v11[544] = aVersion;
  *(_QWORD *)&v11[552] = 7LL;
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)&v9[8] = 1LL;
  *(_QWORD *)&v9[16] = 0LL;
  alloc::string::String::push_str(v9, aPrintVersionIn, 25LL);
  v6 = *(_QWORD *)v9;
  if ( *(_QWORD *)v9 != 0x8000000000000000LL )
    v8 = *(_OWORD *)&v9[8];
  if ( *(_QWORD *)&v11[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v11[440]);
  *(_QWORD *)&v11[440] = v6;
  *(_OWORD *)&v11[448] = v8;
  memcpy(v9, v11, 0x24CuLL);
  *(_WORD *)&v9[589] = *(_WORD *)&v11[589];
  v9[591] = v11[591];
  v9[588] = 8;
  clap_builder::builder::command::Command::arg_internal(v17, v9);
  memcpy(dest, v17, 0x2C8uLL);
  return dest;
}
