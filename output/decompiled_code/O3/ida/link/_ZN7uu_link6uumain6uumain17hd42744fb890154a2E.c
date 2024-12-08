__int64 __fastcall uu_link::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  const char *v4; // rsi
  void (__fastcall __noreturn *v5)(); // rax
  const char *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rax
  void (__fastcall __noreturn *v13)(); // r15
  const char *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rbx
  char **v17; // rdx
  __int64 v18; // rdi
  void (__fastcall __noreturn *v19)(); // [rsp+8h] [rbp-360h] BYREF
  const char *v20; // [rsp+10h] [rbp-358h]
  __int128 v21; // [rsp+18h] [rbp-350h]
  __int128 v22; // [rsp+28h] [rbp-340h]
  const char *v23; // [rsp+38h] [rbp-330h]
  __int64 v24; // [rsp+40h] [rbp-328h]
  _QWORD v25[2]; // [rsp+48h] [rbp-320h] BYREF
  __int128 v26; // [rsp+58h] [rbp-310h]
  __int128 v27; // [rsp+68h] [rbp-300h]
  const char *v28; // [rsp+78h] [rbp-2F0h]
  void (__fastcall __noreturn *dest)(); // [rsp+80h] [rbp-2E8h] BYREF
  const char *v30; // [rsp+88h] [rbp-2E0h]
  __int128 v31; // [rsp+90h] [rbp-2D8h]
  __int128 v32; // [rsp+A0h] [rbp-2C8h]
  const char *v33; // [rsp+B0h] [rbp-2B8h]
  __int64 v34; // [rsp+B8h] [rbp-2B0h]

  uu_link::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v19, &dest, a1, a2);
  if ( v19 == (void (__fastcall __noreturn *)())0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
  v28 = v23;
  v27 = v22;
  v26 = v21;
  v25[0] = v19;
  v25[1] = v20;
  v3 = (__int64)*(&uu_link::options::FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v25, aFiles, v3);
  v4 = aFiles;
  clap_builder::parser::error::MatchesError::unwrap(&v19, aFiles, v3, &dest);
  v5 = v19;
  if ( v19 )
  {
    v6 = v20;
    v7 = v21;
    v8 = v22;
    v4 = v23;
    v9 = v24;
  }
  else
  {
    v8 = 0LL;
    v7 = (unsigned __int64)"&";
    v6 = "&";
    v5 = core::ops::function::FnOnce::call_once;
    v9 = 0LL;
  }
  dest = v5;
  v30 = v6;
  v31 = v7;
  v32 = v8;
  v33 = v4;
  v34 = v9;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v19, &dest);
  if ( !(_QWORD)v21 )
  {
    v17 = &off_10AF80;
    v18 = 0LL;
    goto LABEL_11;
  }
  if ( (_QWORD)v21 == 1LL )
  {
    v17 = &off_10AF98;
    v18 = 1LL;
LABEL_11:
    core::panicking::panic_bounds_check(v18, v18, v17);
  }
  v10 = *(_QWORD *)(*(_QWORD *)v20 + 8LL);
  v11 = *(_QWORD *)(*(_QWORD *)v20 + 16LL);
  v12 = *((_QWORD *)v20 + 1);
  v13 = *(void (__fastcall __noreturn **)())(v12 + 8);
  v14 = *(const char **)(v12 + 16);
  v15 = std::fs::hard_link(v10, v11, v13, v14);
  dest = v13;
  v30 = v14;
  *(_QWORD *)&v31 = v10;
  *((_QWORD *)&v31 + 1) = v11;
  v16 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          v15,
          &dest);
  core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsString>>(&v19);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v25);
  return v16;
}
