void *__fastcall uu_dd::parseargs::Parser::read(char *dest, _BYTE *src, __int64 a3, __int64 a4)
{
  __int64 *v4; // rax
  __int128 v6; // xmm0
  _QWORD v7[2]; // [rsp+8h] [rbp-50h] BYREF
  _OWORD v8[4]; // [rsp+18h] [rbp-40h] BYREF

  v7[0] = a3;
  v7[1] = a3 + 16 * a4;
  v4 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v7);
  if ( !v4 )
    return memcpy(dest, src, 0xD8uLL);
  while ( 1 )
  {
    uu_dd::parseargs::Parser::parse_operand((__int64)v8, src, *v4, v4[1]);
    if ( LODWORD(v8[0]) != 14 )
      break;
    v4 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v7);
    if ( !v4 )
      return memcpy(dest, src, 0xD8uLL);
  }
  v6 = v8[0];
  *(_OWORD *)(dest + 24) = v8[1];
  *(_OWORD *)(dest + 8) = v6;
  *(_QWORD *)dest = 2LL;
  return (void *)core::ptr::drop_in_place<uu_dd::parseargs::Parser>(src);
}
