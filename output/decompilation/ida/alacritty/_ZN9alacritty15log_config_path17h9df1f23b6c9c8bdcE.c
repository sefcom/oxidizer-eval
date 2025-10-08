void __fastcall alacritty::log_config_path(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int128 *v4; // [rsp+8h] [rbp-B0h] BYREF
  __int64 (__fastcall *v5)(); // [rsp+10h] [rbp-A8h]
  __int128 *v6; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v7; // [rsp+20h] [rbp-98h]
  __int128 **v8; // [rsp+28h] [rbp-90h]
  __int64 v9; // [rsp+30h] [rbp-88h]
  __int64 v10; // [rsp+38h] [rbp-80h]
  _BYTE v11[24]; // [rsp+48h] [rbp-70h] BYREF
  __int128 v12; // [rsp+60h] [rbp-58h] BYREF
  const char *v13; // [rsp+70h] [rbp-48h]
  __int64 v14; // [rsp+78h] [rbp-40h]
  __int64 v15; // [rsp+80h] [rbp-38h]

  if ( a2 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
      v11,
      "Configuration files loaded from:glRenderbufferStorageMultisample(");
    v2 = 0LL;
    do
    {
      v12 = *(_OWORD *)(a1 + v2 + 8);
      v4 = &v12;
      v5 = <std::path::Display as core::fmt::Debug>::fmt;
      v6 = (__int128 *)&off_884568;
      v7 = 1LL;
      v10 = 0LL;
      v8 = &v4;
      v9 = 1LL;
      <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(v11, &v6);
      v2 += 24LL;
    }
    while ( 24 * a2 != v2 );
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
    {
      v4 = (__int128 *)v11;
      v5 = <alloc::string::String as core::fmt::Display>::fmt;
      v6 = &xmmword_E8B60;
      v7 = 1LL;
      v10 = 0LL;
      v8 = &v4;
      v9 = 1LL;
      v3 = log::__private_api::loc(&off_884578);
      *(_QWORD *)&v12 = aAlacritty_1;
      *((_QWORD *)&v12 + 1) = 9LL;
      v13 = aAlacritty_1;
      v14 = 9LL;
      v15 = v3;
      log::__private_api::log(&v6, 3LL, &v12);
    }
    core::ptr::drop_in_place<alloc::string::String>(v11);
  }
}