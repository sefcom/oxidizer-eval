__int64 rg::flags::defs::convert::human_readable_u64()
{
  __int64 v1[2]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v2[40]; // [rsp+10h] [rbp-28h] BYREF

  rg::flags::defs::convert::str(v1);
  if ( !v1[0] )
    return 1LL;
  grep_cli::human::parse_human_readable_size(v2, v1[0], v1[1]);
  return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(v2);
}