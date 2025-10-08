__int64 __fastcall uu_chcon::parse_command_line(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  char v3; // r14
  char v4; // r15
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  char flag; // [rsp+Bh] [rbp-23Dh]
  char v21; // [rsp+Ch] [rbp-23Ch]
  _BYTE v22[120]; // [rsp+10h] [rbp-238h] BYREF
  _OWORD v23[3]; // [rsp+88h] [rbp-1C0h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-190h]
  __int128 v25; // [rsp+C0h] [rbp-188h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-178h]
  _BYTE v27[48]; // [rsp+E0h] [rbp-168h] BYREF
  __int128 v28; // [rsp+110h] [rbp-138h]
  __int128 v29; // [rsp+120h] [rbp-128h]
  __int128 v30; // [rsp+130h] [rbp-118h]
  __int128 v31; // [rsp+140h] [rbp-108h]
  __int64 v32; // [rsp+150h] [rbp-F8h]
  __int128 v33; // [rsp+160h] [rbp-E8h]
  __int64 v34; // [rsp+170h] [rbp-D8h]
  __int128 v35; // [rsp+180h] [rbp-C8h] BYREF
  __int128 v36; // [rsp+190h] [rbp-B8h]
  __int128 v37; // [rsp+1A0h] [rbp-A8h]
  __int128 v38; // [rsp+1B0h] [rbp-98h]
  __int128 v39; // [rsp+1C0h] [rbp-88h]
  __int128 v40; // [rsp+1D0h] [rbp-78h] BYREF
  __int64 v41; // [rsp+1E0h] [rbp-68h]
  __int128 v42; // [rsp+1E8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+1F8h] [rbp-50h]
  __int128 v44; // [rsp+200h] [rbp-48h] BYREF
  __int64 v45; // [rsp+210h] [rbp-38h]

  clap_builder::builder::command::Command::try_get_matches_from(v22);
  result = *(_QWORD *)&v22[8];
  if ( __OFSUB__(-*(_QWORD *)v22, 1LL) )
  {
    *(_DWORD *)(a1 + 8) = 14;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return result;
  }
  v24 = *(_QWORD *)&v22[48];
  v23[2] = *(_OWORD *)&v22[32];
  v23[1] = *(_OWORD *)&v22[16];
  v23[0] = *(_OWORD *)v22;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v23,
           aVerbose,
           *(&uu_chcon::options::VERBOSE + 1));
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           v23,
                           aRecursive,
                           *(&uu_chcon::options::RECURSIVE + 1)) )
  {
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v23,
           aNoDereference,
           *(&uu_chcon::options::dereference::NO_DEREFERENCE + 1)) ^ 1;
    v21 = 0;
    goto LABEL_8;
  }
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           v23,
                           aFollowDirSymLi,
                           *(&uu_chcon::options::sym_links::FOLLOW_DIR_SYM_LINKS + 1)) )
  {
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            v23,
                            aFollowArgDirSy,
                            *(&uu_chcon::options::sym_links::FOLLOW_ARG_DIR_SYM_LINK + 1)) )
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                              v23,
                              aNoDereference,
                              *(&uu_chcon::options::dereference::NO_DEREFERENCE + 1)) )
      {
        *(_QWORD *)v27 = &uu_chcon::options::RECURSIVE;
        *(_QWORD *)&v27[8] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v27[16] = &uu_chcon::options::dereference::NO_DEREFERENCE;
        *(_QWORD *)&v27[24] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)v22 = &off_EF4F0;
        *(_QWORD *)&v22[8] = 3LL;
        *(_QWORD *)&v22[32] = 0LL;
        *(_QWORD *)&v22[16] = v27;
        *(_QWORD *)&v22[24] = 2LL;
        core::option::Option<T>::map_or_else(&v42, v22);
        *(_OWORD *)&v22[4] = v42;
        v2 = v43;
        goto LABEL_26;
      }
      v3 = 1;
      v21 = 3;
    }
    else
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                              v23,
                              aDereference,
                              *(&uu_chcon::options::dereference::DEREFERENCE + 1)) )
      {
        *(_QWORD *)v27 = &uu_chcon::options::RECURSIVE;
        *(_QWORD *)&v27[8] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v27[16] = &uu_chcon::options::dereference::DEREFERENCE;
        *(_QWORD *)&v27[24] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)v22 = &off_EF520;
        *(_QWORD *)&v22[8] = 3LL;
        *(_QWORD *)&v22[32] = 0LL;
        *(_QWORD *)&v22[16] = v27;
        *(_QWORD *)&v22[24] = 2LL;
        core::option::Option<T>::map_or_else(&v44, v22);
        *(_OWORD *)&v22[4] = v44;
        v2 = v45;
        goto LABEL_26;
      }
      v21 = 1;
      v3 = 0;
    }
