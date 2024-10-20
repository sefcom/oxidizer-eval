char *__fastcall uu_yes::uu_app(char *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  int v5; // ebp
  __int64 v7; // [rsp+8h] [rbp-1000h] BYREF
  __int128 v8; // [rsp+10h] [rbp-FF8h]
  _OWORD v9[37]; // [rsp+20h] [rbp-FE8h] BYREF
  _QWORD v10[74]; // [rsp+270h] [rbp-D98h] BYREF
  _QWORD v11[89]; // [rsp+4C0h] [rbp-B48h] BYREF
  _DWORD v12[178]; // [rsp+788h] [rbp-880h] BYREF
  _QWORD src[89]; // [rsp+A50h] [rbp-5B8h] BYREF
  _BYTE desta[752]; // [rsp+D18h] [rbp-2F0h] BYREF

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
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v11[58], aString_0);
  v11[58] = v4;
  *(_OWORD *)&v11[59] = v9[0];
  memcpy(v12, v11, sizeof(v12));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[33] = aString_1;
  *((_QWORD *)&v9[33] + 1) = 6LL;
  memcpy(v10, v9, sizeof(v10));
  if ( v10[10] >= 4uLL && v10[10] != 5LL )
  {
    if ( *(_QWORD *)v10[12] )
      (*(void (__fastcall **)(_QWORD))v10[12])(v10[11]);
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v10[11]);
  }
  v10[10] = 2LL;
  memcpy(v9, v10, 0x24CuLL);
  *(_WORD *)((char *)&v9[36] + 13) = *(_WORD *)((char *)&v10[73] + 5);
  HIBYTE(v9[36]) = HIBYTE(v10[73]);
  BYTE12(v9[36]) = 1;
  clap_builder::builder::command::Command::arg_internal(v12, v9);
  v5 = v12[177];
  memcpy(dest, v12, 0x2BCuLL);
  *(_QWORD *)(dest + 700) = *(_QWORD *)&v12[175] | 0x8000000080LL;
  *((_DWORD *)dest + 177) = v5;
  return dest;
}
