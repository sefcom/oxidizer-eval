__int64 __fastcall uu_expand::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int128 v4; // [rsp+0h] [rbp-3A8h] BYREF
  __int128 v5; // [rsp+10h] [rbp-398h]
  __int128 v6; // [rsp+20h] [rbp-388h]
  _QWORD v7[2]; // [rsp+30h] [rbp-378h] BYREF
  __int128 v8; // [rsp+40h] [rbp-368h]
  __int128 v9; // [rsp+50h] [rbp-358h]
  __int64 v10; // [rsp+60h] [rbp-348h]
  __int64 v11; // [rsp+68h] [rbp-340h] BYREF
  _BYTE v12[48]; // [rsp+70h] [rbp-338h]
  __int128 v13; // [rsp+A0h] [rbp-308h]
  __int64 v14; // [rsp+B0h] [rbp-2F8h]
  _BYTE v15[24]; // [rsp+B8h] [rbp-2F0h] BYREF
  _BYTE v16[56]; // [rsp+D0h] [rbp-2D8h] BYREF
  __int128 v17; // [rsp+108h] [rbp-2A0h]
  __int64 v18; // [rsp+118h] [rbp-290h]

  uu_expand::uu_app(v16);
  core::iter::traits::iterator::Iterator::collect(&v4, a1, a2);
  uu_expand::expand_shortcuts((__int64)v15, (__int64)&v4);
  clap_builder::builder::command::Command::try_get_matches_from(&v11, v16, v15);
  if ( v11 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)v12);
  v10 = *(_QWORD *)&v12[40];
  v9 = *(_OWORD *)&v12[24];
  v8 = *(_OWORD *)&v12[8];
  v7[0] = v11;
  v7[1] = *(_QWORD *)v12;
  uu_expand::Options::new((__int64)v16, (__int64)v7);
  v4 = *(_OWORD *)&v16[8];
  v5 = *(_OWORD *)&v16[24];
  v6 = *(_OWORD *)&v16[40];
  if ( *(_QWORD *)v16 == 0x8000000000000000LL )
  {
    *(_OWORD *)&v16[32] = v6;
    *(_OWORD *)&v16[16] = v5;
    *(_OWORD *)v16 = v4;
    v2 = alloc::boxed::Box<T>::new(v16);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v7);
  }
  else
  {
    v14 = v18;
    v13 = v17;
    *(_OWORD *)v12 = v4;
    *(_OWORD *)&v12[16] = v5;
    *(_OWORD *)&v12[32] = v6;
    v11 = *(_QWORD *)v16;
    v2 = uu_expand::expand(&v11);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v7);
    core::ptr::drop_in_place<uu_expand::Options>(&v11);
  }
  return v2;
}
