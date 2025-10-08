__int64 fuel_core_keygen::wait_for_keypress()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rax
  char v4; // [rsp+Fh] [rbp-9h] BYREF
  __int64 v5; // [rsp+10h] [rbp-8h] BYREF

  v4 = 0;
  v0 = crossterm::terminal::enable_raw_mode();
  core::result::Result<T,E>::expect(v0, aEnableRawModeF, 22LL, &off_144328);
  v5 = std::io::stdio::stdin();
  v1 = <std::io::stdio::Stdin as std::io::Read>::read_exact(&v5, &v4, 1LL);
  core::result::Result<T,E>::unwrap(v1);
  v2 = crossterm::terminal::disable_raw_mode();
  return core::result::Result<T,E>::expect(v2, aDisableRawMode, 23LL, &off_144358);
}