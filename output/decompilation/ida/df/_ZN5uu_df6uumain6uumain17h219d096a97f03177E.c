__int64 __fastcall uu_df::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // rbx
  __int128 v7; // [rsp+8h] [rbp-470h] BYREF
  __int64 v8; // [rsp+18h] [rbp-460h]
  __int128 v9; // [rsp+20h] [rbp-458h] BYREF
  __int128 v10; // [rsp+30h] [rbp-448h]
  __int64 v11; // [rsp+40h] [rbp-438h]
  __int128 v12; // [rsp+50h] [rbp-428h] BYREF
  __int64 v13; // [rsp+60h] [rbp-418h]
  __int64 v14; // [rsp+70h] [rbp-408h] BYREF
  _BYTE v15[48]; // [rsp+78h] [rbp-400h]
  __int128 v16; // [rsp+A8h] [rbp-3D0h]
  __int128 v17; // [rsp+B8h] [rbp-3C0h]
  _QWORD v18[2]; // [rsp+C8h] [rbp-3B0h] BYREF
  __int128 v19; // [rsp+D8h] [rbp-3A0h]
  __int128 v20; // [rsp+E8h] [rbp-390h]
  __int64 v21; // [rsp+F8h] [rbp-380h]
  __int128 v22; // [rsp+100h] [rbp-378h] BYREF
  __int64 v23; // [rsp+110h] [rbp-368h]
  __int128 v24; // [rsp+118h] [rbp-360h] BYREF
  __int64 v25; // [rsp+128h] [rbp-350h]
  __int128 v26; // [rsp+130h] [rbp-348h] BYREF
  __int128 v27; // [rsp+140h] [rbp-338h]
  _QWORD v28[8]; // [rsp+150h] [rbp-328h] BYREF
  _BYTE v29[24]; // [rsp+190h] [rbp-2E8h] BYREF
  __int128 v30; // [rsp+1A8h] [rbp-2D0h]
  __int128 v31; // [rsp+1B8h] [rbp-2C0h]
  __int128 v32; // [rsp+1C8h] [rbp-2B0h]
  __int128 v33; // [rsp+1D8h] [rbp-2A0h]

  uu_df::uu_app(v29);
  clap_builder::builder::command::Command::try_get_matches_from(&v14, v29, a1, a2);
  if ( __OFSUB__(-v14, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *(_QWORD *)v15,
             v29,
             v2,
             -v14);
  v21 = *(_QWORD *)&v15[40];
  v20 = *(_OWORD *)&v15[24];
  v19 = *(_OWORD *)&v15[8];
  v18[0] = v14;
  v18[1] = *(_QWORD *)v15;
  uu_df::Options::from(v29, v18);
  v9 = *(_OWORD *)&v29[8];
  v10 = v30;
  if ( *(_QWORD *)v29 != 0x8000000000000000LL )
  {
    v17 = v33;
    v16 = v32;
    *(_OWORD *)&v15[32] = v31;
    v26 = v9;
    v27 = v10;
    *(_OWORD *)v15 = v9;
    *(_OWORD *)&v15[16] = v10;
    v14 = *(_QWORD *)v29;
    v5 = (__int64)*(&uu_df::OPT_PATHS + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v29, v18, aPaths, v5);
    clap_builder::parser::error::MatchesError::unwrap(v28, aPaths, v5, v29);
    if ( v28[0] )
    {
      core::iter::traits::iterator::Iterator::collect(&v9, v28);
      v6 = *((_QWORD *)&v9 + 1);
      uu_df::get_named_filesystems(&v24, *((__int64 (__fastcall ***)())&v9 + 1), v10, (__int64 (__fastcall **)())&v14);
      if ( (_QWORD)v24 == 0x8000000000000000LL )
      {
        v4 = uu_df::uumain::uumain::{{closure}}(*((_QWORD *)&v24 + 1), v25);
LABEL_16:
        core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v9, v6);
        goto LABEL_17;
      }
      *(_OWORD *)v29 = v24;
      *(_QWORD *)&v29[16] = v25;
      if ( !v25 )
      {
        core::ptr::drop_in_place<alloc::vec::Vec<uu_df::filesystem::Filesystem>>(v29);
        v4 = 0LL;
        goto LABEL_16;
      }
      v13 = *(_QWORD *)&v29[16];
      v12 = *(_OWORD *)v29;
      core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v9, v6);
    }
    else
    {
      uu_df::get_all_filesystems(&v22, &v14);
      if ( (_QWORD)v22 == 0x8000000000000000LL )
      {
        v4 = uu_df::uumain::uumain::{{closure}}(*((_QWORD *)&v22 + 1), v23);
LABEL_17:
        core::ptr::drop_in_place<uu_df::Options>(&v14);
        goto LABEL_18;
      }
      v7 = v22;
      v8 = v23;
      if ( !v23 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, aNoFileSystemsP, 25LL);
        *(_QWORD *)&v29[16] = v10;
        *(_OWORD *)v29 = v9;
        LODWORD(v30) = 1;
        v4 = alloc::boxed::Box<T>::new(v29);
        core::ptr::drop_in_place<alloc::vec::Vec<uu_df::filesystem::Filesystem>>(&v7);
        goto LABEL_17;
      }
      v13 = v8;
      v12 = v7;
    }
    uu_df::table::Table::new(v29, &v14, &v12);
    *(_QWORD *)&v7 = v29;
    *((_QWORD *)&v7 + 1) = <uu_df::table::Table as core::fmt::Display>::fmt;
    *(_QWORD *)&v9 = &unk_102118;
    *((_QWORD *)&v9 + 1) = 2LL;
    v11 = 0LL;
    *(_QWORD *)&v10 = &v7;
    *((_QWORD *)&v10 + 1) = 1LL;
    std::io::stdio::_print(&v9);
    core::ptr::drop_in_place<uu_df::table::Table>(v29);
    core::ptr::drop_in_place<uu_df::Options>(&v14);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v18);
    return 0LL;
  }
  v26 = v9;
  v27 = v10;
  v4 = alloc::boxed::Box<T>::new(&v26);
LABEL_18:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v18);
  return v4;
}