__int64 __fastcall uu_unexpand::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE v4[8]; // [rsp+8h] [rbp-380h] BYREF
  __int64 v5; // [rsp+10h] [rbp-378h]
  __int64 v6; // [rsp+18h] [rbp-370h]
  __int128 v7; // [rsp+20h] [rbp-368h] BYREF
  __int64 v8; // [rsp+30h] [rbp-358h]
  __int64 v9; // [rsp+40h] [rbp-348h] BYREF
  _BYTE v10[24]; // [rsp+48h] [rbp-340h]
  __int128 v11; // [rsp+60h] [rbp-328h]
  __int64 v12; // [rsp+70h] [rbp-318h]
  _QWORD v13[2]; // [rsp+78h] [rbp-310h] BYREF
  __int128 v14; // [rsp+88h] [rbp-300h]
  __int128 v15; // [rsp+98h] [rbp-2F0h]
  __int64 v16; // [rsp+A8h] [rbp-2E0h]
  _BYTE v17[24]; // [rsp+B0h] [rbp-2D8h] BYREF
  __int64 v18; // [rsp+C8h] [rbp-2C0h]
  __int128 v19; // [rsp+D0h] [rbp-2B8h]
  __int64 v20; // [rsp+E0h] [rbp-2A8h]

  uucore::Args::collect_ignore(v4, a1, a2);
  uu_unexpand::uu_app(v17);
  uu_unexpand::expand_shortcuts((__int64)&v7, v5, v6);
  clap_builder::builder::command::Command::try_get_matches_from(&v9, v17, &v7);
  if ( v9 == 0x8000000000000000LL )
  {
    v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)v10);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v4);
  }
  else
  {
    v16 = v12;
    v15 = v11;
    v14 = *(_OWORD *)&v10[8];
    v13[0] = v9;
    v13[1] = *(_QWORD *)v10;
    uu_unexpand::Options::new((__int64)v17, (__int64)v13);
    v7 = *(_OWORD *)&v17[8];
    v8 = v18;
    if ( *(_QWORD *)v17 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v17[16] = v8;
      *(_OWORD *)v17 = v7;
      v2 = alloc::boxed::Box<T>::new(v17);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v13);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v4);
    }
    else
    {
      v12 = v20;
      v11 = v19;
      *(_OWORD *)v10 = v7;
      *(_QWORD *)&v10[16] = v8;
      v9 = *(_QWORD *)v17;
      v2 = uu_unexpand::unexpand((__int64)&v9);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v13);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v4);
      core::ptr::drop_in_place<uu_unexpand::Options>(&v9);
    }
  }
  return v2;
}
