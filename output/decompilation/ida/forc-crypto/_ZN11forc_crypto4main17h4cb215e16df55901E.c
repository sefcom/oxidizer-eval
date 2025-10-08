__int64 forc_crypto::main()
{
  __int64 v0; // rax
  __int64 v2; // [rsp+8h] [rbp-70h] BYREF
  __int128 v3; // [rsp+10h] [rbp-68h] BYREF
  _QWORD *v4; // [rsp+20h] [rbp-58h]
  __int64 v5; // [rsp+28h] [rbp-50h]
  __int64 v6; // [rsp+30h] [rbp-48h]
  __int64 v7; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v8[2]; // [rsp+48h] [rbp-30h] BYREF
  __int128 v9; // [rsp+58h] [rbp-20h] BYREF
  _QWORD *v10; // [rsp+68h] [rbp-10h]

  LOBYTE(v6) = 0;
  WORD1(v6) = 1026;
  *(_QWORD *)&v3 = 6LL;
  *((_QWORD *)&v3 + 1) = 0x8000000000000000LL;
  forc_tracing::init_tracing_subscriber(&v3);
  v0 = forc_crypto::run();
  v7 = v0;
  if ( v0 )
  {
    v2 = v0;
    v8[0] = &v2;
    v8[1] = anyhow::error::<impl core::fmt::Display for anyhow::Error>::fmt;
    *(_QWORD *)&v3 = asc_7AB60;
    *((_QWORD *)&v3 + 1) = 1LL;
    v6 = 0LL;
    v4 = v8;
    v5 = 1LL;
    core::option::Option<T>::map_or_else(&v9, &v3);
    v3 = v9;
    v4 = v10;
    forc_tracing::println_error(*((_QWORD *)&v9 + 1));
    core::ptr::drop_in_place<alloc::string::String>(&v3);
    std::process::exit(1);
  }
  return core::ptr::drop_in_place<core::result::Result<(),anyhow::Error>>(&v7);
}