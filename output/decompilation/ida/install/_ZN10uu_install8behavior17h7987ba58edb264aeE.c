__int64 __fastcall uu_install::behavior(__int64 a1, __int64 a2)
{
  int v3; // r13d
  unsigned __int8 flag; // bp
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  unsigned int umask; // eax
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int8 v12; // r15
  __int128 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  void *v17; // r12
  __int128 v18; // rax
  __int128 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  int v24; // r12d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  void *v30; // rcx
  __int64 v31; // rdx
  char v32; // al
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  unsigned __int8 v35; // [rsp+4h] [rbp-154h]
  unsigned __int8 v36; // [rsp+5h] [rbp-153h]
  char v37; // [rsp+6h] [rbp-152h]
  char v38; // [rsp+7h] [rbp-151h]
  __int128 v39; // [rsp+8h] [rbp-150h] BYREF
  __int64 v40; // [rsp+18h] [rbp-140h]
  __int128 v41; // [rsp+20h] [rbp-138h] BYREF
  __int64 v42; // [rsp+30h] [rbp-128h]
  int v43; // [rsp+38h] [rbp-120h]
  int v44; // [rsp+3Ch] [rbp-11Ch]
  _BYTE v45[24]; // [rsp+40h] [rbp-118h] BYREF
  __int128 v46; // [rsp+58h] [rbp-100h]
  __int64 v47; // [rsp+68h] [rbp-F0h]
  __int128 v48; // [rsp+70h] [rbp-E8h]
  __int64 v49; // [rsp+80h] [rbp-D8h]
  int v50; // [rsp+B8h] [rbp-A0h]
  int v51; // [rsp+C4h] [rbp-94h]
  int v52; // [rsp+C8h] [rbp-90h]
  int v53; // [rsp+CCh] [rbp-8Ch]
  __int128 v54; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-78h]
  __int128 v56; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v57; // [rsp+100h] [rbp-58h]
  __int128 v58; // [rsp+108h] [rbp-50h] BYREF
  __int64 v59; // [rsp+118h] [rbp-40h]
  __int64 v60; // [rsp+120h] [rbp-38h]

  v3 = 0;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDirectory, 9LL);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aMode_0, 4LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v45, a2, aMode_0, 4LL);
    v5 = clap_builder::parser::error::MatchesError::unwrap(aMode_0, 4LL, v45);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 8);
      v7 = *(_QWORD *)(v5 + 16);
      umask = uucore::features::mode::get_umask();
      uu_install::mode::parse((__int64)&v41, v6, v7, flag, umask);
      if ( (_QWORD)v41 == 0x8000000000000000LL )
      {
        v52 = DWORD2(v41);
        v9 = 1;
        goto LABEL_6;
      }
      *(_QWORD *)&v45[16] = v42;
      *(_OWORD *)v45 = v41;
      uu_install::behavior::{{closure}}(v45);
    }
    *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
    *(_QWORD *)(a1 + 16) = v11;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return a1;
  }
  v9 = 0;
