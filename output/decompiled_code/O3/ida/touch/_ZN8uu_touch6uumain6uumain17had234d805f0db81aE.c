__int64 __fastcall uu_touch::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  char flag; // bl
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  char v11; // bp
  char v12; // al
  __int128 v14; // [rsp+0h] [rbp-438h]
  __int64 v15; // [rsp+10h] [rbp-428h]
  _BYTE v16[56]; // [rsp+20h] [rbp-418h] BYREF
  __int64 v17; // [rsp+58h] [rbp-3E0h]
  _OWORD v18[3]; // [rsp+68h] [rbp-3D0h] BYREF
  __int64 v19; // [rsp+98h] [rbp-3A0h]
  __int128 v20; // [rsp+A0h] [rbp-398h]
  __int64 v21; // [rsp+B0h] [rbp-388h]
  _BYTE v22[8]; // [rsp+B8h] [rbp-380h] BYREF
  __int64 v23; // [rsp+C0h] [rbp-378h]
  __int64 v24; // [rsp+C8h] [rbp-370h]
  __int128 v25; // [rsp+D0h] [rbp-368h] BYREF
  __int128 v26; // [rsp+E0h] [rbp-358h]
  __int128 v27; // [rsp+F0h] [rbp-348h]
  __int64 v28; // [rsp+100h] [rbp-338h] BYREF
  __int128 v29; // [rsp+108h] [rbp-330h]
  __int128 v30; // [rsp+118h] [rbp-320h]
  __int128 v31; // [rsp+128h] [rbp-310h]
  __int64 v32; // [rsp+138h] [rbp-300h]
  __int128 dest; // [rsp+140h] [rbp-2F8h] BYREF
  __int64 v34; // [rsp+150h] [rbp-2E8h]
  __int128 v35; // [rsp+158h] [rbp-2E0h]
  __int64 v36; // [rsp+168h] [rbp-2D0h]
  char v37; // [rsp+170h] [rbp-2C8h]
  char v38; // [rsp+171h] [rbp-2C7h]
  char v39; // [rsp+172h] [rbp-2C6h]
  char v40; // [rsp+173h] [rbp-2C5h]

  uu_touch::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(v16, &dest, a1, a2);
  if ( *(_QWORD *)v16 != 0x8000000000000000LL )
  {
    v19 = *(_QWORD *)&v16[48];
    v18[2] = *(_OWORD *)&v16[32];
    v18[1] = *(_OWORD *)&v16[16];
    v18[0] = *(_OWORD *)v16;
    v3 = (__int64)*(&uu_touch::ARG_FILES + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v18, aFiles, v3);
    clap_builder::parser::error::MatchesError::unwrap(v16, aFiles, v3, &dest);
    if ( !*(_QWORD *)v16 )
    {
      v2 = uu_touch::uumain::uumain::{{closure}}();
LABEL_17:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v18);
      return v2;
    }
    v32 = v17;
    v31 = *(_OWORD *)&v16[40];
    v30 = *(_OWORD *)&v16[24];
    v28 = *(_QWORD *)v16;
    v29 = *(_OWORD *)&v16[8];
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v22, &v28);
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             v18,
             anon_32920fb0992448a71939038bdb7f69c7_27_llvm_16001827659566714888,
             *(&uu_touch::options::NO_DEREF + 1));
    v5 = (__int64)*(&uu_touch::options::sources::REFERENCE + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      &dest,
      v18,
      anon_32920fb0992448a71939038bdb7f69c7_21_llvm_16001827659566714888,
      v5);
    v6 = clap_builder::parser::error::MatchesError::unwrap(
           anon_32920fb0992448a71939038bdb7f69c7_21_llvm_16001827659566714888,
           v5,
           &dest);
    v7 = (__int64)*(&uu_touch::options::sources::TIMESTAMP + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      &dest,
      v18,
      anon_32920fb0992448a71939038bdb7f69c7_22_llvm_16001827659566714888,
      v7);
    v8 = clap_builder::parser::error::MatchesError::unwrap(
           anon_32920fb0992448a71939038bdb7f69c7_22_llvm_16001827659566714888,
           v7,
           &dest);
    if ( v6 )
    {
      std::sys::os_str::bytes::Slice::to_owned(&dest, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16));
      v15 = v34;
      v14 = dest;
    }
    else if ( v8 )
    {
      uu_touch::parse_timestamp(&dest, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
      if ( (_QWORD)dest )
      {
        v2 = *((_QWORD *)&dest + 1);
LABEL_16:
        core::ptr::drop_in_place<alloc::vec::Vec<uu_touch::InputFile>>(v22);
        goto LABEL_17;
      }
      *((_QWORD *)&v14 + 1) = *((_QWORD *)&dest + 1);
      LODWORD(v15) = v34;
      *(_QWORD *)&v14 = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)&v14 = 0x8000000000000001LL;
    }
    v9 = (__int64)*(&uu_touch::options::sources::DATE + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v18, "datethur]", v9);
    v10 = clap_builder::parser::error::MatchesError::unwrap("datethur]", v9, &dest);
    if ( v10 )
    {
      <alloc::string::String as core::clone::Clone>::clone(&dest, v10);
      v21 = v34;
      v20 = dest;
    }
    else
    {
      *(_QWORD *)&v20 = 0x8000000000000000LL;
    }
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v18,
            anon_32920fb0992448a71939038bdb7f69c7_26_llvm_16001827659566714888,
            *(&uu_touch::options::NO_CREATE + 1));
    *(_QWORD *)&v26 = v15;
    v25 = v14;
    *(_QWORD *)&v16[16] = v21;
    *(_OWORD *)v16 = v20;
    v12 = uu_touch::determine_atime_mtime_change(v18);
    v37 = v11;
    v38 = flag;
    v35 = v25;
    v36 = v26;
    dest = *(_OWORD *)v16;
    v34 = *(_QWORD *)&v16[16];
    v40 = v12;
    v39 = 0;
    uu_touch::touch(&v25, v23, v24, &dest);
    if ( (_QWORD)v25 == 0x8000000000000004LL )
    {
      core::ptr::drop_in_place<uu_touch::Options>(&dest);
      core::ptr::drop_in_place<alloc::vec::Vec<uu_touch::InputFile>>(v22);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v18);
      return 0LL;
    }
    *(_OWORD *)&v16[32] = v27;
    *(_OWORD *)&v16[16] = v26;
    *(_OWORD *)v16 = v25;
    v2 = alloc::boxed::Box<T>::new(v16);
    core::ptr::drop_in_place<uu_touch::Options>(&dest);
    goto LABEL_16;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v16[8]);
}
