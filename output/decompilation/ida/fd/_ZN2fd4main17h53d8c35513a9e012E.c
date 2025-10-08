void __noreturn fd::main()
{
  __int64 v0; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v1[8]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v2; // [rsp+18h] [rbp-50h]
  _QWORD v3[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v4[7]; // [rsp+30h] [rbp-38h] BYREF

  fd::run(v1);
  if ( v1[0] == 1 )
  {
    v0 = v2;
    v3[0] = &v0;
    v3[1] = anyhow::error::<impl core::fmt::Display for anyhow::Error>::fmt;
    v4[0] = &off_402140;
    v4[1] = 2LL;
    v4[4] = &unk_7B620;
    v4[5] = 1LL;
    v4[2] = v3;
    v4[3] = 1LL;
    std::io::stdio::_eprint(v4);
    fd::exit_codes::ExitCode::exit(4);
  }
  fd::exit_codes::ExitCode::exit(v1[1]);
}