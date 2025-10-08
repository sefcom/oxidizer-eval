__int64 __fastcall uu_users::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r15
  __int64 v5; // rax
  const char *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  char v9; // dl
  _QWORD *v10; // r14
  __int64 v11; // r15
  __int128 v12; // [rsp+0h] [rbp-618h] BYREF
  _QWORD *v13; // [rsp+10h] [rbp-608h]
  __int128 v14; // [rsp+20h] [rbp-5F8h] BYREF
  __int128 v15; // [rsp+30h] [rbp-5E8h]
  __int128 v16; // [rsp+40h] [rbp-5D8h]
  __int64 v17; // [rsp+50h] [rbp-5C8h]
  _QWORD v18[2]; // [rsp+58h] [rbp-5C0h] BYREF
  __int128 dest; // [rsp+68h] [rbp-5B0h] BYREF
  _QWORD *v20; // [rsp+78h] [rbp-5A0h]
  __int64 v21; // [rsp+80h] [rbp-598h]
  __int64 v22; // [rsp+88h] [rbp-590h]
  _OWORD src[3]; // [rsp+330h] [rbp-2E8h] BYREF
  __int64 v24; // [rsp+360h] [rbp-2B8h]

  uu_users::uu_app(src);
  uu_users::get_long_usage(&v12);
  clap_builder::builder::command::Command::after_help(&dest, src);
  clap_builder::builder::command::Command::try_get_matches_from(&v14, &dest, a1, a2);
  if ( __OFSUB__(-(__int64)v14, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v14 + 1),
             &dest,
             v2,
             -(__int64)v14);
  v24 = v17;
  src[2] = v16;
  src[1] = v15;
  src[0] = v14;
  v4 = (__int64)*(&uu_users::ARG_FILE + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, src, aFile, v4);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aFile, v4, &dest);
  if ( v5 )
  {
    v6 = *(const char **)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 16);
  }
  else
  {
    v6 = aVarRunUtmp;
    v7 = (__int64)*(&uucore::features::utmpx::ut::DEFAULT_FILE + 1);
  }
  v8 = uucore::features::utmpx::Utmpx::iter_all_records_from(v6, v7);
  core::iter::traits::iterator::Iterator::collect(&dest, v8, v9 & 1);
  v10 = v20;
  v13 = v20;
  v12 = dest;
  if ( v20 )
  {
    v11 = *((_QWORD *)&v12 + 1);
    alloc::slice::stable_sort(*((_QWORD *)&v12 + 1), v20);
    alloc::str::join_generic_copy(&dest, v11, v10);
    *(_QWORD *)&v15 = v20;
    v14 = dest;
    v18[0] = &v14;
    v18[1] = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &unk_DBB40;
    *((_QWORD *)&dest + 1) = 2LL;
    v22 = 0LL;
    v20 = v18;
    v21 = 1LL;
    std::io::stdio::_print(&dest);
    core::ptr::drop_in_place<alloc::string::String>(v14, *((_QWORD *)&v14 + 1));
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v12);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(src);
  return 0LL;
}