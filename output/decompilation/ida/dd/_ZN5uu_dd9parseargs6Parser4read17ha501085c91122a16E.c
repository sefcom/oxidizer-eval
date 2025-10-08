void *__fastcall uu_dd::parseargs::Parser::read(char *dest, void *src, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm0
  _OWORD v8[2]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v9[104]; // [rsp+20h] [rbp-68h] BYREF

  <I as core::iter::traits::collect::IntoIterator>::into_iter(v9, a3);
  while ( 1 )
  {
    v3 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v9);
    if ( !v3 )
      break;
    v4 = <&T as core::convert::AsRef<U>>::as_ref(v3);
    uu_dd::parseargs::Parser::parse_operand(v8, src, v4, v5);
    if ( LODWORD(v8[0]) != 14 )
    {
      v6 = v8[0];
      *(_OWORD *)(dest + 24) = v8[1];
      *(_OWORD *)(dest + 8) = v6;
      *(_QWORD *)dest = 2LL;
      return (void *)core::ptr::drop_in_place<uu_dd::parseargs::Parser>(src);
    }
  }
  return memcpy(dest, src, 0xD8uLL);
}