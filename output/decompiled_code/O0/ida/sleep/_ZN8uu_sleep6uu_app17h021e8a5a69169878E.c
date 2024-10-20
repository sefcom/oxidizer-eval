void *__fastcall uu_sleep::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r15
  __int64 v5; // r15
  __int64 v7; // [rsp+18h] [rbp-1760h] BYREF
  __int128 v8; // [rsp+20h] [rbp-1758h]
  _OWORD v9[37]; // [rsp+30h] [rbp-1748h] BYREF
  _QWORD v10[89]; // [rsp+280h] [rbp-14F8h] BYREF
  _QWORD v11[89]; // [rsp+548h] [rbp-1230h] BYREF
  _DWORD v12[178]; // [rsp+810h] [rbp-F68h] BYREF
  _BYTE v13[592]; // [rsp+AD8h] [rbp-CA0h] BYREF
  _QWORD src[89]; // [rsp+D28h] [rbp-A50h] BYREF
  _BYTE v15[592]; // [rsp+FF0h] [rbp-788h] BYREF
  _BYTE v16[592]; // [rsp+1240h] [rbp-538h] BYREF
  _BYTE desta[744]; // [rsp+1490h] [rbp-2E8h] BYREF

  v11[66] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v11, desta);
  *(_QWORD *)&v9[0] = 0LL;
  *((_QWORD *)&v9[0] + 1) = 1LL;
  *(_QWORD *)&v9[1] = 0LL;
  core::slice::raw::from_raw_parts::precondition_check(&unk_1E63F, 1LL, 1LL, 335LL);
  alloc::vec::Vec<T,A>::append_elements(v9, &unk_1E63F, 335LL);
  v4 = *(_QWORD *)&v9[0];
  if ( *(_QWORD *)&v9[0] != 0x8000000000000000LL )
    v9[0] = *(_OWORD *)((char *)v9 + 8);
  if ( v11[52] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v11[52]);
  v11[52] = v4;
  *(_OWORD *)&v11[53] = v9[0];
  memcpy(v10, v11, sizeof(v10));
  uucore::format_usage((unsigned int)&v7);
  v5 = v7;
  if ( v7 != 0x8000000000000000LL )
    v9[0] = v8;
  if ( v10[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v10[58]);
  v10[58] = v5;
  *(_OWORD *)&v10[59] = v9[0];
  memcpy(v12, v10, 0x2BCuLL);
  *(_QWORD *)&v12[175] = *(_QWORD *)((char *)&v10[87] + 4) | 0x8000000080LL;
  v12[177] = HIDWORD(v10[88]);
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[33] = aNumber_0;
  *((_QWORD *)&v9[33] + 1) = 6LL;
  memcpy(v16, v9, sizeof(v16));
  clap_builder::builder::arg::Arg::help(v15, v16);
  memcpy(v9, v15, sizeof(v9));
  clap_builder::builder::arg::Arg::value_names(v13, v9);
  v13[588] = 1;
  memcpy(v9, v13, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v12, v9);
  memcpy(dest, v12, 0x2C8uLL);
  return dest;
}
