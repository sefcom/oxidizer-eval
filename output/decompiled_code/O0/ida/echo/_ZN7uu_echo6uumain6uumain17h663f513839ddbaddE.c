__int64 __fastcall uu_echo::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-4A0h]
  __int64 v6; // [rsp+28h] [rbp-480h]
  _OWORD *v7; // [rsp+40h] [rbp-468h]
  char v8; // [rsp+56h] [rbp-452h]
  char flag; // [rsp+57h] [rbp-451h]
  int v10[26]; // [rsp+68h] [rbp-440h] BYREF
  int dest[178]; // [rsp+D0h] [rbp-3D8h] BYREF
  _BYTE v12[24]; // [rsp+398h] [rbp-110h] BYREF
  _OWORD v13[4]; // [rsp+3B0h] [rbp-F8h] BYREF
  _OWORD v14[4]; // [rsp+3F0h] [rbp-B8h] BYREF
  _BYTE v15[64]; // [rsp+430h] [rbp-78h] BYREF
  __int64 v16; // [rsp+470h] [rbp-38h]
  __int128 v17; // [rsp+478h] [rbp-30h] BYREF
  __int64 v18; // [rsp+488h] [rbp-20h]
  char v19; // [rsp+497h] [rbp-11h]

  v19 = 1;
  uu_echo::uu_app(dest);
  v19 = 0;
  clap_builder::builder::command::Command::get_matches_from(v10, dest, a1, a2);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v10, aNoNewline, 10LL, &off_F8588);
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v10, aEnableBackslas, 23LL, &off_F85A0);
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v13, v10, aString, 6LL, &off_F85B8);
  if ( *(_QWORD *)&v13[0] )
  {
    v14[3] = v13[3];
    v14[2] = v13[2];
    v14[1] = v13[1];
    v14[0] = v13[0];
    core::iter::traits::iterator::Iterator::map(v15, v14);
    core::iter::traits::iterator::Iterator::collect(v12, v15);
  }
  else
  {
    v16 = alloc::alloc::exchange_malloc(24LL, 8LL);
    alloc::string::String::new(&v17);
    v7 = (_OWORD *)v16;
    if ( (v16 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v16, &off_F85D0);
    *(_QWORD *)(v16 + 16) = v18;
    *v7 = v17;
    alloc::slice::<impl [T]>::into_vec(v12, v16, 1LL);
  }
  v2 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v12);
  v6 = uu_echo::execute(flag & 1, v8 & 1, v2, v3);
  v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v6);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v12);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v10);
  return v5;
}
