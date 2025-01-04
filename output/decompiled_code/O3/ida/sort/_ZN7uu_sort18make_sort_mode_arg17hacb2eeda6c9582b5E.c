void *__fastcall uu_sort::make_sort_mode_arg(void *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD v9[74]; // [rsp+18h] [rbp-720h] BYREF
  _BYTE src[592]; // [rsp+268h] [rbp-4D0h] BYREF
  _BYTE dest[640]; // [rsp+4B8h] [rbp-280h] BYREF

  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v9, dest, a4);
  clap_builder::builder::arg::Arg::long(dest, v9);
  clap_builder::builder::arg::Arg::help(v9, dest);
  clap_builder::builder::arg::Arg::action(src, v9, 2LL);
  v9[0] = &off_1FFBF8;
  v9[1] = &off_1FFC58;
  v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v9);
  if ( v6 )
  {
    v7 = (_QWORD *)v6;
    do
    {
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v7, v7[1], a2, a3) )
      {
        memcpy(dest, src, 0x250uLL);
        clap_builder::builder::arg::Arg::conflicts_with(src, dest);
      }
      v7 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v9);
    }
    while ( v7 );
  }
  return memcpy(a1, src, 0x250uLL);
}
