void *__fastcall uu_test::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int128 v6; // [rsp+0h] [rbp-B68h]
  __int64 v7; // [rsp+10h] [rbp-B58h] BYREF
  __int128 v8; // [rsp+18h] [rbp-B50h]
  _QWORD v9[89]; // [rsp+28h] [rbp-B40h] BYREF
  _QWORD src[89]; // [rsp+2F0h] [rbp-878h] BYREF
  _BYTE v11[712]; // [rsp+5B8h] [rbp-5B0h] BYREF
  _BYTE desta[744]; // [rsp+880h] [rbp-2E8h] BYREF

  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v9, desta);
  uucore::format_usage((unsigned int)&v7);
  v4 = v7;
  if ( v7 != 0x8000000000000000LL )
    v6 = v8;
  if ( v9[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v9[58], aTestExpression);
  v9[58] = v4;
  *(_OWORD *)&v9[59] = v6;
  memcpy(v11, v9, sizeof(v11));
  clap_builder::builder::command::Command::after_help(dest, v11);
  return dest;
}
