char *__fastcall uu_whoami::uu_app(char *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  int v5; // ebp
  __int128 v7; // [rsp+0h] [rbp-8A8h]
  __int64 v8; // [rsp+10h] [rbp-898h] BYREF
  __int128 v9; // [rsp+18h] [rbp-890h]
  _DWORD v10[178]; // [rsp+28h] [rbp-880h] BYREF
  _QWORD src[89]; // [rsp+2F0h] [rbp-5B8h] BYREF
  _BYTE desta[752]; // [rsp+5B8h] [rbp-2F0h] BYREF

  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v10, desta);
  uucore::format_usage((unsigned int)&v8);
  v4 = v8;
  if ( v8 != 0x8000000000000000LL )
    v7 = v9;
  if ( *(_QWORD *)&v10[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v10[116], asc_1D7B7);
  *(_QWORD *)&v10[116] = v4;
  *(_OWORD *)&v10[118] = v7;
  v5 = v10[177];
  memcpy(dest, v10, 0x2BCuLL);
  *(_QWORD *)(dest + 700) = *(_QWORD *)&v10[175] | 0x8000000080LL;
  *((_DWORD *)dest + 177) = v5;
  return dest;
}
