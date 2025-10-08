__int64 __fastcall fd::exec::CommandSet::new_batch(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  _QWORD v3[3]; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v4[24]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v5[48]; // [rsp+38h] [rbp-30h] BYREF

  <clap_builder::builder::value_parser::ValueParser as core::convert::From<clap_builder::builder::value_parser::_AnonymousValueParser>>::from(v5);
  <clap_builder::builder::value_parser::ValueParser as core::convert::From<clap_builder::builder::value_parser::_AnonymousValueParser>>::from(v4);
  core::iter::traits::iterator::Iterator::collect(v3, v4);
  result = v3[0];
  v2 = v3[1];
  if ( !__OFSUB__(-v3[0], 1LL) )
  {
    *(_QWORD *)(a1 + 16) = v3[2];
    *(_BYTE *)(a1 + 24) = 1;
  }
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)a1 = result;
  return result;
}