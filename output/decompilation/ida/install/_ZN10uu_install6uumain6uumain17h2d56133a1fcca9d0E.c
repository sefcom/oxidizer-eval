// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_install::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r14
  __int64 v5; // rbx
  _BYTE v6[24]; // [rsp+8h] [rbp-3E0h] BYREF
  __int128 v7; // [rsp+20h] [rbp-3C8h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-3B8h]
  __int128 v9; // [rsp+58h] [rbp-390h]
  __int128 v10; // [rsp+68h] [rbp-380h]
  __int128 v11; // [rsp+78h] [rbp-370h]
  _OWORD v12[3]; // [rsp+88h] [rbp-360h] BYREF
  __int64 v13; // [rsp+B8h] [rbp-330h]
  _QWORD v14[8]; // [rsp+C0h] [rbp-328h] BYREF
  _QWORD dest[11]; // [rsp+100h] [rbp-2E8h] BYREF
  __int128 v16; // [rsp+158h] [rbp-290h]

  uu_install::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v7, dest, a1, a2);
  if ( __OFSUB__(-(__int64)v7, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v7 + 1),
             dest,
             v2,
             -(__int64)v7);
  v13 = *(_QWORD *)&v8[32];
  v12[2] = *(_OWORD *)&v8[16];
  v12[1] = *(_OWORD *)v8;
  v12[0] = v7;
  v4 = (__int64)*(&uu_install::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v12, aFiles, v4);
  clap_builder::parser::error::MatchesError::unwrap(v14, aFiles, v4, dest);
  if ( v14[0] )
  {
    core::iter::traits::iterator::Iterator::collect(dest, v14);
    *(_OWORD *)&v6[8] = *(_OWORD *)&dest[1];
    *(_QWORD *)v6 = dest[0];
  }
  else
  {
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)&v6[8] = 8LL;
    *(_QWORD *)&v6[16] = 0LL;
  }
  v5 = uu_install::check_unimplemented(v12);
  if ( v5 )
    goto LABEL_11;
  uu_install::behavior(dest, v12);
  v5 = dest[1];
  if ( dest[0] == 0x8000000000000000LL )
    goto LABEL_11;
  v11 = v16;
  v10 = *(_OWORD *)&dest[9];
  v9 = *(_OWORD *)&dest[7];
  *(_OWORD *)&v8[24] = *(_OWORD *)&dest[5];
  *(_OWORD *)&v8[8] = *(_OWORD *)&dest[3];
  v7 = *(_OWORD *)dest;
  *(_QWORD *)v8 = dest[2];
  if ( BYTE8(v16) != 1 )
  {
    v5 = uu_install::directory(*(_QWORD *)&v6[8], *(_QWORD *)&v6[16], &v7);
    core::ptr::drop_in_place<uu_install::Behavior>(&v7);
LABEL_11:
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v6);
    goto LABEL_12;
  }
  dest[2] = *(_QWORD *)&v6[16];
  *(_OWORD *)dest = *(_OWORD *)v6;
  v5 = uu_install::standard(dest, &v7);
  core::ptr::drop_in_place<uu_install::Behavior>(&v7);
LABEL_12:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v12);
  return v5;
}