__int64 __fastcall fd::print_completions(_WORD *a1, unsigned __int8 a2)
{
  const char *v2; // r15
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD v7[3]; // [rsp+0h] [rbp-308h] BYREF
  __int64 v8; // [rsp+18h] [rbp-2F0h] BYREF
  _BYTE v9[8]; // [rsp+20h] [rbp-2E8h] BYREF
  const char *v10; // [rsp+28h] [rbp-2E0h]
  __int64 v11; // [rsp+30h] [rbp-2D8h]

  std::env::args(v9);
  <std::env::Args as core::iter::traits::iterator::Iterator>::next(v7, v9);
  core::ptr::drop_in_place<core::iter::adapters::map::Map<std::env::ArgsOs,<clap_lex::RawArgs as core::convert::From<std::env::ArgsOs>>::from::{{closure}}>>(v9);
  v2 = aFd;
  v3 = 2LL;
  if ( !__OFSUB__(0LL, v7[0]) )
  {
    v4 = std::path::Path::file_stem(v7[1], v7[2]);
    if ( v4 )
    {
      core::str::converts::from_utf8(v9, v4, v5);
      v3 = 2LL;
      if ( !v9[0] )
        v3 = v11;
      v2 = aFd;
      if ( !v9[0] )
        v2 = v10;
    }
  }
  <fd::cli::Opts as clap_builder::derive::CommandFactory>::command(v9);
  clap_builder::builder::command::Command::build(v9);
  v8 = std::io::stdio::stdout();
  clap_complete::aot::generator::generate(a2, v9, v2, v3, &v8);
  *a1 = 512;
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(v9);
  return core::ptr::drop_in_place<regex::error::Error>(v7);
}