__int64 __fastcall uu_ls::uumain::uumain(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  _OWORD v7[4]; // [rsp+0h] [rbp-5C8h] BYREF
  __int128 v8; // [rsp+40h] [rbp-588h] BYREF
  __int64 v9; // [rsp+50h] [rbp-578h]
  _OWORD v10[3]; // [rsp+60h] [rbp-568h] BYREF
  __int64 v11; // [rsp+90h] [rbp-538h]
  __int128 v12; // [rsp+98h] [rbp-530h] BYREF
  __int64 v13; // [rsp+A8h] [rbp-520h]
  __int128 v14; // [rsp+B0h] [rbp-518h] BYREF
  __int64 v15; // [rsp+C0h] [rbp-508h]
  __int128 v16; // [rsp+C8h] [rbp-500h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-4F0h]
  __int128 v18; // [rsp+E0h] [rbp-4E8h] BYREF
  _BYTE src[240]; // [rsp+F0h] [rbp-4D8h] BYREF
  __int128 v20; // [rsp+1E0h] [rbp-3E8h] BYREF
  __int64 v21; // [rsp+1F0h] [rbp-3D8h]
  _DWORD dest[58]; // [rsp+1F8h] [rbp-3D0h] BYREF
  _BYTE v23[744]; // [rsp+2E0h] [rbp-2E8h] BYREF

  uu_ls::uu_app(v23);
  clap_builder::builder::command::Command::try_get_matches_from(&v18, v23, a1, a2);
  if ( (_QWORD)v18 == 0x8000000000000000LL )
  {
    v2 = *(unsigned __int8 *)(*((_QWORD *)&v18 + 1) + 213LL);
    if ( *(_BYTE *)(*((_QWORD *)&v18 + 1) + 213LL) )
    {
      if ( v2 == 12 || v2 == 14 )
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
      *(_QWORD *)&v7[0] = *((_QWORD *)&v18 + 1);
      <T as alloc::string::ToString>::to_string(&v14, v7);
      dest[0] = 2;
      v20 = v14;
      v21 = v15;
      v5 = alloc::boxed::Box<T>::new(&v20);
    }
    else
    {
      *(_QWORD *)&v7[0] = *((_QWORD *)&v18 + 1);
      <T as alloc::string::ToString>::to_string(&v12, v7);
      dest[0] = 1;
      v20 = v12;
      v21 = v13;
      v5 = alloc::boxed::Box<T>::new(&v20);
    }
    v3 = v5;
    core::ptr::drop_in_place<clap_builder::error::Error>(*(_QWORD *)&v7[0]);
    return v3;
  }
  v11 = *(_QWORD *)&src[32];
  v10[2] = *(_OWORD *)&src[16];
  v10[1] = *(_OWORD *)src;
  v10[0] = v18;
  uu_ls::Config::from(&v18, v10);
  v3 = *((_QWORD *)&v18 + 1);
  if ( (_QWORD)v18 != 0x8000000000000000LL )
  {
    memcpy(dest, &src[8], sizeof(dest));
    v20 = v18;
    v21 = *(_QWORD *)src;
    v4 = (__int64)*(&uu_ls::options::PATHS + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
      &v18,
      v10,
      anon_34cd953b2c946f74a585889e96ce9d7a_36_llvm_16853030268703478466,
      v4);
    clap_builder::parser::error::MatchesError::unwrap(
      v7,
      anon_34cd953b2c946f74a585889e96ce9d7a_36_llvm_16853030268703478466,
      v4,
      &v18);
    if ( *(_QWORD *)&v7[0] )
    {
      *(_OWORD *)&src[32] = v7[3];
      *(_OWORD *)&src[16] = v7[2];
      *(_OWORD *)src = v7[1];
      v18 = v7[0];
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v16, &v18);
      v8 = v16;
      v9 = v17;
    }
    else
    {
      uu_ls::uumain::uumain::{{closure}}(&v8);
    }
    *(_QWORD *)src = v9;
    v18 = v8;
    v3 = uu_ls::list(&v18, &v20);
    core::ptr::drop_in_place<uu_ls::Config>(&v20);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v10);
  return v3;
}
