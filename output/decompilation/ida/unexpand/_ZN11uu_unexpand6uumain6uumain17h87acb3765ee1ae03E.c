__int64 __fastcall uu_unexpand::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  _QWORD v5[3]; // [rsp+0h] [rbp-398h] BYREF
  __int64 v6; // [rsp+18h] [rbp-380h] BYREF
  _BYTE v7[24]; // [rsp+20h] [rbp-378h]
  __int128 v8; // [rsp+38h] [rbp-360h]
  __int64 v9; // [rsp+48h] [rbp-350h]
  __int128 v10; // [rsp+50h] [rbp-348h] BYREF
  __int64 v11; // [rsp+60h] [rbp-338h]
  _QWORD v12[2]; // [rsp+70h] [rbp-328h] BYREF
  __int128 v13; // [rsp+80h] [rbp-318h]
  __int128 v14; // [rsp+90h] [rbp-308h]
  __int64 v15; // [rsp+A0h] [rbp-2F8h]
  _BYTE v16[24]; // [rsp+A8h] [rbp-2F0h] BYREF
  __int64 dest; // [rsp+C0h] [rbp-2D8h] BYREF
  __int128 v18; // [rsp+C8h] [rbp-2D0h]
  __int64 v19; // [rsp+D8h] [rbp-2C0h]
  __int128 v20; // [rsp+E0h] [rbp-2B8h]
  __int64 v21; // [rsp+F0h] [rbp-2A8h]

  uucore::Args::collect_ignore(v5, a1, a2);
  uu_unexpand::uu_app(&dest);
  uu_unexpand::expand_shortcuts(v16, v5[1], v5[2]);
  clap_builder::builder::command::Command::try_get_matches_from(&v6, &dest, v16);
  if ( __OFSUB__(-v6, 1LL) )
  {
    v3 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
           *(_QWORD *)v7,
           &dest,
           v2,
           -v6);
  }
  else
  {
    v15 = v9;
    v14 = v8;
    v13 = *(_OWORD *)&v7[8];
    v12[0] = v6;
    v12[1] = *(_QWORD *)v7;
    uu_unexpand::Options::new(&dest, v12);
    v10 = v18;
    v11 = v19;
    if ( dest == 0x8000000000000000LL )
    {
      v3 = alloc::boxed::Box<T>::new(&v10);
    }
    else
    {
      v9 = v21;
      v8 = v20;
      *(_OWORD *)v7 = v10;
      *(_QWORD *)&v7[16] = v11;
      v6 = dest;
      v3 = uu_unexpand::unexpand(&v6);
      core::ptr::drop_in_place<uu_unexpand::Options>(&v6);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v12);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v5);
  return v3;
}