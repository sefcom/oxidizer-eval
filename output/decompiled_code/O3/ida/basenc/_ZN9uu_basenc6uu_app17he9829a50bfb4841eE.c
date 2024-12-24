void *__fastcall uu_basenc::uu_app(void *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  _QWORD v4[2]; // [rsp+8h] [rbp-CC0h] BYREF
  _BYTE src[712]; // [rsp+18h] [rbp-CB0h] BYREF
  _BYTE v6[592]; // [rsp+2E0h] [rbp-9E8h] BYREF
  _BYTE v7[592]; // [rsp+530h] [rbp-798h] BYREF
  _BYTE v8[592]; // [rsp+780h] [rbp-548h] BYREF
  _BYTE dest[760]; // [rsp+9D0h] [rbp-2F8h] BYREF

  uu_base32::base_common::base_app(src, aEncodeDecodeDa, 297LL, aOptionFile, 21LL);
  v4[0] = &off_14FEC0;
  v4[1] = &off_150000;
  v1 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v4);
  if ( v1 )
  {
    v2 = (_QWORD *)v1;
    do
    {
      clap_builder::builder::arg::Arg::new(dest, *v2, v2[1]);
      clap_builder::builder::arg::Arg::long(v7, dest);
      clap_builder::builder::arg::Arg::help(dest, v7);
      clap_builder::builder::arg::Arg::action(v6, dest);
      <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v8);
      memcpy(dest, src, 0x2C8uLL);
      clap_builder::builder::command::Command::arg(src, dest);
      v2 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v4);
    }
    while ( v2 );
  }
  memcpy(a1, src, 0x2C8uLL);
  return a1;
}
