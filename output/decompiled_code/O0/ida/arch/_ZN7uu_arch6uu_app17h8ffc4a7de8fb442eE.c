char *__fastcall uu_arch::uu_app(char *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  int v5; // ebp
  _BYTE v7[24]; // [rsp+0h] [rbp-8B8h] BYREF
  __int128 v8; // [rsp+20h] [rbp-898h]
  _DWORD v9[178]; // [rsp+38h] [rbp-880h] BYREF
  _QWORD src[89]; // [rsp+300h] [rbp-5B8h] BYREF
  _BYTE desta[752]; // [rsp+5C8h] [rbp-2F0h] BYREF

  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v9, desta);
  *(_QWORD *)v7 = 0LL;
  *(_QWORD *)&v7[8] = 1LL;
  *(_QWORD *)&v7[16] = 0LL;
  core::slice::raw::from_raw_parts::precondition_check(aDetermineArchi, 1LL, 1LL, 48LL);
  alloc::vec::Vec<T,A>::append_elements(v7, aDetermineArchi, 48LL);
  v4 = *(_QWORD *)v7;
  v8 = *(_OWORD *)&v7[8];
  if ( *(_QWORD *)v7 != 0x8000000000000000LL )
    *(_OWORD *)v7 = v8;
  if ( *(_QWORD *)&v9[104] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v9[104]);
  *(_QWORD *)&v9[104] = v4;
  *(_OWORD *)&v9[106] = *(_OWORD *)v7;
  v5 = v9[177];
  memcpy(dest, v9, 0x2BCuLL);
  *(_QWORD *)(dest + 700) = *(_QWORD *)&v9[175] | 0x8000000080LL;
  *((_DWORD *)dest + 177) = v5;
  return dest;
}
