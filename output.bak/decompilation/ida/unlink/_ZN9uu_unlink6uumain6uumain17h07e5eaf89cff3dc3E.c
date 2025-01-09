__int64 __fastcall uu_unlink::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // [rsp+0h] [rbp-318h] BYREF
  __int64 v10; // [rsp+8h] [rbp-310h]
  __int128 v11; // [rsp+10h] [rbp-308h]
  __int128 v12; // [rsp+20h] [rbp-2F8h]
  __int64 v13; // [rsp+30h] [rbp-2E8h]
  _QWORD dest[2]; // [rsp+38h] [rbp-2E0h] BYREF
  __int128 v15; // [rsp+48h] [rbp-2D0h]
  __int128 v16; // [rsp+58h] [rbp-2C0h]
  __int64 v17; // [rsp+68h] [rbp-2B0h]

  uu_unlink::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v9, dest, a1, a2);
  if ( v9 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
  v17 = v13;
  v16 = v12;
  v15 = v11;
  dest[0] = v9;
  dest[1] = v10;
  v3 = (__int64)*(&uu_unlink::OPT_PATH + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, dest, aFile, v3);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aFile, v3, &v9);
  if ( !v4 )
    core::option::unwrap_failed(&off_108630);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = std::fs::remove_file(v5, v6);
  v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
         v7,
         v5,
         v6);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(dest);
  return v8;
}
