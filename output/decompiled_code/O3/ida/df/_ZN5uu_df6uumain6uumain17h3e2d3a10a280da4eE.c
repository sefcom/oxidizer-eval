__int64 __fastcall uu_df::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rsi
  __int128 v6; // [rsp+8h] [rbp-450h] BYREF
  __int64 v7; // [rsp+18h] [rbp-440h]
  __int128 v8; // [rsp+20h] [rbp-438h] BYREF
  __int128 v9; // [rsp+30h] [rbp-428h]
  __int128 v10; // [rsp+40h] [rbp-418h]
  __int64 v11; // [rsp+50h] [rbp-408h]
  __int128 v12; // [rsp+60h] [rbp-3F8h] BYREF
  __int128 v13; // [rsp+70h] [rbp-3E8h]
  __int128 v14; // [rsp+80h] [rbp-3D8h]
  __int128 v15; // [rsp+90h] [rbp-3C8h]
  __int64 v16; // [rsp+A0h] [rbp-3B8h] BYREF
  _BYTE v17[48]; // [rsp+A8h] [rbp-3B0h]
  __int128 v18; // [rsp+D8h] [rbp-380h]
  __int128 v19; // [rsp+E8h] [rbp-370h]
  _QWORD v20[2]; // [rsp+F8h] [rbp-360h] BYREF
  __int128 v21; // [rsp+108h] [rbp-350h]
  __int128 v22; // [rsp+118h] [rbp-340h]
  __int64 v23; // [rsp+128h] [rbp-330h]
  _OWORD v24[4]; // [rsp+130h] [rbp-328h] BYREF
  _BYTE v25[40]; // [rsp+170h] [rbp-2E8h] BYREF
  __int128 v26; // [rsp+198h] [rbp-2C0h]
  __int128 v27; // [rsp+1A8h] [rbp-2B0h]
  __int128 v28; // [rsp+1B8h] [rbp-2A0h]

  uu_df::uu_app(v25);
  clap_builder::builder::command::Command::try_get_matches_from(&v16, v25, a1, a2);
  if ( v16 != 0x8000000000000000LL )
  {
    v23 = *(_QWORD *)&v17[40];
    v22 = *(_OWORD *)&v17[24];
    v21 = *(_OWORD *)&v17[8];
    v20[0] = v16;
    v20[1] = *(_QWORD *)v17;
    uu_df::Options::from(v25, v20);
    if ( *(_QWORD *)v25 == 0x8000000000000000LL )
    {
      core::ops::function::FnOnce::call_once(&v12, &v25[8]);
      v8 = v12;
      v9 = v13;
      *(_OWORD *)&v25[16] = v13;
      *(_OWORD *)v25 = v12;
      v2 = alloc::boxed::Box<T>::new(v25);
LABEL_19:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v20);
      return v2;
    }
    *(_OWORD *)&v17[32] = v26;
    v18 = v27;
    v19 = v28;
    v8 = *(_OWORD *)&v25[8];
    *(_OWORD *)v17 = *(_OWORD *)&v25[8];
    *(_OWORD *)&v17[16] = *(_OWORD *)&v25[24];
    v16 = *(_QWORD *)v25;
    v3 = (__int64)*(&uu_df::OPT_PATHS + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v25, v20, aPaths, v3);
    clap_builder::parser::error::MatchesError::unwrap(&v12, aPaths, v3, v25);
    if ( (_QWORD)v12 )
    {
      v24[3] = v15;
      v24[2] = v14;
      v24[1] = v13;
      v24[0] = v12;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v6, v24);
      uu_df::get_named_filesystems(v25, *((__int64 *)&v6 + 1), v7, (__int64)&v16);
      v4 = *(_QWORD *)&v25[16];
      if ( *(_QWORD *)v25 == 0x8000000000000000LL )
      {
        v2 = uu_df::uumain::uumain::{{closure}}(*(_QWORD *)&v25[8], *(_QWORD *)&v25[16]);
LABEL_16:
        core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v6, v4);
        goto LABEL_18;
      }
      v8 = *(_OWORD *)v25;
      *(_QWORD *)&v9 = *(_QWORD *)&v25[16];
      if ( !*(_QWORD *)&v25[16] )
      {
        core::ptr::drop_in_place<alloc::vec::Vec<uu_df::filesystem::Filesystem>>(&v8, 0LL);
        v2 = 0LL;
        goto LABEL_16;
      }
      v11 = v9;
      v10 = v8;
      core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v6, *(_QWORD *)&v25[16]);
    }
    else
    {
      uu_df::get_all_filesystems(v25, &v16);
      if ( *(_QWORD *)v25 == 0x8000000000000000LL )
      {
        v2 = uu_df::uumain::uumain::{{closure}}(*(_QWORD *)&v25[8], *(_QWORD *)&v25[16]);
LABEL_18:
        core::ptr::drop_in_place<uu_df::Options>(&v16);
        goto LABEL_19;
      }
      v6 = *(_OWORD *)v25;
      v7 = *(_QWORD *)&v25[16];
      if ( !*(_QWORD *)&v25[16] )
      {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v8);
        *(_QWORD *)&v25[16] = v9;
        *(_OWORD *)v25 = v8;
        *(_DWORD *)&v25[24] = 1;
        v2 = alloc::boxed::Box<T>::new(v25);
        core::ptr::drop_in_place<alloc::vec::Vec<uu_df::filesystem::Filesystem>>(&v6, 0LL);
        goto LABEL_18;
      }
      v11 = v7;
      v10 = v6;
    }
    *(_QWORD *)&v13 = v11;
    v12 = v10;
    uu_df::table::Table::new(v25, &v16, &v12);
    *(_QWORD *)&v8 = v25;
    *((_QWORD *)&v8 + 1) = <uu_df::table::Table as core::fmt::Display>::fmt;
    *(_QWORD *)&v12 = &unk_13EAB0;
    *((_QWORD *)&v12 + 1) = 2LL;
    *(_QWORD *)&v14 = 0LL;
    *(_QWORD *)&v13 = &v8;
    *((_QWORD *)&v13 + 1) = 1LL;
    std::io::stdio::_print(&v12);
    core::ptr::drop_in_place<uu_df::table::Table>(v25);
    core::ptr::drop_in_place<uu_df::Options>(&v16);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v20);
    return 0LL;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)v17);
}
