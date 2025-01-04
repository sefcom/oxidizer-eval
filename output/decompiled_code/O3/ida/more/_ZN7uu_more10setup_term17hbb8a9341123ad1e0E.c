__int64 uu_more::setup_term()
{
  __int64 v0; // rbx
  __int64 v1; // rax

  v0 = std::io::stdio::stdout();
  v1 = crossterm::terminal::enable_raw_mode();
  core::result::Result<T,E>::unwrap(v1, &off_162920);
  return v0;
}
