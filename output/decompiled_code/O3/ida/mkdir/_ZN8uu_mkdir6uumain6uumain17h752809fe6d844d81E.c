__int64 __fastcall uu_mkdir::uumain::uumain(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  void (__fastcall __noreturn *v4)(); // r12
  __int64 v5; // r13
  unsigned __int8 flag; // bp
  unsigned __int8 v7; // r14
  __int64 v8; // rbx
  const char *v9; // [rsp+8h] [rbp-680h]
  __int64 v10; // [rsp+10h] [rbp-678h]
  _QWORD v11[2]; // [rsp+18h] [rbp-670h] BYREF
  __int128 v12; // [rsp+28h] [rbp-660h]
  __int128 v13; // [rsp+38h] [rbp-650h]
  __int64 v14; // [rsp+48h] [rbp-640h]
  __int128 v15; // [rsp+50h] [rbp-638h]
  __int128 v16; // [rsp+60h] [rbp-628h]
  __int128 v17; // [rsp+70h] [rbp-618h] BYREF
  __int64 v18; // [rsp+80h] [rbp-608h]
  __int64 v19; // [rsp+88h] [rbp-600h] BYREF
  __int64 v20; // [rsp+90h] [rbp-5F8h]
  __int128 v21; // [rsp+98h] [rbp-5F0h]
  __int128 v22; // [rsp+A8h] [rbp-5E0h]
  __int64 v23; // [rsp+B8h] [rbp-5D0h]
  __int128 src; // [rsp+C0h] [rbp-5C8h] BYREF
  __int128 v25; // [rsp+D0h] [rbp-5B8h]
  __int128 v26; // [rsp+E0h] [rbp-5A8h]
  __int64 v27; // [rsp+F0h] [rbp-598h]
  __int64 v28; // [rsp+F8h] [rbp-590h]
  __int128 dest; // [rsp+390h] [rbp-2F8h] BYREF
  __int128 v30; // [rsp+3A0h] [rbp-2E8h]
  __int128 v31; // [rsp+3B0h] [rbp-2D8h]
  __int64 v32; // [rsp+3C0h] [rbp-2C8h]
  __int64 v33; // [rsp+3C8h] [rbp-2C0h]

  uucore::Args::collect_lossy(&v17, a1, a2);
  v2 = uu_mkdir::strip_minus_from_mode(&v17);
  uu_mkdir::uu_app(&src);
  clap_builder::builder::command::Command::after_help(&dest, &src);
  *(_QWORD *)&v25 = v18;
  src = v17;
  clap_builder::builder::command::Command::try_get_matches_from(&v19, &dest, &src);
  if ( v19 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
  v14 = v23;
  v13 = v22;
  v12 = v21;
  v11[0] = v19;
  v11[1] = v20;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, v11, aDirs, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(&dest, aDirs, 4LL, &src);
  v4 = (void (__fastcall __noreturn *)())dest;
  if ( (_QWORD)dest )
  {
    v9 = (const char *)*((_QWORD *)&dest + 1);
    v15 = v30;
    v16 = v31;
    v10 = v32;
    v5 = v33;
  }
  else
  {
    v16 = 0LL;
    v15 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v9 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v4 = core::ops::function::FnOnce::call_once;
    v5 = 0LL;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v11, aVerbose, 7LL);
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v11, aParents, 7LL);
  uu_mkdir::get_mode(&dest, v11, v2);
  if ( (_QWORD)dest == 0x8000000000000000LL )
  {
    *(_QWORD *)&src = v4;
    *((_QWORD *)&src + 1) = v9;
    v25 = v15;
    v26 = v16;
    v27 = v10;
    v28 = v5;
    v8 = uu_mkdir::exec(&src, v7, DWORD2(dest), flag);
  }
  else
  {
    *(_QWORD *)&v25 = v30;
    src = dest;
    DWORD2(v25) = 1;
    v8 = alloc::boxed::Box<T>::new(&src);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v11);
  return v8;
}
