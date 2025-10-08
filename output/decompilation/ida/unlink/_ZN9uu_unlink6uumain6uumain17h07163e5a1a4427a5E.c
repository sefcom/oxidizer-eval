__int64 __fastcall uu_unlink::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // [rsp+0h] [rbp-318h] BYREF
  __int64 v11; // [rsp+8h] [rbp-310h]
  __int128 v12; // [rsp+10h] [rbp-308h]
  __int128 v13; // [rsp+20h] [rbp-2F8h]
  __int64 v14; // [rsp+30h] [rbp-2E8h]
  _QWORD dest[2]; // [rsp+38h] [rbp-2E0h] BYREF
  __int128 v16; // [rsp+48h] [rbp-2D0h]
  __int128 v17; // [rsp+58h] [rbp-2C0h]
  __int64 v18; // [rsp+68h] [rbp-2B0h]

  uu_unlink::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v10, dest, a1, a2);
  if ( __OFSUB__(-v10, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v11,
             dest,
             v2,
             -v10);
  v18 = v14;
  v17 = v13;
  v16 = v12;
  dest[0] = v10;
  dest[1] = v11;
  v4 = (__int64)*(&uu_unlink::OPT_PATH + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10, dest, aFile, v4);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aFile, v4, &v10);
  if ( !v5 )
    core::option::unwrap_failed(&off_DB290);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v5 + 16);
  v8 = std::fs::remove_file(v6, v7);
  v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
         v8,
         v6,
         v7);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(dest);
  return v9;
}