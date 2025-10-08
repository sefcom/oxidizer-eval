__int64 __fastcall uu_more::reset_term(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+18h] [rbp-20h]

  v1 = crossterm::terminal::disable_raw_mode();
  core::result::Result<T,E>::unwrap(v1, &off_125318);
  v2 = crossterm::command::write_command_ansi(a1);
  core::result::Result<T,E>::unwrap(v2, &off_125330);
  v5[0] = &off_125308;
  v5[1] = 1LL;
  v5[2] = 8LL;
  v6 = 0LL;
  ((void (__fastcall *)(_QWORD *))std::io::stdio::_print)(v5);
  v3 = <std::io::stdio::Stdout as std::io::Write>::flush(a1);
  return core::result::Result<T,E>::unwrap(v3, &off_125348);
}