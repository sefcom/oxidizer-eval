char __fastcall rg::eprint_nothing_searched(__int64 a1)
{
  char result; // al
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  char v5; // al
  char v6; // al
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  char **v9; // [rsp+10h] [rbp-48h] BYREF
  __int64 v10; // [rsp+18h] [rbp-40h]
  __int64 v11; // [rsp+20h] [rbp-38h]
  __int128 v12; // [rsp+28h] [rbp-30h]

  rg::messages::set_errored();
  result = rg::messages::messages();
  if ( result )
  {
    v9 = (char **)std::io::stdio::stdout(a1);
    v2 = std::io::stdio::Stdout::lock(&v9);
    v9 = (char **)&std::io::stdio::stderr::INSTANCE;
    v7 = std::io::stdio::Stdout::lock(&v9);
    v9 = &off_3E99C8;
    v10 = 1LL;
    v11 = 8LL;
    v12 = 0LL;
    v3 = std::io::Write::write_fmt(&v7, &v9);
    v8 = v3;
    if ( v3 )
    {
      v9 = (char **)v3;
      v5 = std::io::error::Error::kind(v3);
      std::process::exit(2 * (v5 != 11));
    }
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v8);
    v9 = &off_3EBA38;
    v10 = 1LL;
    v11 = 8LL;
    v12 = 0LL;
    v4 = std::io::Write::write_fmt(&v7, &v9);
    v8 = v4;
    if ( v4 )
    {
      v9 = (char **)v4;
      v6 = std::io::error::Error::kind(v4);
      std::process::exit(2 * (v6 != 11));
    }
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v8);
    core::ptr::drop_in_place<std::io::stdio::StderrLock>(v2);
    return core::ptr::drop_in_place<std::io::stdio::StderrLock>(v7);
  }
  return result;
}