__int64 __fastcall uu_more::reset_term(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+18h] [rbp-20h]

  v1 = crossterm::terminal::disable_raw_mode();
  core::result::Result<T,E>::unwrap(v1, &off_163888);
  v2 = crossterm::command::write_command_ansi(a1, 4LL);
  core::result::Result<T,E>::unwrap(v2, &off_1638A0);
  v9[0] = &off_1638B8;
  v9[1] = 1LL;
  v9[2] = 8LL;
  v10 = 0LL;
  ((void (__fastcall *)(_QWORD *, char **, __int64, __int64, __int64, __int64))std::io::stdio::_print)(
    v9,
    &off_1638A0,
    v3,
    v4,
    v5,
    v6);
  v7 = <std::io::stdio::Stdout as std::io::Write>::flush(a1);
  return core::result::Result<T,E>::unwrap(v7, &off_1638C8);
}