LABEL_6:
  uucore::features::backup_control::determine_backup_mode(v45, a2);
  if ( *(_QWORD *)v45 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v45;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return a1;
  }
  v60 = *(_QWORD *)&v45[8];
  v53 = v9;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v45, a2, &unk_1A5A0, 16LL);
  v10 = clap_builder::parser::error::MatchesError::unwrap(&unk_1A5A0, 16LL, v45);
  if ( v10 )
    <alloc::string::String as core::clone::Clone>::clone(&v58, v10);
  else
    *(_QWORD *)&v58 = 0x8000000000000000LL;
  v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoTargetDirect, 19LL);
  if ( (((_QWORD)v58 != 0x8000000000000000LL) & v12) != 0 )
  {
    *(_QWORD *)&v13 = uucore::util_name();
    v41 = v13;
    *(_QWORD *)&v39 = &v41;
    *((_QWORD *)&v39 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v45 = &unk_102188;
    *(_QWORD *)&v45[8] = 2LL;
    *(_QWORD *)&v45[16] = &v39;
    v46 = 1uLL;
    std::io::stdio::_eprint(v45);
    *(_QWORD *)v45 = &off_102270;
    *(_QWORD *)&v45[8] = 1LL;
    *(_QWORD *)&v45[16] = 8LL;
    v46 = 0LL;
    std::io::stdio::_eprint(v45);
    v14 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
LABEL_15:
    *(_QWORD *)(a1 + 8) = v14;
    *(_QWORD *)(a1 + 16) = v15;
    *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_16:
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v58);
    return a1;
  }
  v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPreserveTimest, 19LL);
  v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCompare, 7LL);
  v17 = &unk_1C6A7;
  v36 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, &unk_1C6A7, 5LL);
  if ( v37 )
  {
    if ( v35 )
    {
      *(_QWORD *)&v18 = uucore::util_name();
      v41 = v18;
      *(_QWORD *)&v39 = &v41;
      *((_QWORD *)&v39 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v45 = &unk_102188;
      *(_QWORD *)&v45[8] = 2LL;
      *(_QWORD *)&v45[16] = &v39;
      v46 = 1uLL;
      std::io::stdio::_eprint(v45);
      *(_QWORD *)v45 = &off_102280;
      *(_QWORD *)&v45[8] = 1LL;
      *(_QWORD *)&v45[16] = 8LL;
      v46 = 0LL;
      std::io::stdio::_eprint(v45);
      v14 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
      goto LABEL_15;
    }
  }
  else if ( (v36 & v35) != 0 )
  {
    *(_QWORD *)&v19 = uucore::util_name();
    v41 = v19;
    *(_QWORD *)&v39 = &v41;
    *((_QWORD *)&v39 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v45 = &unk_102188;
    *(_QWORD *)&v45[8] = 2LL;
    *(_QWORD *)&v45[16] = &v39;
    v46 = 1uLL;
    std::io::stdio::_eprint(v45);
    *(_QWORD *)v45 = &off_102290;
    *(_QWORD *)&v45[8] = 1LL;
    *(_QWORD *)&v45[16] = 8LL;
    v46 = 0LL;
    std::io::stdio::_eprint(v45);
    v14 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
    goto LABEL_15;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v45, a2, aOwner, 5LL);
  v20 = clap_builder::parser::error::MatchesError::unwrap(aOwner, 5LL, v45);
  if ( v20 )
  {
    v22 = *(_QWORD *)(v20 + 8);
    v21 = *(_QWORD *)(v20 + 16);
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v22 )
    v21 = 0LL;
  v23 = 1LL;
  if ( v22 )
    v23 = v22;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v45, v23, v21);
  v55 = *(_QWORD *)&v45[16];
  v54 = *(_OWORD *)v45;
  if ( *(_QWORD *)&v45[16] )
  {
    <uucore::features::entries::Passwd as uucore::features::entries::Locate<&str>>::locate(v45, *((_QWORD *)&v54 + 1));
    if ( *(_QWORD *)v45 == 0x8000000000000000LL )
    {
      *((_QWORD *)&v39 + 1) = *(_QWORD *)&v45[8];
      LODWORD(v39) = 1;
      <alloc::string::String as core::clone::Clone>::clone(&v41, &v54);
      *(_QWORD *)&v46 = v42;
      *(_OWORD *)&v45[8] = v41;
      *(_QWORD *)v45 = 11LL;
      *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(v45);
      *(_QWORD *)(a1 + 16) = &off_102208;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::result::Result<u32,std::io::error::Error>>(&v39);
LABEL_45:
      core::ptr::drop_in_place<alloc::string::String>(&v54);
      goto LABEL_16;
    }
    v24 = v50;
    core::ptr::drop_in_place<uucore::features::entries::Passwd>(v45);
    v51 = v24;
    DWORD1(v39) = v24;
    v17 = &unk_1C6A7;
    LODWORD(v39) = 0;
    core::ptr::drop_in_place<core::result::Result<u32,std::io::error::Error>>(&v39);
    v44 = 1;
  }
  else
  {
    v44 = 0;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v45, a2, aGroup, 5LL);
  v25 = clap_builder::parser::error::MatchesError::unwrap(aGroup, 5LL, v45);
  if ( v25 )
  {
    v27 = *(_QWORD *)(v25 + 8);
    v26 = *(_QWORD *)(v25 + 16);
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v27 )
    v26 = 0LL;
  v28 = 1LL;
  if ( v27 )
    v28 = v27;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v45, v28, v26);
  v57 = *(_QWORD *)&v45[16];
  v56 = *(_OWORD *)v45;
  if ( *(_QWORD *)&v45[16] )
  {
    <uucore::features::entries::Group as uucore::features::entries::Locate<&str>>::locate(v45, *((_QWORD *)&v56 + 1));
    if ( *(_QWORD *)v45 == 0x8000000000000000LL )
    {
      *((_QWORD *)&v39 + 1) = *(_QWORD *)&v45[8];
      LODWORD(v39) = 1;
      <alloc::string::String as core::clone::Clone>::clone(&v41, &v56);
      *(_QWORD *)&v46 = v42;
      *(_OWORD *)&v45[8] = v41;
      *(_QWORD *)v45 = 12LL;
      *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(v45);
      *(_QWORD *)(a1 + 16) = &off_102208;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::result::Result<u32,std::io::error::Error>>(&v39);
      core::ptr::drop_in_place<alloc::string::String>(&v56);
      goto LABEL_45;
    }
    v3 = v46;
    core::ptr::drop_in_place<uucore::features::entries::Group>(v45);
    DWORD1(v39) = v3;
    LODWORD(v39) = 0;
    core::ptr::drop_in_place<core::result::Result<u32,std::io::error::Error>>(&v39);
    v43 = 1;
  }
  else
  {
    v43 = 0;
  }
  uucore::features::backup_control::determine_backup_suffix(&v39, a2);
  v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose, 7LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v45, a2, aStripProgram, 13LL);
  v29 = clap_builder::parser::error::MatchesError::unwrap(aStripProgram, 13LL, v45);
  if ( v29 )
  {
    v30 = *(void **)(v29 + 8);
    v29 = *(_QWORD *)(v29 + 16);
  }
  else
  {
    v30 = 0LL;
  }
  if ( v30 )
    v17 = v30;
  v31 = 5LL;
  if ( v30 )
    v31 = v29;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v45, v17, v31);
  v42 = *(_QWORD *)&v45[16];
  v41 = *(_OWORD *)v45;
  v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCreateLeading, 14LL);
  v49 = v59;
  v33 = v58;
  v48 = v58;
  v34 = v39;
  *(_OWORD *)v45 = v39;
  *(_QWORD *)&v45[16] = v40;
  v46 = v41;
  v47 = v42;
  *(_QWORD *)(a1 + 64) = v59;
  *(_OWORD *)(a1 + 48) = v33;
  *(_QWORD *)(a1 + 32) = *((_QWORD *)&v46 + 1);
  *(_QWORD *)(a1 + 40) = v47;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v45[16];
  *(_QWORD *)(a1 + 24) = v46;
  *(_OWORD *)a1 = v34;
  *(_DWORD *)(a1 + 72) = v53;
  *(_DWORD *)(a1 + 76) = v52;
  *(_DWORD *)(a1 + 80) = v44;
  *(_DWORD *)(a1 + 84) = v51;
  *(_DWORD *)(a1 + 88) = v43;
  *(_DWORD *)(a1 + 92) = v3;
  *(_BYTE *)(a1 + 96) = flag ^ 1;
  *(_BYTE *)(a1 + 97) = v38;
  *(_BYTE *)(a1 + 98) = v37;
  *(_BYTE *)(a1 + 99) = v35;
  *(_BYTE *)(a1 + 100) = v36;
  *(_BYTE *)(a1 + 101) = v32;
  *(_BYTE *)(a1 + 102) = v12;
  *(_BYTE *)(a1 + 103) = v60;
  core::ptr::drop_in_place<alloc::string::String>(&v56);
  core::ptr::drop_in_place<alloc::string::String>(&v54);
  return a1;
}