__int64 forc_fmt::main()
{
  __int64 v0; // rax
  __int64 v2; // rdx
  __int64 v3; // [rsp+8h] [rbp-70h] BYREF
  __int128 v4; // [rsp+10h] [rbp-68h] BYREF
  _QWORD *v5; // [rsp+20h] [rbp-58h]
  __int64 v6; // [rsp+28h] [rbp-50h]
  __int64 v7; // [rsp+30h] [rbp-48h]
  __int64 v8; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v9[2]; // [rsp+48h] [rbp-30h] BYREF
  __int128 v10; // [rsp+58h] [rbp-20h] BYREF
  _QWORD *v11; // [rsp+68h] [rbp-10h]

  LOBYTE(v7) = 0;
  WORD1(v7) = 1026;
  *(_QWORD *)&v4 = 6LL;
  *((_QWORD *)&v4 + 1) = 0x8000000000000000LL;
  forc_tracing::init_tracing_subscriber(&v4);
  v0 = forc_fmt::run();
  v8 = v0;
  if ( v0 )
  {
    v3 = v0;
    forc_tracing::println_error("Formatting skipped due to error.$__serde_spanned_private_Spannedd\t", 32LL);
    v9[0] = &v3;
    v9[1] = anyhow::error::<impl core::fmt::Display for anyhow::Error>::fmt;
    *(_QWORD *)&v4 = &unk_166A30;
    *((_QWORD *)&v4 + 1) = 1LL;
    v7 = 0LL;
    v5 = v9;
    v6 = 1LL;
    core::option::Option<T>::map_or_else(&v10, 0LL, v2, &v4);
    v4 = v10;
    v5 = v11;
    forc_tracing::println_error(*((_QWORD *)&v10 + 1), v11);
    core::ptr::drop_in_place<alloc::string::String>(&v4);
    std::process::exit(1);
  }
  return core::ptr::drop_in_place<core::result::Result<(),anyhow::Error>>(&v8);
}