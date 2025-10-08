__int64 __fastcall zoxide::util::path_to_str(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 v6; // rsi
  _BYTE v8[8]; // [rsp+8h] [rbp-30h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]
  __int64 v10; // [rsp+18h] [rbp-20h]

  v3 = std::path::<impl core::convert::AsRef<std::path::Path> for alloc::string::String>::as_ref(a2, a3);
  v5 = v4;
  core::str::converts::from_utf8(v8, v3);
  if ( v8[0] )
    v6 = 0LL;
  else
    v6 = v9;
  return anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(
           a1,
           v6,
           v10,
           v3,
           v5);
}