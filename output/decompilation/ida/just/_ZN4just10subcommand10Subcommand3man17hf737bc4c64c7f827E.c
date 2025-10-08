__int64 __fastcall just::subcommand::Subcommand::man(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v4; // [rsp+0h] [rbp-628h] BYREF
  __int64 v5; // [rsp+8h] [rbp-620h]
  __int64 v6; // [rsp+10h] [rbp-618h]
  _QWORD dest[89]; // [rsp+18h] [rbp-610h] BYREF
  _QWORD v8[105]; // [rsp+2E0h] [rbp-348h] BYREF

  v4 = 0LL;
  v5 = 1LL;
  v6 = 0LL;
  just::config::Config::app(dest);
  clap_mangen::Man::new(v8, dest);
  v1 = clap_mangen::Man::render(v8, &v4, &off_431178);
  core::result::Result<T,E>::expect(v1);
  core::ptr::drop_in_place<clap_mangen::Man>(v8);
  v8[0] = std::io::stdio::stdout(v8);
  dest[0] = std::io::stdio::Stdout::lock(v8);
  v2 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(dest, v5, v6);
  if ( v2 || (v2 = <std::io::stdio::StdoutLock as std::io::Write>::flush(dest)) != 0 )
  {
    *(_BYTE *)a1 = 48;
    *(_QWORD *)(a1 + 8) = v2;
  }
  else
  {
    *(_BYTE *)a1 = 56;
  }
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(dest[0]);
  return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v4);
}