void __fastcall alacritty::cli::ParsedOptions::override_config(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+8h] [rbp-C0h]
  __int64 v9; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v10[4]; // [rsp+18h] [rbp-B0h] BYREF
  _QWORD v11[5]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v12[13]; // [rsp+60h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = 0LL;
    do
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(a1 + 8) + 56 * v3;
        <toml::value::Value as core::clone::Clone>::clone(v12, v9 + 24);
        v4 = <alacritty::config::ui_config::UiConfig as alacritty_config::SerdeReplace>::replace(a2, v12);
        if ( v4 )
          break;
        if ( ++v3 >= v2 )
          return;
      }
      v7 = v4;
      v8 = v5;
      if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
      {
        v10[0] = &v9;
        v10[1] = <&T as core::fmt::Display>::fmt;
        v10[2] = &v7;
        v10[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v12[0] = &off_8816A0;
        v12[1] = 2LL;
        v12[4] = 0LL;
        v12[2] = v10;
        v12[3] = 2LL;
        v6 = log::__private_api::loc(&off_8816C0);
        v11[0] = aAlacrittyLogWi;
        v11[1] = 27LL;
        v11[2] = aAlacrittyCli;
        v11[3] = 14LL;
        v11[4] = v6;
        log::__private_api::log(v12, 1LL, v11);
      }
      alloc::vec::Vec<T,A>::swap_remove(v12, a1, v3);
      core::ptr::drop_in_place<(alloc::string::String,toml::value::Value)>(v12);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v7, v8);
      v2 = *(_QWORD *)(a1 + 16);
    }
    while ( v3 < v2 );
  }
}