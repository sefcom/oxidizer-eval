__int64 zoxide::main()
{
  _BYTE *v0; // rbx
  __int64 v1; // rax
  __int64 v3; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v4[8]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v5; // [rsp+18h] [rbp-B0h]
  __int64 v6; // [rsp+20h] [rbp-A8h] BYREF
  void *v7; // [rsp+28h] [rbp-A0h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v9[6]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v10[88]; // [rsp+70h] [rbp-58h] BYREF

  std::env::remove_var(aRustLibBacktra, 18LL);
  std::env::remove_var(aRustBacktrace, 14LL);
  v0 = v10;
  clap_builder::derive::Parser::parse(v10);
  v1 = <zoxide::cmd::cmd::Cmd as zoxide::cmd::Run>::run(v10);
  if ( v1 )
  {
    anyhow::error::<impl anyhow::Error>::downcast(v4, v1);
    if ( v4[0] == 1 )
    {
      v3 = v5;
      v7 = &std::io::stdio::stderr::INSTANCE;
      v8[0] = &v3;
      v8[1] = anyhow::error::<impl core::fmt::Debug for anyhow::Error>::fmt;
      v9[0] = &off_134CB0;
      v9[1] = 2LL;
      v9[4] = 0LL;
      v9[2] = v8;
      v9[3] = 1LL;
      v6 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v7, v9);
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v6);
      core::ptr::drop_in_place<anyhow::Error>(&v3);
      LOBYTE(v0) = 1;
    }
    else
    {
      LODWORD(v0) = v4[1];
    }
  }
  else
  {
    LODWORD(v0) = 0;
  }
  core::ptr::drop_in_place<zoxide::cmd::cmd::Cmd>(v10);
  return (unsigned int)v0;
}