void *__fastcall uu_basename::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v18; // [rsp+8h] [rbp-2640h] BYREF
  __int128 v19; // [rsp+10h] [rbp-2638h]
  _OWORD v20[37]; // [rsp+20h] [rbp-2628h] BYREF
  _BYTE v21[588]; // [rsp+270h] [rbp-23D8h] BYREF
  int v22; // [rsp+4BCh] [rbp-218Ch]
  _BYTE v23[588]; // [rsp+4C8h] [rbp-2180h] BYREF
  int v24; // [rsp+714h] [rbp-1F34h]
  _BYTE v25[588]; // [rsp+718h] [rbp-1F30h] BYREF
  int v26; // [rsp+964h] [rbp-1CE4h]
  _QWORD v27[74]; // [rsp+968h] [rbp-1CE0h] BYREF
  _QWORD v28[74]; // [rsp+BB8h] [rbp-1A90h] BYREF
  _DWORD v29[178]; // [rsp+E08h] [rbp-1840h] BYREF
  _OWORD v30[37]; // [rsp+10D0h] [rbp-1578h] BYREF
  _QWORD v31[74]; // [rsp+1320h] [rbp-1328h] BYREF
  _QWORD v32[89]; // [rsp+1570h] [rbp-10D8h] BYREF
  _BYTE v33[712]; // [rsp+1838h] [rbp-E10h] BYREF
  _BYTE v34[712]; // [rsp+1B00h] [rbp-B48h] BYREF
  _BYTE v35[712]; // [rsp+1DC8h] [rbp-880h] BYREF
  _QWORD src[89]; // [rsp+2090h] [rbp-5B8h] BYREF
  _BYTE desta[752]; // [rsp+2358h] [rbp-2F0h] BYREF

  v32[22] = 0LL;
  *(_QWORD *)&v23[344] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v29, desta);
  uucore::format_usage((unsigned int)&v18);
  v4 = v18;
  if ( v18 != 0x8000000000000000LL )
    v20[0] = v19;
  if ( *(_QWORD *)&v29[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29[116], aZNameSuffixOpt);
  *(_QWORD *)&v29[116] = v4;
  *(_OWORD *)&v29[118] = v20[0];
  memcpy(v32, v29, 0x2BCuLL);
  *(_QWORD *)((char *)&v32[87] + 4) = *(_QWORD *)&v29[175] | 0x8000000080LL;
  HIDWORD(v32[88]) = v29[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v20);
  *(_QWORD *)&v20[33] = aMultiple;
  *((_QWORD *)&v20[33] + 1) = 8LL;
  memcpy(v23, v20, 0x220uLL);
  *(_OWORD *)&v23[560] = v20[35];
  *(_QWORD *)&v23[580] = *(_QWORD *)((char *)&v20[36] + 4);
  v24 = HIDWORD(v20[36]);
  *(_QWORD *)&v23[544] = aMultiple;
  *(_QWORD *)&v23[552] = 8LL;
  *(_DWORD *)&v23[576] = 97;
  *(_QWORD *)&v20[0] = 0LL;
  *((_QWORD *)&v20[0] + 1) = 1LL;
  *(_QWORD *)&v20[1] = 0LL;
  alloc::string::String::push_str(v20, aSupportMultipl, 51LL);
  v5 = *(_QWORD *)&v20[0];
  *(_OWORD *)v21 = *(_OWORD *)((char *)v20 + 8);
  if ( *(_QWORD *)&v20[0] != 0x8000000000000000LL )
    v20[0] = *(_OWORD *)v21;
  if ( *(_QWORD *)&v23[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v23[440], aSupportMultipl);
  *(_QWORD *)&v23[440] = v5;
  *(_OWORD *)&v23[448] = v20[0];
  memcpy(v27, v23, 0x24CuLL);
  *(_WORD *)((char *)&v27[73] + 5) = *(_WORD *)((char *)&v24 + 1);
  HIBYTE(v27[73]) = HIBYTE(v24);
  BYTE4(v27[73]) = 2;
  v6 = v27[18];
  if ( v27[18] == v27[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v27[16]);
  v7 = v27[17];
  v8 = 16 * v6;
  *(_QWORD *)(v27[17] + v8) = aMultiple;
  *(_QWORD *)(v7 + v8 + 8) = 8LL;
  v27[18] = v6 + 1;
  memcpy(v20, v27, sizeof(v20));
  clap_builder::builder::command::Command::arg_internal(v32, v20);
  memcpy(v35, v32, sizeof(v35));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v21);
  *(_QWORD *)&v21[528] = aName;
  *(_QWORD *)&v21[536] = 4LL;
  memcpy(v20, v21, 0x248uLL);
  DWORD2(v20[36]) = *(_DWORD *)&v21[584] | 0x204;
  HIDWORD(v20[36]) = (HIWORD(v22) << 16) | 0x201;
  clap_builder::builder::command::Command::arg_internal(v35, v20);
  memcpy(v34, v35, sizeof(v34));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v21);
  *(_QWORD *)&v21[528] = aSuffix;
  *(_QWORD *)&v21[536] = 6LL;
  memcpy(v20, v21, 0x220uLL);
  v20[35] = *(_OWORD *)&v21[560];
  *(_QWORD *)((char *)&v20[36] + 4) = *(_QWORD *)&v21[580];
  HIDWORD(v20[36]) = v22;
  *(_QWORD *)&v20[34] = aSuffix;
  *((_QWORD *)&v20[34] + 1) = 6LL;
  LODWORD(v20[36]) = 115;
  *(_QWORD *)v21 = aSuffix_0;
  *(_QWORD *)&v21[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v30, v20);
  *(_QWORD *)&v20[0] = 0LL;
  *((_QWORD *)&v20[0] + 1) = 1LL;
  *(_QWORD *)&v20[1] = 0LL;
  alloc::string::String::push_str(v20, aRemoveATrailin, 36LL);
  v9 = *(_QWORD *)&v20[0];
  *(_OWORD *)v21 = *(_OWORD *)((char *)v20 + 8);
  if ( *(_QWORD *)&v20[0] != 0x8000000000000000LL )
    v20[0] = *(_OWORD *)v21;
  if ( *((_QWORD *)&v30[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v30[27] + 8, aRemoveATrailin);
  *((_QWORD *)&v30[27] + 1) = v9;
  v30[28] = v20[0];
  memcpy(v31, v30, sizeof(v31));
  v10 = v31[18];
  if ( v31[18] == v31[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v31[16]);
  v11 = v31[17];
  v12 = 16 * v10;
  *(_QWORD *)(v31[17] + v12) = aSuffix;
  *(_QWORD *)(v11 + v12 + 8) = 6LL;
  v31[18] = v10 + 1;
  memcpy(v20, v31, sizeof(v20));
  clap_builder::builder::command::Command::arg_internal(v34, v20);
  memcpy(v33, v34, sizeof(v33));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v20);
  *(_QWORD *)&v20[33] = aZero_0;
  *((_QWORD *)&v20[33] + 1) = 4LL;
  memcpy(v25, v20, 0x220uLL);
  *(_OWORD *)&v25[560] = v20[35];
  *(_QWORD *)&v25[580] = *(_QWORD *)((char *)&v20[36] + 4);
  v26 = HIDWORD(v20[36]);
  *(_QWORD *)&v25[544] = aZero_0;
  *(_QWORD *)&v25[552] = 4LL;
  *(_DWORD *)&v25[576] = 122;
  *(_QWORD *)&v20[0] = 0LL;
  *((_QWORD *)&v20[0] + 1) = 1LL;
  *(_QWORD *)&v20[1] = 0LL;
  alloc::string::String::push_str(v20, aEndEachOutputL, 42LL);
  v13 = *(_QWORD *)&v20[0];
  *(_OWORD *)v21 = *(_OWORD *)((char *)v20 + 8);
  if ( *(_QWORD *)&v20[0] != 0x8000000000000000LL )
    v20[0] = *(_OWORD *)v21;
  if ( *(_QWORD *)&v25[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v25[440], aEndEachOutputL);
  *(_QWORD *)&v25[440] = v13;
  *(_OWORD *)&v25[448] = v20[0];
  memcpy(v28, v25, 0x24CuLL);
  *(_WORD *)((char *)&v28[73] + 5) = *(_WORD *)((char *)&v26 + 1);
  HIBYTE(v28[73]) = HIBYTE(v26);
  BYTE4(v28[73]) = 2;
  v14 = v28[18];
  if ( v28[18] == v28[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v28[16]);
  v15 = v28[17];
  v16 = 16 * v14;
  *(_QWORD *)(v28[17] + v16) = aZero_0;
  *(_QWORD *)(v15 + v16 + 8) = 4LL;
  v28[18] = v14 + 1;
  memcpy(v20, v28, sizeof(v20));
  clap_builder::builder::command::Command::arg_internal(v33, v20);
  memcpy(dest, v33, 0x2C8uLL);
  return dest;
}