LABEL_8:
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v23,
           aPreserveRoot,
           *(&uu_chcon::options::preserve_root::PRESERVE_ROOT + 1));
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v22, v23);
    clap_builder::parser::error::MatchesError::unwrap(v27, v22);
    if ( *(_QWORD *)v27 )
    {
      v38 = v28;
      v37 = *(_OWORD *)&v27[32];
      v36 = *(_OWORD *)&v27[16];
      v35 = *(_OWORD *)v27;
    }
    else
    {
      *(_QWORD *)&v35 = core::ops::function::FnOnce::call_once;
      *((_QWORD *)&v35 + 1) = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
      *(_QWORD *)&v36 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
      *((_QWORD *)&v36 + 1) = 0LL;
      *((_QWORD *)&v37 + 1) = 0LL;
      *((_QWORD *)&v38 + 1) = 0LL;
    }
    v5 = (__int64)*(&uu_chcon::options::REFERENCE + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v22, v23, aReference, v5);
    v6 = clap_builder::parser::error::MatchesError::unwrap(aReference, v5, v22);
    if ( v6 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v22, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16));
      *(_QWORD *)&v27[24] = *(_QWORD *)&v22[16];
      *(_OWORD *)&v27[8] = *(_OWORD *)v22;
      v7 = 0x8000000000000001LL;
    }
    else
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                              v23,
                              aUser,
                              *(&uu_chcon::options::USER + 1))
        || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                              v23,
                              aRole,
                              *(&uu_chcon::options::ROLE + 1))
        || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                              v23,
                              aType,
                              *(&uu_chcon::options::TYPE + 1))
        || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                              v23,
                              aRange,
                              *(&uu_chcon::options::RANGE + 1)) )
      {
        v8 = (__int64)*(&uu_chcon::options::USER + 1);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v22, v23, aUser, v8);
        v9 = clap_builder::parser::error::MatchesError::unwrap(aUser, v8, v22);
        if ( v9 )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v22, *(_QWORD *)(v9 + 8), *(_QWORD *)(v9 + 16));
          v32 = *(_QWORD *)&v22[16];
          v31 = *(_OWORD *)v22;
        }
        else
        {
          *(_QWORD *)&v31 = 0x8000000000000000LL;
        }
        v12 = (__int64)*(&uu_chcon::options::ROLE + 1);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v22, v23, aRole, v12);
        v13 = clap_builder::parser::error::MatchesError::unwrap(aRole, v12, v22);
        if ( v13 )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
            v22,
            *(_QWORD *)(v13 + 8),
            *(_QWORD *)(v13 + 16));
          v34 = *(_QWORD *)&v22[16];
          v33 = *(_OWORD *)v22;
        }
        else
        {
          *(_QWORD *)&v33 = 0x8000000000000000LL;
        }
        v14 = (__int64)*(&uu_chcon::options::TYPE + 1);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v22, v23, aType, v14);
        v15 = clap_builder::parser::error::MatchesError::unwrap(aType, v14, v22);
        if ( v15 )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
            v22,
            *(_QWORD *)(v15 + 8),
            *(_QWORD *)(v15 + 16));
          v26 = *(_QWORD *)&v22[16];
          v25 = *(_OWORD *)v22;
        }
        else
        {
          *(_QWORD *)&v25 = 0x8000000000000000LL;
        }
        v16 = (__int64)*(&uu_chcon::options::RANGE + 1);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v22, v23, aRange, v16);
        v17 = clap_builder::parser::error::MatchesError::unwrap(aRange, v16, v22);
        v18 = 0x8000000000000000LL;
        if ( v17 )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
            v22,
            *(_QWORD *)(v17 + 8),
            *(_QWORD *)(v17 + 16));
          v18 = *(_QWORD *)v22;
          v39 = *(_OWORD *)&v22[8];
        }
        *(_QWORD *)&v27[16] = v32;
        *(_OWORD *)v27 = v31;
        *(_OWORD *)&v27[24] = v33;
        *(_QWORD *)&v27[40] = v34;
        v28 = v25;
        *(_QWORD *)&v29 = v26;
        *((_QWORD *)&v29 + 1) = v18;
        v30 = v39;
        goto LABEL_37;
      }
      v19 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v35);
      if ( !v19 )
      {
        *(_DWORD *)(a1 + 8) = 10;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        return core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v23);
      }
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v22, *(_QWORD *)(v19 + 8), *(_QWORD *)(v19 + 16));
      *(_QWORD *)&v27[24] = *(_QWORD *)&v22[16];
      *(_OWORD *)&v27[8] = *(_OWORD *)v22;
      v7 = 0x8000000000000002LL;
    }
    *(_QWORD *)v27 = v7;
