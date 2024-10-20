__int64 uu_more::setup_term()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v3; // [rsp+8h] [rbp-10h] BYREF

  v0 = std::io::stdio::stdout();
  v1 = crossterm::terminal::sys::unix::enable_raw_mode();
  if ( v1 )
  {
    v3 = v1;
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v3, &off_1487D8, &off_148968);
  }
  return v0;
}
