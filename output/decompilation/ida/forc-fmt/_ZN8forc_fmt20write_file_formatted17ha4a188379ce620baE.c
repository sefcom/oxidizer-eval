__int64 forc_fmt::write_file_formatted()
{
  __int64 v0; // rax

  v0 = std::fs::write();
  if ( v0 )
    return anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v0);
  else
    return 0LL;
}