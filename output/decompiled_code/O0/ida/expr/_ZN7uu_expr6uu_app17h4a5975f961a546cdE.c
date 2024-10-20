void *__fastcall uu_expr::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v7; // [rsp+8h] [rbp-2190h] BYREF
  __int128 v8; // [rsp+10h] [rbp-2188h]
  _OWORD v9[37]; // [rsp+20h] [rbp-2178h] BYREF
  _QWORD v10[89]; // [rsp+270h] [rbp-1F28h] BYREF
  _QWORD v11[89]; // [rsp+538h] [rbp-1C60h] BYREF
  _BYTE v12[584]; // [rsp+800h] [rbp-1998h] BYREF
  int v13; // [rsp+A48h] [rbp-1750h]
  int v14; // [rsp+A4Ch] [rbp-174Ch]
  _DWORD v15[178]; // [rsp+A50h] [rbp-1748h] BYREF
  _BYTE v16[544]; // [rsp+D18h] [rbp-1480h] BYREF
  const char *v17; // [rsp+F38h] [rbp-1260h]
  __int64 v18; // [rsp+F40h] [rbp-1258h]
  __int128 v19; // [rsp+F48h] [rbp-1250h]
  __int128 v20; // [rsp+F58h] [rbp-1240h]
  _QWORD v21[70]; // [rsp+F68h] [rbp-1230h] BYREF
  __int128 v22; // [rsp+1198h] [rbp-1000h]
  __int128 v23; // [rsp+11A8h] [rbp-FF0h]
  _BYTE v24[712]; // [rsp+11B8h] [rbp-FE0h] BYREF
  _BYTE v25[712]; // [rsp+1480h] [rbp-D18h] BYREF
  _BYTE v26[592]; // [rsp+1748h] [rbp-A50h] BYREF
  _BYTE v27[592]; // [rsp+1998h] [rbp-800h] BYREF
  _QWORD src[89]; // [rsp+1BE8h] [rbp-5B0h] BYREF
  _BYTE desta[744]; // [rsp+1EB0h] [rbp-2E8h] BYREF

  v21[66] = 0LL;
  *((_QWORD *)&v9[21] + 1) = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v11, desta);
  uucore::format_usage((unsigned int)&v7);
  v4 = v7;
  if ( v7 != 0x8000000000000000LL )
    v9[0] = v8;
  if ( v11[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v11[58], aExpressionOpti);
  v11[58] = v4;
  *(_OWORD *)&v11[59] = v9[0];
  memcpy(v10, v11, sizeof(v10));
  *(_QWORD *)&v9[0] = 0LL;
  *((_QWORD *)&v9[0] + 1) = 1LL;
  *(_QWORD *)&v9[1] = 0LL;
  core::slice::raw::from_raw_parts::precondition_check(aPrintTheValueO_0, 1LL, 1LL, 1919LL);
  alloc::vec::Vec<T,A>::append_elements(v9, aPrintTheValueO_0, 1919LL);
  v5 = *(_QWORD *)&v9[0];
  *(_OWORD *)v12 = *(_OWORD *)((char *)v9 + 8);
  if ( *(_QWORD *)&v9[0] != 0x8000000000000000LL )
    v9[0] = *(_OWORD *)v12;
  if ( v10[52] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v10[52], aPrintTheValueO_0);
  v10[52] = v5;
  *(_OWORD *)&v10[53] = v9[0];
  memcpy(v15, v10, 0x2BCuLL);
  *(_QWORD *)&v15[175] = *(_QWORD *)((char *)&v10[87] + 4) | 0x14008000140080LL;
  v15[177] = HIDWORD(v10[88]);
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[33] = aVersion;
  *((_QWORD *)&v9[33] + 1) = 7LL;
  memcpy(v16, v9, sizeof(v16));
  v19 = v9[35];
  v20 = v9[36];
  v17 = aVersion;
  v18 = 7LL;
  clap_builder::builder::arg::Arg::help(v26, v16);
  v26[588] = 8;
  memcpy(v9, v26, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v15, v9);
  memcpy(v25, v15, sizeof(v25));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[33] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *((_QWORD *)&v9[33] + 1) = 4LL;
  memcpy(v21, v9, 0x220uLL);
  v22 = v9[35];
  v23 = v9[36];
  v21[68] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  v21[69] = 4LL;
  clap_builder::builder::arg::Arg::help(v27, v21);
  v27[588] = 5;
  memcpy(v9, v27, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v25, v9);
  memcpy(v24, v25, sizeof(v24));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[528] = aExpression_0;
  *(_QWORD *)&v12[536] = 10LL;
  memcpy(v9, v12, 0x248uLL);
  DWORD2(v9[36]) = v13 | 0x20;
  HIDWORD(v9[36]) = v14 & 0xFFFFFF00 | 1;
  clap_builder::builder::command::Command::arg_internal(v24, v9);
  memcpy(dest, v24, 0x2C8uLL);
  return dest;
}
