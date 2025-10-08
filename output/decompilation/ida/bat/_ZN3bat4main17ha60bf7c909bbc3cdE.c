void __noreturn bat::main()
{
  __int64 v0; // [rsp+0h] [rbp-B8h] BYREF
  void *v1; // [rsp+8h] [rbp-B0h] BYREF
  _OWORD v2[5]; // [rsp+10h] [rbp-A8h] BYREF
  _OWORD v3[5]; // [rsp+60h] [rbp-58h] BYREF

  bat::run((__int64)v2);
  if ( LOBYTE(v2[0]) == 13 )
  {
    if ( BYTE1(v2[0]) )
      std::process::exit(0);
    std::process::exit(1);
  }
  v3[4] = v2[4];
  v3[3] = v2[3];
  v3[2] = v2[2];
  v3[1] = v2[1];
  v3[0] = v2[0];
  v1 = &std::io::stdio::stderr::INSTANCE;
  v0 = std::io::stdio::Stdout::lock(&v1);
  bat::error::default_error_handler(v3, &v0, &off_6C8B00);
  core::ptr::drop_in_place<std::io::stdio::StderrLock>(&v0);
  std::process::exit(1);
}