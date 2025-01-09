void *__fastcall uu_hashsum::uu_app_custom(void *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  _QWORD v4[2]; // [rsp+10h] [rbp-AE8h] BYREF
  _BYTE src[712]; // [rsp+20h] [rbp-AD8h] BYREF
  _BYTE dest[712]; // [rsp+2E8h] [rbp-810h] BYREF
  _BYTE v7[712]; // [rsp+5B0h] [rbp-548h] BYREF
  _BYTE v8[640]; // [rsp+878h] [rbp-280h] BYREF

  uu_hashsum::uu_app_common(dest);
  uu_hashsum::uu_app_opt_bits(v7, dest);
  uu_hashsum::uu_app_b3sum_opts(src, v7);
  v4[0] = &off_33ECD0;
  v4[1] = &unk_33EEB0;
  v1 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v4);
  if ( v1 )
  {
    v2 = (_QWORD *)v1;
    do
    {
      memcpy(dest, src, sizeof(dest));
      clap_builder::builder::arg::Arg::new(v7, *v2, v2[1]);
      clap_builder::builder::arg::Arg::long(v8, v7);
      clap_builder::builder::arg::Arg::help(v7, v8);
      clap_builder::builder::arg::Arg::action(v8, v7, 2LL);
      clap_builder::builder::command::Command::arg(src, dest);
      v2 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v4);
    }
    while ( v2 );
  }
  memcpy(a1, src, 0x2C8uLL);
  return a1;
}
