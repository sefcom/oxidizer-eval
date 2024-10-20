void *__fastcall uu_link::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v6; // [rsp+8h] [rbp-1000h] BYREF
  __int128 v7; // [rsp+10h] [rbp-FF8h]
  _OWORD v8[37]; // [rsp+20h] [rbp-FE8h] BYREF
  _OWORD v9[37]; // [rsp+270h] [rbp-D98h] BYREF
  _DWORD v10[178]; // [rsp+4C8h] [rbp-B40h] BYREF
  _DWORD v11[178]; // [rsp+790h] [rbp-878h] BYREF
  _QWORD src[89]; // [rsp+A58h] [rbp-5B0h] BYREF
  _BYTE desta[744]; // [rsp+D20h] [rbp-2E8h] BYREF

  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v10, desta);
  uucore::format_usage((unsigned int)&v6);
  v4 = v6;
  if ( v6 != 0x8000000000000000LL )
    v9[0] = v7;
  if ( *(_QWORD *)&v10[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v10[116], aFile1File2);
  *(_QWORD *)&v10[116] = v4;
  *(_OWORD *)&v10[118] = v9[0];
  memcpy(v11, v10, 0x2BCuLL);
  *(_QWORD *)&v11[175] = *(_QWORD *)&v10[175] | 0x8000000080LL;
  v11[177] = v10[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[33] = aFiles;
  *((_QWORD *)&v9[33] + 1) = 5LL;
  v8[0] = v9[0];
  memcpy((char *)&v8[2] + 8, (char *)&v9[2] + 8, 0x220uLL);
  *(_QWORD *)&v8[1] = 1LL;
  *((_QWORD *)&v8[1] + 1) = 2LL;
  *(_QWORD *)&v8[2] = 2LL;
  DWORD2(v8[36]) = DWORD2(v9[36]) | 5;
  BYTE12(v8[36]) = BYTE12(v9[36]);
  BYTE13(v8[36]) = 2;
  HIWORD(v8[36]) = HIWORD(v9[36]);
  if ( *(_QWORD *)&v8[5] >= 4uLL && *(_QWORD *)&v8[5] != 5LL )
  {
    if ( **(_QWORD **)&v8[6] )
      (**(void (__fastcall ***)(_QWORD))&v8[6])(*((_QWORD *)&v8[5] + 1));
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop((char *)&v8[5] + 8);
  }
  *(_QWORD *)&v8[5] = 2LL;
  memcpy(v9, v8, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v11, v9);
  memcpy(dest, v11, 0x2C8uLL);
  return dest;
}
