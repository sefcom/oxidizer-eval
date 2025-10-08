__int64 rg::flags::defs::convert::u64()
{
  __int64 v1[2]; // [rsp+0h] [rbp-28h] BYREF
  _BYTE v2[24]; // [rsp+10h] [rbp-18h] BYREF

  rg::flags::defs::convert::str(v1);
  if ( !v1[0] )
    return 1LL;
  core::num::<impl u64>::from_ascii_radix(v2, v1[0], v1[1]);
  return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(v2);
}