LABEL_37:
    core::iter::traits::iterator::Iterator::collect(&v25, &v35);
    if ( v26 )
    {
      *(_OWORD *)&v22[104] = v30;
      *(_OWORD *)&v22[88] = v29;
      *(_OWORD *)&v22[72] = v28;
      *(_OWORD *)&v22[56] = *(_OWORD *)&v27[32];
      *(_OWORD *)&v22[40] = *(_OWORD *)&v27[16];
      *(_OWORD *)&v22[24] = *(_OWORD *)v27;
      *(_QWORD *)&v22[16] = v26;
      *(_OWORD *)v22 = v25;
      *(_OWORD *)a1 = v25;
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v22[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v22[48];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v22[64];
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v22[80];
      *(_OWORD *)(a1 + 96) = *(_OWORD *)&v22[96];
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v22[16];
      *(_QWORD *)(a1 + 112) = *(_QWORD *)&v22[112];
      *(_BYTE *)(a1 + 120) = flag;
      *(_BYTE *)(a1 + 121) = v4;
      *(_BYTE *)(a1 + 122) = v3;
      *(_BYTE *)(a1 + 123) = v21;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 11;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v25);
      core::ptr::drop_in_place<uu_chcon::CommandLineMode>(v27);
    }
    return core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v23);
  }
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           v23,
                           aNoDereference,
                           *(&uu_chcon::options::dereference::NO_DEREFERENCE + 1)) )
  {
    v3 = 1;
    v21 = 2;
    goto LABEL_8;
  }
  *(_QWORD *)v27 = &uu_chcon::options::RECURSIVE;
  *(_QWORD *)&v27[8] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v27[16] = &uu_chcon::options::dereference::NO_DEREFERENCE;
  *(_QWORD *)&v27[24] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)v22 = &off_EF4F0;
  *(_QWORD *)&v22[8] = 3LL;
  *(_QWORD *)&v22[32] = 0LL;
  *(_QWORD *)&v22[16] = v27;
  *(_QWORD *)&v22[24] = 2LL;
  core::option::Option<T>::map_or_else(&v40, v22);
  *(_OWORD *)&v22[4] = v40;
  v2 = v41;
LABEL_26:
  *(_QWORD *)&v22[20] = v2;
  *(_DWORD *)(a1 + 8) = 13;
  v10 = *(_QWORD *)&v22[12];
  v11 = *(_QWORD *)&v22[20];
  *(_OWORD *)(a1 + 12) = *(_OWORD *)v22;
  *(_QWORD *)(a1 + 24) = v10;
  *(_QWORD *)(a1 + 32) = v11;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v23);
}