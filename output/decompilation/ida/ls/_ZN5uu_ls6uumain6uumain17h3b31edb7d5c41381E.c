__int64 __fastcall uu_ls::uumain::uumain(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // [rsp+8h] [rbp-5C0h] BYREF
  __int128 v7; // [rsp+10h] [rbp-5B8h]
  _OWORD v8[3]; // [rsp+20h] [rbp-5A8h] BYREF
  __int64 v9; // [rsp+50h] [rbp-578h]
  __int128 v10; // [rsp+60h] [rbp-568h] BYREF
  __int64 v11; // [rsp+70h] [rbp-558h]
  __int128 v12; // [rsp+78h] [rbp-550h] BYREF
  __int64 v13; // [rsp+88h] [rbp-540h]
  _OWORD v14[17]; // [rsp+90h] [rbp-538h] BYREF
  __int128 v15; // [rsp+1A0h] [rbp-428h] BYREF
  __int64 v16; // [rsp+1B0h] [rbp-418h]
  _DWORD dest[60]; // [rsp+1B8h] [rbp-410h] BYREF
  _QWORD v18[8]; // [rsp+2A8h] [rbp-320h] BYREF
  _BYTE v19[736]; // [rsp+2E8h] [rbp-2E0h] BYREF

  uu_ls::uu_app(v19);
  clap_builder::builder::command::Command::try_get_matches_from(v14, v19, a1, a2);
  if ( __OFSUB__(0LL, *(_QWORD *)&v14[0]) )
  {
    v2 = *(_BYTE *)(*((_QWORD *)&v14[0] + 1) + 221LL);
    if ( (v2 & 0x1D) == 0xC )
    {
      return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
    }
    else
    {
      v6 = *((_QWORD *)&v14[0] + 1);
      if ( v2 )
      {
        <T as alloc::string::SpecToString>::spec_to_string(&v12, &v6);
        dest[0] = 2;
        v15 = v12;
        v16 = v13;
      }
      else
      {
        <T as alloc::string::SpecToString>::spec_to_string(&v10, &v6);
        dest[0] = 1;
        v15 = v10;
        v16 = v11;
      }
      v3 = alloc::boxed::Box<T>::new(&v15);
      core::ptr::drop_in_place<clap_builder::error::Error>(v6);
    }
  }
  else
  {
    v9 = *(_QWORD *)&v14[3];
    v8[2] = v14[2];
    v8[1] = v14[1];
    v8[0] = v14[0];
    uu_ls::Config::from(v14, v8);
    v3 = *((_QWORD *)&v14[0] + 1);
    if ( *(_QWORD *)&v14[0] != 0x8000000000000000LL )
    {
      memcpy(dest, (char *)&v14[1] + 8, sizeof(dest));
      v15 = v14[0];
      v16 = *(_QWORD *)&v14[1];
      v4 = (__int64)*(&uu_ls::options::PATHS + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v14, v8, aPaths, v4);
      clap_builder::parser::error::MatchesError::unwrap(v18, aPaths, v4, v14);
      if ( v18[0] )
      {
        core::iter::traits::iterator::Iterator::collect(v14, v18);
        v7 = *(_OWORD *)((char *)v14 + 8);
        v6 = *(_QWORD *)&v14[0];
      }
      else
      {
        uu_ls::uumain::uumain::{{closure}}(&v6);
      }
      *(_QWORD *)&v14[0] = v6;
      *(_OWORD *)((char *)v14 + 8) = v7;
      v3 = uu_ls::list(v14, &v15);
      core::ptr::drop_in_place<uu_ls::Config>(&v15);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v8);
  }
  return v3;
}