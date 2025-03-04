__int64 __fastcall uu_ls::uumain::uumain(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // [rsp+8h] [rbp-5C0h] BYREF
  __int128 v7; // [rsp+10h] [rbp-5B8h]
  _OWORD v8[4]; // [rsp+20h] [rbp-5A8h] BYREF
  _OWORD v9[3]; // [rsp+60h] [rbp-568h] BYREF
  __int64 v10; // [rsp+90h] [rbp-538h]
  __int128 v11; // [rsp+98h] [rbp-530h] BYREF
  __int64 v12; // [rsp+A8h] [rbp-520h]
  __int128 v13; // [rsp+B0h] [rbp-518h] BYREF
  __int64 v14; // [rsp+C0h] [rbp-508h]
  __int64 v15; // [rsp+C8h] [rbp-500h] BYREF
  __int128 v16; // [rsp+D0h] [rbp-4F8h]
  _BYTE v17[256]; // [rsp+E0h] [rbp-4E8h] BYREF
  __int128 v18; // [rsp+1E0h] [rbp-3E8h] BYREF
  __int64 v19; // [rsp+1F0h] [rbp-3D8h]
  _DWORD dest[58]; // [rsp+1F8h] [rbp-3D0h] BYREF
  _BYTE v21[744]; // [rsp+2E0h] [rbp-2E8h] BYREF

  uu_ls::uu_app(v21);
  clap_builder::builder::command::Command::try_get_matches_from(v17, v21, a1, a2);
  if ( *(_QWORD *)v17 == 0x8000000000000000LL )
  {
    v2 = *(_BYTE *)(*(_QWORD *)&v17[8] + 213LL);
    if ( (v2 & 0x1D) == 0xC )
    {
      return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
    }
    else
    {
      *(_QWORD *)&v8[0] = *(_QWORD *)&v17[8];
      if ( v2 )
      {
        <T as alloc::string::ToString>::to_string(&v13, v8);
        dest[0] = 2;
        v18 = v13;
        v19 = v14;
      }
      else
      {
        <T as alloc::string::ToString>::to_string(&v11, v8);
        dest[0] = 1;
        v18 = v11;
        v19 = v12;
      }
      v3 = alloc::boxed::Box<T>::new(&v18);
      core::ptr::drop_in_place<clap_builder::error::Error>(*(_QWORD *)&v8[0]);
    }
  }
  else
  {
    v10 = *(_QWORD *)&v17[48];
    v9[2] = *(_OWORD *)&v17[32];
    v9[1] = *(_OWORD *)&v17[16];
    v9[0] = *(_OWORD *)v17;
    uu_ls::Config::from(v17, (__int64)v9);
    v3 = *(_QWORD *)&v17[8];
    if ( *(_QWORD *)v17 != 0x8000000000000000LL )
    {
      memcpy(dest, &v17[24], sizeof(dest));
      v18 = *(_OWORD *)v17;
      v19 = *(_QWORD *)&v17[16];
      v4 = (__int64)*(&uu_ls::options::PATHS + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
        v17,
        v9,
        anon_3f7e092f2ea554bdd060175bd8ea63d9_29_llvm_16502254941234113161,
        v4);
      clap_builder::parser::error::MatchesError::unwrap(
        v8,
        anon_3f7e092f2ea554bdd060175bd8ea63d9_29_llvm_16502254941234113161,
        v4,
        v17);
      if ( *(_QWORD *)&v8[0] )
      {
        *(_OWORD *)&v17[48] = v8[3];
        *(_OWORD *)&v17[32] = v8[2];
        *(_OWORD *)&v17[16] = v8[1];
        *(_OWORD *)v17 = v8[0];
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v15, v17);
        v7 = v16;
        v6 = v15;
      }
      else
      {
        uu_ls::uumain::uumain::{{closure}}(&v6);
      }
      *(_QWORD *)v17 = v6;
      *(_OWORD *)&v17[8] = v7;
      v3 = uu_ls::list((__int64)v17, (__int64)&v18);
      core::ptr::drop_in_place<uu_ls::Config>(&v18);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v9);
  }
  return v3;
}
